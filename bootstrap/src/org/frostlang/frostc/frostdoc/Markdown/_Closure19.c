#include "org/frostlang/frostc/frostdoc/Markdown/_Closure19.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure19$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure19$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure19$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure19$$anonymous18$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn19)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn34)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn40)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn45)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x39", 49, -5097778637230146731, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure19$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure19* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 736
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure19$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure19* param0) {

// line 736
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp5 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure19$$anonymous18$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure19* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
// line 737
frost$core$Int64 $tmp7 = (frost$core$Int64) {4};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp11)));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$core$String*) $tmp11);
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
// line 738
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp14 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp13, $tmp14);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 739
frost$core$Int64 $tmp16 = (frost$core$Int64) {1};
ITable* $tmp17 = param1->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Object* $tmp20 = $tmp18(param1, $tmp16);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp20)));
frost$core$String* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local2) = ((frost$core$String*) $tmp20);
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// line 740
frost$core$String* $tmp22 = *(&local2);
frost$core$Bit $tmp23 = org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit($tmp22);
frost$core$Bit $tmp24 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block4;
block4:;
frost$core$MutableString* $tmp26 = *(&local1);
frost$core$Bit $tmp27 = org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit($tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block3;
block1:;
// line 741
frost$core$MutableString* $tmp29 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp29);
// line 742
org$frostlang$frostc$frostdoc$Markdown** $tmp30 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp31 = *$tmp30;
frost$core$MutableString* $tmp32 = *(&local1);
$fn34 $tmp33 = ($fn34) $tmp31->$class->vtable[6];
$tmp33($tmp31, $tmp32);
goto block2;
block3:;
// line 1
// line 746
frost$core$MutableString* $tmp35 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp35);
// line 747
org$frostlang$frostc$frostdoc$Markdown** $tmp36 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp37 = *$tmp36;
frost$core$MutableString* $tmp38 = *(&local1);
$fn40 $tmp39 = ($fn40) $tmp37->$class->vtable[19];
$tmp39($tmp37, $tmp38);
// line 748
org$frostlang$frostc$frostdoc$Markdown** $tmp41 = &param0->$self;
org$frostlang$frostc$frostdoc$Markdown* $tmp42 = *$tmp41;
frost$core$MutableString* $tmp43 = *(&local1);
$fn45 $tmp44 = ($fn45) $tmp42->$class->vtable[22];
$tmp44($tmp42, $tmp43);
goto block2;
block2:;
// line 750
frost$core$MutableString* $tmp46 = *(&local1);
frost$core$MutableString$trim($tmp46);
// line 751
frost$core$MutableString* $tmp47 = *(&local1);
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s49, ((frost$core$Object*) $tmp47));
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp48, &$s51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$String* $tmp52 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = ((frost$core$String*) NULL);
return $tmp50;

}
