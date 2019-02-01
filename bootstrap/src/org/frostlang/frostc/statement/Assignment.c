#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn82)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn90)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn98)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn116)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn131)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 4166699868084837216, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, -6277848839784652004, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$lvalue$LValue* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
// line 16
frost$core$Bit $tmp2 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(param3);
frost$core$Bit $tmp3 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2);
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 17
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s5);
// line 18
return;
block2:;
// line 20
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp6->value = param3;
frost$core$Int64 $tmp7 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp8 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp6)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp6), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp6)));
if ($tmp14) goto block3; else goto block4;
block3:;
// line 21
frost$core$Int64* $tmp15 = &param2->$rawValue;
frost$core$Int64 $tmp16 = *$tmp15;
frost$core$Int64 $tmp17 = (frost$core$Int64) {5};
frost$core$Bit $tmp18 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp16, $tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp20 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp21 = *$tmp20;
*(&local0) = $tmp21;
org$frostlang$frostc$ASTNode** $tmp22 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp23 = *$tmp22;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$ASTNode* $tmp24 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local1) = $tmp23;
org$frostlang$frostc$expression$Binary$Operator* $tmp25 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$frostlang$frostc$ASTNode** $tmp27 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$ASTNode* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 23
org$frostlang$frostc$expression$Binary$Operator $tmp30 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp33 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp32);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp34));
bool $tmp39 = $tmp38.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
if ($tmp39) goto block7; else goto block8;
block7:;
// line 24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp40 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp40);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$Array* $tmp41 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local4) = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// line 25
org$frostlang$frostc$ASTNode* $tmp42 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp43 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp43, $tmp44);
org$frostlang$frostc$IR$Value* $tmp45 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp42, $tmp43);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$IR$Value* $tmp46 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local5) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// line 26
org$frostlang$frostc$IR$Value* $tmp47 = *(&local5);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
// line 27
org$frostlang$frostc$IR$Value* $tmp50 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp51 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp52 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block10:;
// line 29
frost$collections$Array* $tmp54 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp55 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp54, ((frost$core$Object*) $tmp55));
// line 30
frost$collections$Array* $tmp56 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp56, ((frost$core$Object*) param4));
// line 31
org$frostlang$frostc$Position $tmp57 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp58 = *(&local5);
frost$collections$Array* $tmp59 = *(&local4);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp60 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp60, $tmp61);
org$frostlang$frostc$IR$Value* $tmp62 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp57, $tmp58, &$s63, ((frost$collections$ListView*) $tmp59), $tmp60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// line 33
org$frostlang$frostc$IR$Value* $tmp64 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp66 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block8:;
org$frostlang$frostc$ASTNode* $tmp68 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp69 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block4;
block4:;
// line 38
org$frostlang$frostc$lvalue$LValue* $tmp70 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$lvalue$LValue* $tmp71 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local6) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// line 39
org$frostlang$frostc$lvalue$LValue* $tmp72 = *(&local6);
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit($tmp72 == NULL);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block11; else goto block12;
block11:;
// line 40
org$frostlang$frostc$lvalue$LValue* $tmp75 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block12:;
// line 42
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 43
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp76->value = param3;
frost$core$Int64 $tmp77 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp78 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp77);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp79;
$tmp79 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp79->value = $tmp78;
ITable* $tmp80 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Bit $tmp83 = $tmp81(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) $tmp79));
bool $tmp84 = $tmp83.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp79)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
if ($tmp84) goto block13; else goto block15;
block13:;
// line 44
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp85 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp86 = (frost$core$Int64) {3};
org$frostlang$frostc$lvalue$LValue* $tmp87 = *(&local6);
ITable* $tmp88 = $tmp87->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
org$frostlang$frostc$Type* $tmp91 = $tmp89($tmp87);
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp85, $tmp86, $tmp91, $tmp92);
org$frostlang$frostc$IR$Value* $tmp93 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$IR$Value* $tmp94 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local7) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
goto block14;
block15:;
// line 1
// line 47
org$frostlang$frostc$lvalue$LValue* $tmp95 = *(&local6);
ITable* $tmp96 = $tmp95->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
org$frostlang$frostc$IR$Value* $tmp99 = $tmp97($tmp95);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$IR$Value* $tmp100 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local8) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// line 48
org$frostlang$frostc$IR$Value* $tmp101 = *(&local8);
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101 == NULL);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block16; else goto block17;
block16:;
// line 49
org$frostlang$frostc$IR$Value* $tmp104 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp105 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block17:;
// line 51
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp107 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp108 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp109 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp107, $tmp108, param1, $tmp109);
org$frostlang$frostc$expression$Binary$Operator $tmp110 = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(param3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp111 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp112 = (frost$core$Int64) {3};
org$frostlang$frostc$lvalue$LValue* $tmp113 = *(&local6);
ITable* $tmp114 = $tmp113->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
org$frostlang$frostc$Type* $tmp117 = $tmp115($tmp113);
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp111, $tmp112, $tmp117, $tmp118);
org$frostlang$frostc$IR$Value* $tmp119 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp107, $tmp110, param4, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$IR$Value* $tmp120 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local7) = $tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$IR$Value* $tmp121 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block14;
block14:;
// line 54
org$frostlang$frostc$IR$Value* $tmp122 = *(&local7);
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit($tmp122 == NULL);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block18; else goto block19;
block18:;
// line 55
org$frostlang$frostc$IR$Value* $tmp125 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp126 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block19:;
// line 57
org$frostlang$frostc$lvalue$LValue* $tmp127 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp128 = *(&local7);
ITable* $tmp129 = $tmp127->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[2];
$tmp130($tmp127, $tmp128);
org$frostlang$frostc$IR$Value* $tmp132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp133 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(org$frostlang$frostc$statement$Assignment* param0) {

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(org$frostlang$frostc$statement$Assignment* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






