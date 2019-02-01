#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"

typedef struct org$frostlang$frostc$IR$Statement$ID {
    frost$core$Int64 value;
} org$frostlang$frostc$IR$Statement$ID;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$IR$Statement$ID$class_type;
extern org$frostlang$frostc$IR$Statement$ID$class_type org$frostlang$frostc$IR$Statement$ID$class;
typedef struct org$frostlang$frostc$IR$Statement$ID$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$IR$Statement$ID value;
} org$frostlang$frostc$IR$Statement$ID$wrapper;
typedef struct org$frostlang$frostc$IR$Statement$ID$nullable {
    org$frostlang$frostc$IR$Statement$ID value;
    bool nonnull;
} org$frostlang$frostc$IR$Statement$ID$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$IR$Statement$ID$wrapperclass_type;
extern org$frostlang$frostc$IR$Statement$ID$wrapperclass_type org$frostlang$frostc$IR$Statement$ID$wrapperclass;

