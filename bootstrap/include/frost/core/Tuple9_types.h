#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$Tuple9 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Object* f0;
    frost$core$Object* f1;
    frost$core$Object* f2;
    frost$core$Object* f3;
    frost$core$Object* f4;
    frost$core$Object* f5;
    frost$core$Object* f6;
    frost$core$Object* f7;
    frost$core$Object* f8;
} frost$core$Tuple9;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } frost$core$Tuple9$class_type;
extern frost$core$Tuple9$class_type frost$core$Tuple9$class;

