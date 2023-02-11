#! /bin/sh
export QTDIR=$PWD
#export PATH=/opt/linux-devkit/bin:$PATH
export PATH=/opt/ti-sdk-am335x-evm/linux-devkit/sysroots/i686-arago-linux/usr/bin:$PATH
export PATH=$QTDIR/bin:$PATH
export LD_LIBRARY_PATH=$QTDIR/lib:$LD_LIBRARY_PATH

if [ -d "$QTDIR/src/sql/drivers/sqlite-linux" ]; then
 cd $QTDIR/src/sql/drivers
 mv sqlite sqlite-win
 mv sqlite-linux sqlite
 cd $QTDIR
else
 echo "sqlite-linux not exist";
fi

make distclean
make confclean
echo yes |./configure -prefix /qte_odbc/4.8.6 \
-embedded arm -platform qws/linux-x86-g++ -xplatform qws/linux-arm-gnueabihf-g++ \
-opensource  -fast -qconfig custom \
-no-largefile -no-system-proxies -no-exceptions -no-accessibility -no-stl -qt-sql-sqlite -no-qt3support \
-no-xmlpatterns -no-multimedia -no-audio-backend -no-phonon -no-phonon-backend  \
-no-webkit  -no-scripttools -no-declarative -no-declarative-debug \
-no-mmx -no-3dnow -no-sse -no-sse2 -no-sse3 -no-ssse3 -no-sse4.1 -no-sse4.2 -no-avx -no-neon \
-qt-zlib -no-libtiff  -qt-libpng -no-libmng -no-libjpeg -openssl -silent \
-nomake tools -nomake examples -nomake demos -nomake docs -nomake translations \
-no-rpath -optimized-qmake -no-nis -no-cups -no-iconv  -no-pch -no-dbus \
-little-endian  -host-little-endian -qt-freetype -depths all -no-opengl \
-reduce-relocations -no-glib -no-gtkstyle \
-no-gfx-multiscreen -qt-gfx-transformed -qt-gfx-vnc -qt-mouse-tslib -I/qte/tslib/include -L/qte/tslib/lib
make 2> build_log.txt
cd $QTDIR/lib
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtCore.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtGui.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtNetwork.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtScript.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtSql.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtSvg.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libQtXml.so
cd $QTDIR/plugins/sqldrivers
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libqsqlite.so
cd $QTDIR/plugins/imageformats
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libqgif.so
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  libqjpeg.so
cd $QTDIR/bin
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  moc
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  qmake
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  rcc
arm-arago-linux-gnueabi-strip  --strip-all --remove-section=.comment --remove-section=.note  uic
cd $QTDIR
make install
find . -name ".moc"  | xargs rm -rf
find . -name ".obj"    | xargs rm -rf
find . -name ".pch"   | xargs rm -rf
find . -name ".rcc"    | xargs rm -rf
find . -name ".uic"    | xargs rm -rf
find . -name "pkgconfig"    | xargs rm -rf
find . -name "Makefile"    | xargs rm -rf
cp -rf $QTDIR/include/ /qte_odbc/4.8.6/
cp -rf $QTDIR/src/ /qte_odbc/4.8.6/
tar -zcvf /qte_odbc/4.8.6.tar.gz /qte_odbc/4.8.6
#arm-arago-linux-gnueabi-readelf -e libQtSvg.so                 文件头
#arm-arago-linux-gnueabi-readelf -s -W  libQtSvg.so  > gui.txt  符号表  用关键词OBJECT查找
