/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef INODRAWHELPER_P_H
#define INODRAWHELPER_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "QtCore/qglobal.h"
#include "QtGui/qcolor.h"
#include "QtGui/qpainter.h"
#include "QtGui/qimage.h"
#ifndef QT_FT_BEGIN_HEADER
#define QT_FT_BEGIN_HEADER
#define QT_FT_END_HEADER
#endif
#include "private/qrasterdefs_p.h"
#include <private/qsimd_p.h>
#include <private/qmath_p.h>

#ifdef Q_WS_QWS
#include "QtGui/qscreen_qws.h"
#endif

QT_BEGIN_NAMESPACE

#if defined(Q_CC_MSVC) && _MSCVER <= 1300 && !defined(Q_CC_INTEL)
#define Q_STATIC_TEMPLATE_SPECIALIZATION static
#else
#define Q_STATIC_TEMPLATE_SPECIALIZATION
#endif

#if defined(Q_CC_RVCT)
// RVCT doesn't like static template functions
#  define Q_STATIC_TEMPLATE_FUNCTION
#  define Q_STATIC_INLINE_FUNCTION static __forceinline
#else
#  define Q_STATIC_TEMPLATE_FUNCTION static
#  define Q_STATIC_INLINE_FUNCTION static inline
#endif

/*******************************************************************************
 * QSpan
 *
 * duplicate definition of FT_Span
 */
typedef QT_FT_Span QSpan;

struct QSolidData;
struct QTextureData;
struct QGradientData;
struct QLinearGradientData;
struct QRadialGradientData;
struct QConicalGradientData;
struct QSpanData;
class QGradient;
class QRasterBuffer;
class QClipData;
class QRasterPaintEngineState;

typedef QT_FT_SpanFunc ProcessSpans;
typedef void (*BitmapBlitFunc)(QRasterBuffer *rasterBuffer,
                               int x, int y, quint32 color,
                               const uchar *bitmap,
                               int mapWidth, int mapHeight, int mapStride);

typedef void (*AlphamapBlitFunc)(QRasterBuffer *rasterBuffer,
                                 int x, int y, quint32 color,
                                 const uchar *bitmap,
                                 int mapWidth, int mapHeight, int mapStride,
                                 const QClipData *clip);

typedef void (*AlphaRGBBlitFunc)(QRasterBuffer *rasterBuffer,
                                 int x, int y, quint32 color,
                                 const uint *rgbmask,
                                 int mapWidth, int mapHeight, int mapStride,
                                 const QClipData *clip);

typedef void (*RectFillFunc)(QRasterBuffer *rasterBuffer,
                             int x, int y, int width, int height,
                             quint32 color);

typedef void (*SrcOverBlendFunc)(uchar *destPixels, int dbpl,
                                 const uchar *src, int spbl,
                                 int w, int h,
                                 int const_alpha);

typedef void (*SrcOverScaleFunc)(uchar *destPixels, int dbpl,
                                 const uchar *src, int spbl, int srch,
                                 const QRectF &targetRect,
                                 const QRectF &sourceRect,
                                 const QRect &clipRect,
                                 int const_alpha);

typedef void (*SrcOverTransformFunc)(uchar *destPixels, int dbpl,
                                     const uchar *src, int spbl,
                                     const QRectF &targetRect,
                                     const QRectF &sourceRect,
                                     const QRect &clipRect,
                                     const QTransform &targetRectTransform,
                                     int const_alpha);

typedef void (*MemRotateFunc)(const uchar *srcPixels, int w, int h, int sbpl, uchar *destPixels, int dbpl);

extern SrcOverBlendFunc qBlendFunctions[QImage::NImageFormats][QImage::NImageFormats];
extern SrcOverScaleFunc qScaleFunctions[QImage::NImageFormats][QImage::NImageFormats];
extern SrcOverTransformFunc qTransformFunctions[QImage::NImageFormats][QImage::NImageFormats];
extern MemRotateFunc qMemRotateFunctions[QImage::NImageFormats][3];

