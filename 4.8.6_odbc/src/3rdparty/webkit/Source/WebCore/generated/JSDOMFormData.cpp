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
#include "JSDOMFormData.h"

#include "DOMFormData.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMFormData);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMFormDataTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMFormDataConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMFormDataTable = { 2, 1, JSDOMFormDataTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMFormDataConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMFormDataConstructorTable = { 1, 0, JSDOMFormDataConstructorTableValues, 0 };
const ClassInfo JSDOMFormDataConstructor::s_info = { "FormDataConstructor", &DOMConstructorObject::s_info, &JSDOMFormDataConstructorTable, 0 };

JSDOMFormDataConstructor::JSDOMFormDataConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDOMFormDataPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDOMFormDataConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMFormDataConstructor, JSDOMWrapper>(exec, &JSDOMFormDataConstructorTable, this, propertyName, slot);
}

bool JSDOMFormDataConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMFormDataConstructor, JSDOMWrapper>(exec, &JSDOMFormDataConstructorTable, this, propertyName, descriptor);
}

ConstructType JSDOMFormDataConstructor::getConstructData(ConstructData& constructData)
{
    constructData.native.function = constructJSDOMFormData;
    return ConstructTypeHost;
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMFormDataPrototypeTableValues[2] =
{
    { "append", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMFormDataPrototypeFunctionAppend), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMFormDataPrototypeTable = { 2, 1, JSDOMFormDataPrototypeTableValues, 0 };
const ClassInfo JSDOMFormDataPrototype::s_info = { "FormDataPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDOMFormDataPrototypeTable, 0 };

JSObject* JSDOMFormDataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMFormData>(exec, globalObject);
}

bool JSDOMFormDataPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMFormDataPrototypeTable, this, propertyName, slot);
}

bool JSDOMFormDataPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMFormDataPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDOMFormData::s_info = { "FormData", &JSDOMWrapper::s_info, &JSDOMFormDataTable, 0 };

JSDOMFormData::JSDOMFormData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMFormData> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMFormData::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDOMFormDataPrototype(exec->globalData(), globalObject, JSDOMFormDataPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDOMFormData::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMFormData, Base>(exec, &JSDOMFormDataTable, this, propertyName, slot);
}

bool JSDOMFormData::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMFormData, Base>(exec, &JSDOMFormDataTable, this, propertyName, descriptor);
}

JSValue jsDOMFormDataConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMFormData* domObject = static_cast<JSDOMFormData*>(asObject(slotBase));
    return JSDOMFormData::getConstructor(exec, domObject->globalObject());
}

JSValue JSDOMFormData::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMFormDataConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMFormDataPrototypeFunctionAppend(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMFormData::s_info))
        return throwVMTypeError(exec);
    JSDOMFormData* castedThis = static_cast<JSDOMFormData*>(asObject(thisValue));
    return JSValue::encode(castedThis->append(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMFormData* impl)
{
    return wrap<JSDOMFormData>(exec, globalObject, impl);
}

DOMFormData* toDOMFormData(JSC::JSValue value)
{
    return value.inherits(&JSDOMFormData::s_info) ? static_cast<JSDOMFormData*>(asObject(value))->impl() : 0;
}

}
