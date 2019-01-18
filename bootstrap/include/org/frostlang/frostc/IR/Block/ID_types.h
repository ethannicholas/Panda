#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/IR/Block/ID_types.h"

typedef struct org$frostlang$frostc$IR$Block$ID {
    frost$core$Int64 value;
} org$frostlang$frostc$IR$Block$ID;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$IR$Block$ID$class_type;
extern org$frostlang$frostc$IR$Block$ID$class_type org$frostlang$frostc$IR$Block$ID$class;
typedef struct org$frostlang$frostc$IR$Block$ID$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$frostc$IR$Block$ID value;
} org$frostlang$frostc$IR$Block$ID$wrapper;
typedef struct org$frostlang$frostc$IR$Block$ID$nullable {
    org$frostlang$frostc$IR$Block$ID value;
    bool nonnull;
} org$frostlang$frostc$IR$Block$ID$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$IR$Block$ID$wrapperclass_type;
extern org$frostlang$frostc$IR$Block$ID$wrapperclass_type org$frostlang$frostc$IR$Block$ID$wrapperclass;