extern DrawHelper qDrawHelper[QImage::NImageFormats];

void qBlendTexture(int count, const QSpan *spans, void *userData);
#if defined(Q_WS_QWS) && !defined(QT_NO_RASTERCALLBACKS)
extern DrawHelper qDrawHelperCallback[QImage::NImageFormats];
void qBlendTextureCallback(int count, const QSpan *spans, void *userData);
#endif

typedef void (QT_FASTCALL *CompositionFunction)(uint *dest, const uint *src, int length, uint const_alpha);
typedef void (QT_FASTCALL *CompositionFunctionSolid)(uint *dest, int length, uint color, uint const_alpha);

void qInitDrawhelperAsm();

#if defined(Q_CC_RVCT)
#  pragma push
#  pragma arm
#endif
#if defined(Q_CC_RVCT)
#  pragma pop
#endif

#if QT_POINTER_SIZE == 8 // 64-bit versions

Q_STATIC_INLINE_FUNCTION uint INTERPOLATE_PIXEL_256(uint x, uint a, uint y, uint b) {
    quint64 t = (((quint64(x)) | ((quint64(x)) << 24)) & 0x00ff00ff00ff00ff) * a;
    t += (((quint64(y)) | ((quint64(y)) << 24)) & 0x00ff00ff00ff00ff) * b;
    t >>= 8;
    t &= 0x00ff00ff00ff00ff;
    return (uint(t)) | (uint(t >> 24));
}

Q_STATIC_INLINE_FUNCTION uint BYTE_MUL(uint x, uint a) {
    quint64 t = (((quint64(x)) | ((quint64(x)) << 24)) & 0x00ff00ff00ff00ff) * a;
    t = (t + ((t >> 8) & 0xff00ff00ff00ff) + 0x80008000800080) >> 8;
    t &= 0x00ff00ff00ff00ff;
    return (uint(t)) | (uint(t >> 24));
}

Q_STATIC_INLINE_FUNCTION uint PREMUL(uint x) {
    uint a = x >> 24;
    quint64 t = (((quint64(x)) | ((quint64(x)) << 24)) & 0x00ff00ff00ff00ff) * a;
    t = (t + ((t >> 8) & 0xff00ff00ff00ff) + 0x80008000800080) >> 8;
    t &= 0x000000ff00ff00ff;
    return (uint(t)) | (uint(t >> 24)) | (a << 24);
}

#else // 32-bit versions

#if defined(Q_CC_RVCT)
#  pragma push
#  pragma arm
#endif
#if defined(Q_CC_RVCT)
#  pragma pop
#endif
#endif

#define INV_PREMUL(p)                                   \
    (qAlpha(p) == 0 ? 0 :                               \
    ((qAlpha(p) << 24)                                  \
     | (((255*qRed(p))/ qAlpha(p)) << 16)               \
     | (((255*qGreen(p)) / qAlpha(p))  << 8)            \
     | ((255*qBlue(p)) / qAlpha(p))))

class qrgb888V2
{
public:
    Q_STATIC_INLINE_FUNCTION bool hasAlpha() { return false; }

    inline qrgb888V2() {}
    inline qrgb888V2(quint32 v);

    inline operator quint32() const;

    inline quint8 alpha() const { return 0xff; }
    inline qrgb888V2 truncedAlpha() { return *this; }
    Q_STATIC_INLINE_FUNCTION quint8 alpha(quint8 a) { return a; }
    Q_STATIC_INLINE_FUNCTION quint8 ialpha(quint8 a) { return 255 - a; }

    inline qrgb888V2 byte_mul(quint8 a) const;
    inline qrgb888V2 operator+(qrgb888V2 v) const;
    inline bool operator==(qrgb888V2 v) const;

    inline quint32 rawValue() const;

private:
    uchar data[3];

} Q_PACKED;

