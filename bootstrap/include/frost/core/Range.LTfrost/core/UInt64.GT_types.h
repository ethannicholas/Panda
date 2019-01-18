#pragma once
#include "frost_c.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"

typedef struct frost$core$Range$LTfrost$core$UInt64$GT {
    frost$core$UInt64 min;
    frost$core$UInt64 max;
    frost$core$Bit inclusive;
} frost$core$Range$LTfrost$core$UInt64$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Range$LTfrost$core$UInt64$GT$class_type;
extern frost$core$Range$LTfrost$core$UInt64$GT$class_type frost$core$Range$LTfrost$core$UInt64$GT$class;
typedef struct frost$core$Range$LTfrost$core$UInt64$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    frost$core$Range$LTfrost$core$UInt64$GT value;
} frost$core$Range$LTfrost$core$UInt64$GT$wrapper;
typedef struct frost$core$Range$LTfrost$core$UInt64$GT$nullable {
    frost$core$Range$LTfrost$core$UInt64$GT value;
    bool nonnull;
} frost$core$Range$LTfrost$core$UInt64$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Range$LTfrost$core$UInt64$GT$wrapperclass_type;
extern frost$core$Range$LTfrost$core$UInt64$GT$wrapperclass_type frost$core$Range$LTfrost$core$UInt64$GT$wrapperclass;
