#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(((frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(((frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$Range$LTfrost$core$MutableString$Index$GT$class_type frost$core$Range$LTfrost$core$MutableString$Index$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim, frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass_type frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim, frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, 3254264024099946405, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, 3254264024099946405, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

frost$core$Range$LTfrost$core$MutableString$Index$GT frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(frost$core$MutableString$Index param0, frost$core$MutableString$Index param1, frost$core$Bit param2) {

frost$core$Range$LTfrost$core$MutableString$Index$GT local0;
// line 30
frost$core$MutableString$Index* $tmp3 = &(&local0)->min;
*$tmp3 = param0;
// line 31
frost$core$MutableString$Index* $tmp4 = &(&local0)->max;
*$tmp4 = param1;
// line 32
frost$core$Bit* $tmp5 = &(&local0)->inclusive;
*$tmp5 = param2;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp6 = *(&local0);
return $tmp6;

}
frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

frost$core$MutableString* local0 = NULL;
// line 37
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp7 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp7);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$MutableString* $tmp8 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// line 38
frost$core$MutableString$Index $tmp9 = param0.min;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(true);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 39
frost$core$MutableString* $tmp12 = *(&local0);
frost$core$MutableString$Index $tmp13 = param0.min;
frost$core$MutableString$Index$wrapper* $tmp14;
$tmp14 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp14->value = $tmp13;
frost$core$MutableString$append$frost$core$Object($tmp12, ((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
goto block2;
block2:;
// line 41
frost$core$Bit $tmp15 = param0.inclusive;
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block5;
block3:;
// line 42
frost$core$MutableString* $tmp17 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp17, &$s18);
goto block4;
block5:;
// line 1
// line 45
frost$core$MutableString* $tmp19 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp19, &$s20);
goto block4;
block4:;
// line 47
frost$core$MutableString$Index $tmp21 = param0.max;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(true);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block6; else goto block7;
block6:;
// line 48
frost$core$MutableString* $tmp24 = *(&local0);
frost$core$MutableString$Index $tmp25 = param0.max;
frost$core$MutableString$Index$wrapper* $tmp26;
$tmp26 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp26->value = $tmp25;
frost$core$MutableString$append$frost$core$Object($tmp24, ((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
goto block7;
block7:;
// line 50
frost$core$MutableString* $tmp27 = *(&local0);
frost$core$String* $tmp28 = frost$core$MutableString$finish$R$frost$core$String($tmp27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp28;

}
void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

return;

}