qrgb888V2::qrgb888V2(quint32 v)
{
    //br对调，适应it7000 frambuff次序
    data[0] = qBlue(v);
    data[1] = qGreen(v);
    data[2] = qRed(v);
}

qrgb888V2::operator quint32() const
{
    return qRgb( data[2], data[1], data[0] );
}

qrgb888V2 qrgb888V2::operator+(qrgb888V2 v) const
{
    qrgb888V2 t = *this;
    t.data[0] += v.data[0];
    t.data[1] += v.data[1];
    t.data[2] += v.data[2];
    return t;
}

qrgb888V2 qrgb888V2::byte_mul(quint8 a) const
{
    quint32 x(*this);

    quint32 t = (x & 0xff00ff) * a;
    t = (t + ((t >> 8) & 0xff00ff) + 0x800080) >> 8;
    t &= 0xff00ff;

    x = ((x >> 8) & 0xff00ff) * a;
    x = (x + ((x >> 8) & 0xff00ff) + 0x800080);
    x &= 0xff00ff00;
    x |= t;
    return qrgb888V2(x);
}

bool qrgb888V2::operator==(qrgb888V2 v) const
{
    return (data[0] == v.data[0] &&
            data[1] == v.data[1] &&
            data[2] == v.data[2]);
}

quint32 qrgb888V2::rawValue() const
{
    return (data[0] << 16) | (data[1] << 8) | data[2];
}

template <>
inline qrgb888V2 qt_colorConvert(quint32 color, qrgb888V2 dummy)
{
    Q_UNUSED(dummy);
    return qrgb888V2(color);
}

template <>
inline quint32 qt_colorConvert(qrgb888V2 color, quint32 dummy)
{
    Q_UNUSED(dummy);
    return quint32(color);
}

template <class T>
void qt_memfill(T *dest, T value, int count);

#define QT_TRIVIAL_MEMCONVERT_IMPL(T) \
    template <> \
    inline void qt_memconvert(T *dest, const T *src, int count) \
    { \
        memcpy(dest, src, count * sizeof(T)); \
    }
QT_TRIVIAL_MEMCONVERT_IMPL(qrgb888V2)
#undef QT_TRIVIAL_MEMCONVERT_IMPL

#define QT_RECTCONVERT_TRIVIAL_IMPL(T)                                  \
    template <>                                                         \
    inline void qt_rectconvert(T *dest, const T *src,                   \
                               int x, int y, int width, int height,     \
                               int dstStride, int srcStride)            \
    {                                                                   \
        qt_rectcopy(dest, src, x, y, width, height, dstStride, srcStride); \
    }
QT_RECTCONVERT_TRIVIAL_IMPL(qrgb888V2)
#undef QT_RECTCONVERT_TRIVIAL_IMPL

#ifdef QT_QWS_DEPTH_GENERIC
template <> void qt_rectconvert(qrgb *dest, const quint32 *src,
                                int x, int y, int width, int height,
                                int dstStride, int srcStride);

template <> void qt_rectconvert(qrgb *dest, const quint16 *src,
                                int x, int y, int width, int height,
                                int dstStride, int srcStride);
#endif // QT_QWS_DEPTH_GENERIC

#define QT_MEMFILL_UINT(dest, length, color)            \
    qt_memfill<quint32>(dest, color, length);

#define QT_MEMFILL_USHORT(dest, length, color) \
    qt_memfill<quint16>(dest, color, length);

#define QT_MEMCPY_REV_UINT(dest, src, length) \
do {                                          \
    /* Duff's device */                       \
    uint *_d = (uint*)(dest) + length;         \
    const uint *_s = (uint*)(src) + length;    \
    register int n = ((length) + 7) / 8;      \
    switch ((length) & 0x07)                  \
    {                                         \
    case 0: do { *--_d = *--_s;                 \
    case 7:      *--_d = *--_s;                 \
    case 6:      *--_d = *--_s;                 \
    case 5:      *--_d = *--_s;                 \
    case 4:      *--_d = *--_s;                 \
    case 3:      *--_d = *--_s;                 \
    case 2:      *--_d = *--_s;                 \
    case 1:      *--_d = *--_s;                 \
    } while (--n > 0);                        \
    }                                         \
} while (0)

