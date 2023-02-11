/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(METER_TAG)

#include "JSHTMLMeterElement.h"

#include "HTMLFormElement.h"
#include "HTMLMeterElement.h"
#include "JSHTMLFormElement.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLMeterElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMeterElementTableValues[10] =
{
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementValue), (intptr_t)setJSHTMLMeterElementValue THUNK_GENERATOR(0) },
    { "min", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementMin), (intptr_t)setJSHTMLMeterElementMin THUNK_GENERATOR(0) },
    { "max", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementMax), (intptr_t)setJSHTMLMeterElementMax THUNK_GENERATOR(0) },
    { "low", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementLow), (intptr_t)setJSHTMLMeterElementLow THUNK_GENERATOR(0) },
    { "high", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementHigh), (intptr_t)setJSHTMLMeterElementHigh THUNK_GENERATOR(0) },
    { "optimum", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementOptimum), (intptr_t)setJSHTMLMeterElementOptimum THUNK_GENERATOR(0) },
    { "form", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementForm), (intptr_t)0 THUNK_GENERATOR(0) },
    { "labels", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementLabels), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMeterElementTable = { 32, 31, JSHTMLMeterElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMeterElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMeterElementConstructorTable = { 1, 0, JSHTMLMeterElementConstructorTableValues, 0 };
class JSHTMLMeterElementConstructor : public DOMConstructorObject {
public:
    JSHTMLMeterElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLMeterElementConstructor::s_info = { "HTMLMeterElementConstructor", &DOMConstructorObject::s_info, &JSHTMLMeterElementConstructorTable, 0 };

JSHTMLMeterElementConstructor::JSHTMLMeterElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLMeterElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLMeterElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMeterElementConstructor, JSDOMWrapper>(exec, &JSHTMLMeterElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLMeterElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMeterElementConstructor, JSDOMWrapper>(exec, &JSHTMLMeterElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLMeterElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLMeterElementPrototypeTable = { 1, 0, JSHTMLMeterElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLMeterElementPrototype::s_info = { "HTMLMeterElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLMeterElementPrototypeTable, 0 };

JSObject* JSHTMLMeterElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMeterElement>(exec, globalObject);
}

const ClassInfo JSHTMLMeterElement::s_info = { "HTMLMeterElement", &JSHTMLElement::s_info, &JSHTMLMeterElementTable, 0 };

JSHTMLMeterElement::JSHTMLMeterElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMeterElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLMeterElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLMeterElementPrototype(exec->globalData(), globalObject, JSHTMLMeterElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLMeterElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMeterElement, Base>(exec, &JSHTMLMeterElementTable, this, propertyName, slot);
}

bool JSHTMLMeterElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLMeterElement, Base>(exec, &JSHTMLMeterElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLMeterElementValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->value());
    return result;
}


JSValue jsHTMLMeterElementMin(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->min());
    return result;
}


JSValue jsHTMLMeterElementMax(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->max());
    return result;
}


JSValue jsHTMLMeterElementLow(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->low());
    return result;
}


JSValue jsHTMLMeterElementHigh(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->high());
    return result;
}


JSValue jsHTMLMeterElementOptimum(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->optimum());
    return result;
}


JSValue jsHTMLMeterElementForm(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}


JSValue jsHTMLMeterElementLabels(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->labels()));
    return result;
}


JSValue jsHTMLMeterElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLMeterElement* domObject = static_cast<JSHTMLMeterElement*>(asObject(slotBase));
    return JSHTMLMeterElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLMeterElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLMeterElement, Base>(exec, propertyName, value, &JSHTMLMeterElementTable, this, slot);
}

void setJSHTMLMeterElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setValue(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementMin(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setMin(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementMax(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setMax(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementLow(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setLow(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementHigh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setHigh(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementOptimum(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLMeterElement* castedThis = static_cast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement* imp = static_cast<HTMLMeterElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setOptimum(value.toNumber(exec), ec);
    setDOMException(exec, ec);
}


JSValue JSHTMLMeterElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMeterElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(METER_TAG)
