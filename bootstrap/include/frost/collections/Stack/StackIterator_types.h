#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Stack$StackIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Stack* stack;
    frost$core$Int index;
} frost$collections$Stack$StackIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$Stack$StackIterator$class_type;
extern frost$collections$Stack$StackIterator$class_type frost$collections$Stack$StackIterator$class;