#define QT_MEMCPY_USHORT(dest, src, length) \
do {                                          \
    /* Duff's device */                       \
    ushort *_d = (ushort*)(dest);         \
    const ushort *_s = (ushort*)(src);    \
    register int n = ((length) + 7) / 8;      \
    switch ((length) & 0x07)                  \
    {                                         \
    case 0: do { *_d++ = *_s++;                 \
    case 7:      *_d++ = *_s++;                 \
    case 6:      *_d++ = *_s++;                 \
    case 5:      *_d++ = *_s++;                 \
    case 4:      *_d++ = *_s++;                 \
    case 3:      *_d++ = *_s++;                 \
    case 2:      *_d++ = *_s++;                 \
    case 1:      *_d++ = *_s++;                 \
    } while (--n > 0);                        \
    }                                         \
} while (0)

#if defined(Q_CC_RVCT)
#  pragma push
#  pragma arm
#endif

#define ARGB_COMBINE_ALPHA(argb, alpha) \
    ((((argb >> 24) * alpha) >> 8) << 24) | (argb & 0x00ffffff)


#if QT_POINTER_SIZE == 8 // 64-bit versions
#define AMIX(mask) (qMin(((qint64(s)&mask) + (qint64(d)&mask)), qint64(mask)))
#define MIX(mask) (qMin(((qint64(s)&mask) + (qint64(d)&mask)), qint64(mask)))
#else // 32 bits
// The mask for alpha can overflow over 32 bits
#define AMIX(mask) quint32(qMin(((qint64(s)&mask) + (qint64(d)&mask)), qint64(mask)))
#define MIX(mask) (qMin(((quint32(s)&mask) + (quint32(d)&mask)), quint32(mask)))
#endif

#undef MIX
#undef AMIX

// prototypes of all the composition functions
void QT_FASTCALL comp_func_SourceOver(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_DestinationOver(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Clear(uint *dest, const uint *, int length, uint const_alpha);
void QT_FASTCALL comp_func_Source(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Destination(uint *, const uint *, int, uint);
void QT_FASTCALL comp_func_SourceIn(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_DestinationIn(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_SourceOut(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_DestinationOut(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_SourceAtop(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_DestinationAtop(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_XOR(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Plus(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Multiply(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Screen(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Overlay(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Darken(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Lighten(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_ColorDodge(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_ColorBurn(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_HardLight(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_SoftLight(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Difference(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL comp_func_Exclusion(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_SourceOrDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_SourceAndDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_SourceXorDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_NotSourceAndNotDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_NotSourceOrNotDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_NotSourceXorDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_NotSource(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_NotSourceAndDestination(uint *dest, const uint *src, int length, uint const_alpha);
void QT_FASTCALL rasterop_SourceAndNotDestination(uint *dest, const uint *src, int length, uint const_alpha);

// prototypes of all the solid composition functions
void QT_FASTCALL comp_func_solid_SourceOver(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_DestinationOver(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Clear(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Source(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Destination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_SourceIn(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_DestinationIn(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_SourceOut(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_DestinationOut(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_SourceAtop(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_DestinationAtop(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_XOR(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Plus(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Multiply(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Screen(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Overlay(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Darken(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Lighten(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_ColorDodge(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_ColorBurn(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_HardLight(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_SoftLight(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Difference(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL comp_func_solid_Exclusion(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_SourceOrDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_SourceAndDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_SourceXorDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_NotSourceAndNotDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_NotSourceOrNotDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_NotSourceXorDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_NotSource(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_NotSourceAndDestination(uint *dest, int length, uint color, uint const_alpha);
void QT_FASTCALL rasterop_solid_SourceAndNotDestination(uint *dest, int length, uint color, uint const_alpha);

QT_END_NAMESPACE

#endif // QDRAWHELPER_P_H
