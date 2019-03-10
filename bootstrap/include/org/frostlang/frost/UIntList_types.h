#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frost$UIntList {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT range;
    frost$core$Int _count;
} org$frostlang$frost$UIntList;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frost$UIntList$class_type;
extern org$frostlang$frost$UIntList$class_type org$frostlang$frost$UIntList$class;

