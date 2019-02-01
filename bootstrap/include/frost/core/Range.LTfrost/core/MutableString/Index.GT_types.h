#pragma once
#include "frost_c.h"
#include "frost/core/MutableString/Index_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"

typedef struct frost$core$Range$LTfrost$core$MutableString$Index$GT {
    frost$core$MutableString$Index min;
    frost$core$MutableString$Index max;
    frost$core$Bit inclusive;
} frost$core$Range$LTfrost$core$MutableString$Index$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Range$LTfrost$core$MutableString$Index$GT$class_type;
extern frost$core$Range$LTfrost$core$MutableString$Index$GT$class_type frost$core$Range$LTfrost$core$MutableString$Index$GT$class;
typedef struct frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    frost$core$Range$LTfrost$core$MutableString$Index$GT value;
} frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper;
typedef struct frost$core$Range$LTfrost$core$MutableString$Index$GT$nullable {
    frost$core$Range$LTfrost$core$MutableString$Index$GT value;
    bool nonnull;
} frost$core$Range$LTfrost$core$MutableString$Index$GT$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass_type;
extern frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass_type frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass;

