#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$HashMap$Entry frost$collections$HashMap$Entry;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$HashMap$EntryIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$HashMap* map;
    frost$core$Int64 bucket;
    frost$collections$HashMap$Entry* entry;
} frost$collections$HashMap$EntryIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$HashMap$EntryIterator$class_type;
extern frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class;
