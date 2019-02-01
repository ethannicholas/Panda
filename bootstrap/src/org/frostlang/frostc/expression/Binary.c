#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Scanner.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/expression/And.h"
#include "org/frostlang/frostc/expression/Or.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$class_type org$frostlang$frostc$expression$Binary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$cleanup} };

typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$Bit (*$fn79)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn83)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn133)(frost$core$Object*);
typedef frost$core$Bit (*$fn194)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn198)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn236)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn260)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn319)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn323)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn328)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn336)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn340)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn345)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn428)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn444)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn460)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn471)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn484)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn495)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn505)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn514)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn525)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn539)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn553)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn567)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn581)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn599)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn612)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn625)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn638)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn651)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn655)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn659)(frost$core$Object*);
typedef frost$core$Bit (*$fn673)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn754)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn775)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn786)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn825)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn847)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn866)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn965)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn970)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn993)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1008)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1022)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1029)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1048)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1063)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1071)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1079)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1086)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 8989498193344452911, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, -655368231937263126, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -6918652954435975437, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, 203, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, 203, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s1074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 256
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3);
return $tmp4;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Symbol* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$Pair* local5 = NULL;
org$frostlang$frostc$Pair* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$ClassDecl* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Pair* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
// line 188
frost$core$Bit $tmp5 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
frost$core$Bit $tmp6 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// line 191
org$frostlang$frostc$ClassDecl* $tmp8 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 192
org$frostlang$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block4:;
// line 195
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp14 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {7};
frost$core$Int64 $tmp16 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp17 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp14, $tmp15, $tmp17, param1);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 196
org$frostlang$frostc$ClassDecl* $tmp19 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp20 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp19);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp21->value = param2;
$fn23 $tmp22 = ($fn23) ((frost$core$Object*) $tmp21)->$class->vtable[0];
frost$core$String* $tmp24 = $tmp22(((frost$core$Object*) $tmp21));
org$frostlang$frostc$Symbol* $tmp25 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp20, $tmp24);
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Symbol* $tmp26 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local2) = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 197
org$frostlang$frostc$Symbol* $tmp27 = *(&local2);
frost$core$Bit $tmp28 = frost$core$Bit$init$builtin_bit($tmp27 != NULL);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block6;
block5:;
// line 198
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp30 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp30, $tmp31);
frost$collections$Array$add$frost$collections$Array$T($tmp30, ((frost$core$Object*) param3));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$Array* $tmp32 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local3) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 200
org$frostlang$frostc$Symbol* $tmp33 = *(&local2);
org$frostlang$frostc$Symbol$Kind* $tmp34 = &$tmp33->kind;
org$frostlang$frostc$Symbol$Kind $tmp35 = *$tmp34;
frost$core$Int64 $tmp36 = $tmp35.$rawValue;
frost$core$Int64 $tmp37 = (frost$core$Int64) {5};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block8; else goto block9;
block8:;
// line 202
org$frostlang$frostc$Symbol* $tmp40 = *(&local2);
org$frostlang$frostc$Annotations** $tmp41 = &((org$frostlang$frostc$MethodDecl*) $tmp40)->annotations;
org$frostlang$frostc$Annotations* $tmp42 = *$tmp41;
frost$core$Bit $tmp43 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp42);
frost$core$Bit $tmp44 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block10; else goto block12;
block12:;
frost$core$Bit $tmp46 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param1);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block10; else goto block11;
block10:;
// line 203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp48 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp48);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$collections$Array* $tmp49 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local4) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// line 204
frost$collections$Array* $tmp50 = *(&local4);
org$frostlang$frostc$Symbol* $tmp51 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp50, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp51)));
// line 205
org$frostlang$frostc$Position $tmp52 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp53 = *(&local1);
frost$collections$Array* $tmp54 = *(&local4);
frost$collections$Array* $tmp55 = *(&local3);
org$frostlang$frostc$Pair* $tmp56 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp52, $tmp53, ((frost$collections$ListView*) $tmp54), ((frost$collections$ListView*) $tmp55), param4);
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$Pair* $tmp57 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local5) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// line 207
org$frostlang$frostc$Pair* $tmp58 = *(&local5);
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit($tmp58 != NULL);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block13; else goto block14;
block13:;
// line 208
org$frostlang$frostc$Pair* $tmp61 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Pair* $tmp62 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp63 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local4) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp64 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp65 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp61;
block14:;
org$frostlang$frostc$Pair* $tmp68 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp69 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local4) = ((frost$collections$Array*) NULL);
goto block11;
block11:;
goto block7;
block9:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {6};
frost$core$Bit $tmp71 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block15; else goto block16;
block15:;
// line 213
org$frostlang$frostc$Position $tmp73 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp74 = *(&local1);
org$frostlang$frostc$Symbol* $tmp75 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp76 = &((org$frostlang$frostc$Methods*) $tmp75)->methods;
org$frostlang$frostc$FixedArray* $tmp77 = *$tmp76;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp78 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp78, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp80 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp80, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Object*) $tmp78));
ITable* $tmp81 = ((frost$collections$ListView*) $tmp77)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[4];
frost$collections$ListView* $tmp84 = $tmp82(((frost$collections$ListView*) $tmp77), $tmp80);
frost$collections$Array* $tmp85 = *(&local3);
org$frostlang$frostc$Pair* $tmp86 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp73, $tmp74, $tmp84, ((frost$collections$ListView*) $tmp85), param4);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$Pair* $tmp87 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local6) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 216
org$frostlang$frostc$Pair* $tmp88 = *(&local6);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit($tmp88 != NULL);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block17; else goto block18;
block17:;
// line 217
org$frostlang$frostc$Pair* $tmp91 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$Pair* $tmp92 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp93 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp94 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp91;
block18:;
org$frostlang$frostc$Pair* $tmp97 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block16:;
// line 221
frost$core$Int64 $tmp98 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s99, $tmp98);
abort(); // unreachable
block7:;
frost$collections$Array* $tmp100 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local3) = ((frost$collections$Array*) NULL);
goto block6;
block6:;
// line 227
org$frostlang$frostc$Type* $tmp101 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Type* $tmp102 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local7) = $tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// line 228
org$frostlang$frostc$Type* $tmp103 = *(&local7);
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 == NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block19; else goto block20;
block19:;
// line 229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp106 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp107 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block20:;
// line 231
org$frostlang$frostc$Type* $tmp110 = *(&local7);
frost$core$Bit $tmp111 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp110);
frost$core$Bit $tmp112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block21; else goto block22;
block21:;
// line 232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp114 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block22:;
// line 234
org$frostlang$frostc$Type* $tmp118 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp119 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp118);
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$ClassDecl* $tmp120 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local8) = $tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// line 235
org$frostlang$frostc$ClassDecl* $tmp121 = *(&local8);
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit($tmp121 == NULL);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block23; else goto block24;
block23:;
// line 236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp124 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp125 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block24:;
// line 238
org$frostlang$frostc$ClassDecl* $tmp129 = *(&local8);
org$frostlang$frostc$SymbolTable* $tmp130 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp129);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp131;
$tmp131 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp131->value = param2;
$fn133 $tmp132 = ($fn133) ((frost$core$Object*) $tmp131)->$class->vtable[0];
frost$core$String* $tmp134 = $tmp132(((frost$core$Object*) $tmp131));
org$frostlang$frostc$Symbol* $tmp135 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp130, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$Symbol* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// line 239
org$frostlang$frostc$Symbol* $tmp137 = *(&local2);
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit($tmp137 == NULL);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block25; else goto block26;
block25:;
// line 240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp140 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp141 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp143 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block26:;
// line 242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp145 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp145, $tmp146);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp147 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp148 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp149 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp150 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp147, $tmp148, $tmp149, $tmp150);
frost$collections$Array$add$frost$collections$Array$T($tmp145, ((frost$core$Object*) $tmp147));
frost$collections$Array$add$frost$collections$Array$T($tmp145, ((frost$core$Object*) param3));
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$collections$Array* $tmp151 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local9) = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// line 243
org$frostlang$frostc$Symbol* $tmp152 = *(&local2);
org$frostlang$frostc$Symbol$Kind* $tmp153 = &$tmp152->kind;
org$frostlang$frostc$Symbol$Kind $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = $tmp154.$rawValue;
frost$core$Int64 $tmp156 = (frost$core$Int64) {5};
frost$core$Bit $tmp157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp155, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block28; else goto block29;
block28:;
// line 245
org$frostlang$frostc$Symbol* $tmp159 = *(&local2);
org$frostlang$frostc$Annotations** $tmp160 = &((org$frostlang$frostc$MethodDecl*) $tmp159)->annotations;
org$frostlang$frostc$Annotations* $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp161);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block30; else goto block31;
block30:;
// line 246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp164);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$collections$Array* $tmp165 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local10) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// line 247
frost$collections$Array* $tmp166 = *(&local10);
org$frostlang$frostc$Symbol* $tmp167 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp166, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp167)));
// line 248
org$frostlang$frostc$Position $tmp168 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp169 = *(&local10);
frost$collections$Array* $tmp170 = *(&local9);
org$frostlang$frostc$Pair* $tmp171 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp168, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp169), ((frost$collections$ListView*) $tmp170), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$Pair* $tmp172 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local11) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// line 249
org$frostlang$frostc$Pair* $tmp173 = *(&local11);
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit($tmp173 != NULL);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block32; else goto block33;
block32:;
// line 250
org$frostlang$frostc$Pair* $tmp176 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$Pair* $tmp177 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp178 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local10) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp179 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local9) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp180 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp181 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp176;
block33:;
org$frostlang$frostc$Pair* $tmp185 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp186 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local10) = ((frost$collections$Array*) NULL);
goto block31;
block31:;
goto block27;
block29:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {6};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp155, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block34; else goto block35;
block34:;
// line 255
org$frostlang$frostc$Position $tmp190 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp191 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp192 = &((org$frostlang$frostc$Methods*) $tmp191)->methods;
org$frostlang$frostc$FixedArray* $tmp193 = *$tmp192;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp195 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp195, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp196 = ((frost$collections$ListView*) $tmp193)->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[4];
frost$collections$ListView* $tmp199 = $tmp197(((frost$collections$ListView*) $tmp193), ((frost$core$MutableMethod*) $tmp195));
frost$collections$Array* $tmp200 = *(&local9);
org$frostlang$frostc$Pair* $tmp201 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp190, ((org$frostlang$frostc$IR$Value*) NULL), $tmp199, ((frost$collections$ListView*) $tmp200), param4);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
org$frostlang$frostc$Pair* $tmp202 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local12) = $tmp201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// line 257
org$frostlang$frostc$Pair* $tmp203 = *(&local12);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203 != NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block36; else goto block37;
block36:;
// line 258
org$frostlang$frostc$Pair* $tmp206 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$Pair* $tmp207 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp208 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local9) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp209 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp210 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp206;
block37:;
org$frostlang$frostc$Pair* $tmp214 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
goto block27;
block35:;
// line 262
frost$core$Int64 $tmp215 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s216, $tmp215);
abort(); // unreachable
block27:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp217 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local9) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp218 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp219 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

frost$collections$CollectionView* local0 = NULL;
org$frostlang$frostc$Pair* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Pair* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$core$Int64 local5;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$MethodRef* local7 = NULL;
org$frostlang$frostc$MethodRef* local8 = NULL;
// line 271
frost$collections$CollectionView* $tmp223 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$collections$CollectionView* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local0) = $tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// line 272
frost$collections$CollectionView* $tmp225 = *(&local0);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// line 274
frost$collections$CollectionView* $tmp229 = *(&local0);
ITable* $tmp230 = ((frost$collections$Iterable*) $tmp229)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$collections$Iterator* $tmp233 = $tmp231(((frost$collections$Iterable*) $tmp229));
goto block3;
block3:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Object* $tmp242 = $tmp240($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp242)));
org$frostlang$frostc$Type* $tmp243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp242);
// line 275
org$frostlang$frostc$Type* $tmp244 = *(&local2);
org$frostlang$frostc$Pair* $tmp245 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp244);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$Pair* $tmp246 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local3) = $tmp245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// line 276
org$frostlang$frostc$Pair* $tmp247 = *(&local3);
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {276};
frost$core$String* $tmp251 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s252, ((frost$core$Object*) param1));
frost$core$String* $tmp253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp251, &$s254);
org$frostlang$frostc$Type* $tmp255 = *(&local2);
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp253, ((frost$core$Object*) $tmp255));
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
$fn260 $tmp259 = ($fn260) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp261 = $tmp259(param1);
org$frostlang$frostc$Position$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp262->value = $tmp261;
frost$core$String* $tmp263 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp257, ((frost$core$Object*) $tmp262));
frost$core$String* $tmp264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp263, &$s265);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s266, $tmp250, $tmp264);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
abort(); // unreachable
block6:;
// line 278
org$frostlang$frostc$Type* $tmp267 = *(&local2);
org$frostlang$frostc$Pair* $tmp268 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp267, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlang$frostc$Pair* $tmp269 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local4) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// line 279
org$frostlang$frostc$Pair* $tmp270 = *(&local4);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270 != NULL);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block8; else goto block9;
block8:;
// line 280
org$frostlang$frostc$Pair* $tmp273 = *(&local4);
frost$core$Object** $tmp274 = &$tmp273->second;
frost$core$Object* $tmp275 = *$tmp274;
org$frostlang$frostc$Pair* $tmp276 = *(&local3);
frost$core$Object** $tmp277 = &$tmp276->second;
frost$core$Object* $tmp278 = *$tmp277;
int64_t $tmp279 = ((frost$core$Int64$wrapper*) $tmp275)->value.value;
int64_t $tmp280 = ((frost$core$Int64$wrapper*) $tmp278)->value.value;
int64_t $tmp281 = $tmp279 + $tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {$tmp281};
*(&local5) = $tmp282;
// line 281
org$frostlang$frostc$Pair* $tmp283 = *(&local1);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 == NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block10; else goto block13;
block13:;
frost$core$Int64 $tmp286 = *(&local5);
org$frostlang$frostc$Pair* $tmp287 = *(&local1);
frost$core$Object** $tmp288 = &$tmp287->second;
frost$core$Object* $tmp289 = *$tmp288;
int64_t $tmp290 = $tmp286.value;
int64_t $tmp291 = ((frost$core$Int64$wrapper*) $tmp289)->value.value;
bool $tmp292 = $tmp290 < $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block10; else goto block12;
block10:;
// line 282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp295 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp296 = *(&local4);
frost$core$Object** $tmp297 = &$tmp296->first;
frost$core$Object* $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = *(&local5);
frost$core$Int64$wrapper* $tmp300;
$tmp300 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp300->value = $tmp299;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp295, ((frost$core$Object*) ((frost$collections$ListView*) $tmp298)), ((frost$core$Object*) $tmp300));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
org$frostlang$frostc$Pair* $tmp301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local1) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
goto block11;
block12:;
// line 284
frost$core$Int64 $tmp302 = *(&local5);
org$frostlang$frostc$Pair* $tmp303 = *(&local1);
frost$core$Object** $tmp304 = &$tmp303->second;
frost$core$Object* $tmp305 = *$tmp304;
frost$core$Bit $tmp306 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp302, ((frost$core$Int64$wrapper*) $tmp305)->value);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block14; else goto block15;
block14:;
// line 285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp308 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp308);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$collections$Array* $tmp309 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local6) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// line 286
frost$collections$Array* $tmp310 = *(&local6);
org$frostlang$frostc$Pair* $tmp311 = *(&local1);
frost$core$Object** $tmp312 = &$tmp311->first;
frost$core$Object* $tmp313 = *$tmp312;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp310, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp313)));
// line 287
org$frostlang$frostc$Pair* $tmp314 = *(&local4);
frost$core$Object** $tmp315 = &$tmp314->first;
frost$core$Object* $tmp316 = *$tmp315;
ITable* $tmp317 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp316))->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
frost$collections$Iterator* $tmp320 = $tmp318(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp316)));
goto block16;
block16:;
ITable* $tmp321 = $tmp320->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
frost$core$Bit $tmp324 = $tmp322($tmp320);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block18; else goto block17;
block17:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp326 = $tmp320->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[1];
frost$core$Object* $tmp329 = $tmp327($tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp329)));
org$frostlang$frostc$MethodRef* $tmp330 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp329);
// line 288
org$frostlang$frostc$Pair* $tmp331 = *(&local1);
frost$core$Object** $tmp332 = &$tmp331->first;
frost$core$Object* $tmp333 = *$tmp332;
ITable* $tmp334 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp333))->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$collections$Iterator* $tmp337 = $tmp335(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp333)));
goto block19;
block19:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
frost$core$Object* $tmp346 = $tmp344($tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp346)));
org$frostlang$frostc$MethodRef* $tmp347 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp346);
// line 289
org$frostlang$frostc$MethodRef* $tmp348 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp349 = &$tmp348->value;
org$frostlang$frostc$MethodDecl* $tmp350 = *$tmp349;
org$frostlang$frostc$MethodRef* $tmp351 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp352 = &$tmp351->value;
org$frostlang$frostc$MethodDecl* $tmp353 = *$tmp352;
bool $tmp354 = $tmp350 == $tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block22; else goto block23;
block22:;
// line 290
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
org$frostlang$frostc$MethodRef* $tmp357 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q($tmp329);
org$frostlang$frostc$MethodRef* $tmp358 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block16;
block23:;
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
org$frostlang$frostc$MethodRef* $tmp359 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// line 293
frost$collections$Array* $tmp360 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp361 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp360, ((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q($tmp329);
org$frostlang$frostc$MethodRef* $tmp362 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// line 295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp363 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp364 = *(&local6);
frost$core$Int64 $tmp365 = *(&local5);
frost$core$Int64$wrapper* $tmp366;
$tmp366 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp366->value = $tmp365;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp363, ((frost$core$Object*) ((frost$collections$ListView*) $tmp364)), ((frost$core$Object*) $tmp366));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$Pair* $tmp367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local1) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$collections$Array* $tmp368 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local6) = ((frost$collections$Array*) NULL);
goto block15;
block15:;
goto block11;
block11:;
goto block9;
block9:;
org$frostlang$frostc$Pair* $tmp369 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp370 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
org$frostlang$frostc$Type* $tmp371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// line 299
org$frostlang$frostc$Pair* $tmp372 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$Pair* $tmp373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp372;
block2:;
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$UInt64 local3;
frost$core$UInt64 local4;
frost$core$UInt64 local5;
frost$core$UInt64 local6;
frost$core$UInt64 local7;
frost$core$UInt64 local8;
frost$core$UInt64 local9;
frost$core$UInt64 local10;
frost$core$UInt64 local11;
frost$core$UInt64 local12;
frost$core$UInt64 local13;
// line 306
// line 307
// line 309
frost$core$Int64* $tmp376 = &param1->$rawValue;
frost$core$Int64 $tmp377 = *$tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {25};
frost$core$Bit $tmp379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp377, $tmp378);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp381 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp382 = *$tmp381;
frost$core$UInt64* $tmp383 = (frost$core$UInt64*) (param1->$data + 16);
frost$core$UInt64 $tmp384 = *$tmp383;
*(&local2) = $tmp384;
// line 311
frost$core$UInt64 $tmp385 = *(&local2);
frost$core$Int64 $tmp386 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp387 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp386);
uint64_t $tmp388 = $tmp385.value;
uint64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block4; else goto block5;
block4:;
// line 312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 314
frost$core$UInt64 $tmp393 = *(&local2);
frost$core$Int64 $tmp394 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp393);
*(&local0) = $tmp394;
goto block1;
block3:;
// line 317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
// line 320
frost$core$Int64* $tmp395 = &param3->$rawValue;
frost$core$Int64 $tmp396 = *$tmp395;
frost$core$Int64 $tmp397 = (frost$core$Int64) {25};
frost$core$Bit $tmp398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp396, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp400 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp401 = *$tmp400;
frost$core$UInt64* $tmp402 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp403 = *$tmp402;
*(&local3) = $tmp403;
// line 322
frost$core$UInt64 $tmp404 = *(&local3);
frost$core$Int64 $tmp405 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp406 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp405);
uint64_t $tmp407 = $tmp404.value;
uint64_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 > $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block9; else goto block10;
block9:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 325
frost$core$UInt64 $tmp412 = *(&local3);
frost$core$Int64 $tmp413 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp412);
*(&local1) = $tmp413;
goto block6;
block8:;
// line 328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 331
frost$core$Int64 $tmp414 = param2.$rawValue;
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
frost$core$Bit $tmp416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block12; else goto block13;
block12:;
// line 333
frost$core$Int64 $tmp418 = *(&local0);
frost$core$Int64 $tmp419 = *(&local1);
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 + $tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {$tmp422};
frost$core$UInt64 $tmp424 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp423);
*(&local4) = $tmp424;
// line 334
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp425 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp426 = (frost$core$Int64) {25};
$fn428 $tmp427 = ($fn428) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp429 = $tmp427(param1);
frost$core$UInt64 $tmp430 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp425, $tmp426, $tmp429, $tmp430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
return $tmp425;
block13:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
frost$core$Bit $tmp432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block14; else goto block15;
block14:;
// line 337
frost$core$Int64 $tmp434 = *(&local0);
frost$core$Int64 $tmp435 = *(&local1);
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 - $tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {$tmp438};
frost$core$UInt64 $tmp440 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp439);
*(&local5) = $tmp440;
// line 338
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp441 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp442 = (frost$core$Int64) {25};
$fn444 $tmp443 = ($fn444) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp445 = $tmp443(param1);
frost$core$UInt64 $tmp446 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp441, $tmp442, $tmp445, $tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
return $tmp441;
block15:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {2};
frost$core$Bit $tmp448 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp447);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block16; else goto block17;
block16:;
// line 341
frost$core$Int64 $tmp450 = *(&local0);
frost$core$Int64 $tmp451 = *(&local1);
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 * $tmp453;
frost$core$Int64 $tmp455 = (frost$core$Int64) {$tmp454};
frost$core$UInt64 $tmp456 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp455);
*(&local6) = $tmp456;
// line 342
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp457 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {25};
$fn460 $tmp459 = ($fn460) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp461 = $tmp459(param1);
frost$core$UInt64 $tmp462 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp457, $tmp458, $tmp461, $tmp462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
return $tmp457;
block17:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {4};
frost$core$Bit $tmp464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block18; else goto block19;
block18:;
// line 345
frost$core$Int64 $tmp466 = *(&local1);
frost$core$Int64 $tmp467 = (frost$core$Int64) {0};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block20; else goto block21;
block20:;
// line 346
$fn471 $tmp470 = ($fn471) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp472 = $tmp470(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp472, &$s473);
// line 347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 349
frost$core$Int64 $tmp474 = *(&local0);
frost$core$Int64 $tmp475 = *(&local1);
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 / $tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {$tmp478};
frost$core$UInt64 $tmp480 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp479);
*(&local7) = $tmp480;
// line 350
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp481 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp482 = (frost$core$Int64) {25};
$fn484 $tmp483 = ($fn484) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp485 = $tmp483(param1);
frost$core$UInt64 $tmp486 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp481, $tmp482, $tmp485, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
return $tmp481;
block19:;
frost$core$Int64 $tmp487 = (frost$core$Int64) {5};
frost$core$Bit $tmp488 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block22; else goto block23;
block22:;
// line 353
frost$core$Int64 $tmp490 = *(&local1);
frost$core$Int64 $tmp491 = (frost$core$Int64) {0};
frost$core$Bit $tmp492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp490, $tmp491);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block24; else goto block25;
block24:;
// line 354
$fn495 $tmp494 = ($fn495) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp496 = $tmp494(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp496, &$s497);
// line 355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 357
frost$core$Int64 $tmp498 = *(&local0);
frost$core$Int64 $tmp499 = *(&local1);
frost$core$Int64 $tmp500 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp498, $tmp499);
frost$core$UInt64 $tmp501 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp500);
*(&local8) = $tmp501;
// line 358
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp502 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp503 = (frost$core$Int64) {25};
$fn505 $tmp504 = ($fn505) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp506 = $tmp504(param1);
frost$core$UInt64 $tmp507 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp502, $tmp503, $tmp506, $tmp507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
return $tmp502;
block23:;
frost$core$Int64 $tmp508 = (frost$core$Int64) {6};
frost$core$Bit $tmp509 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block26; else goto block27;
block26:;
// line 361
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp511 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp512 = (frost$core$Int64) {6};
$fn514 $tmp513 = ($fn514) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp515 = $tmp513(param1);
frost$core$Int64 $tmp516 = *(&local0);
frost$core$Int64 $tmp517 = *(&local1);
frost$core$Bit $tmp518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp516, $tmp517);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp511, $tmp512, $tmp515, $tmp518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
return $tmp511;
block27:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {7};
frost$core$Bit $tmp520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block28; else goto block29;
block28:;
// line 364
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp522 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {6};
$fn525 $tmp524 = ($fn525) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp526 = $tmp524(param1);
frost$core$Int64 $tmp527 = *(&local0);
frost$core$Int64 $tmp528 = *(&local1);
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 != $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp522, $tmp523, $tmp526, $tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
return $tmp522;
block29:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {9};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block30; else goto block31;
block30:;
// line 367
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp536 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp537 = (frost$core$Int64) {6};
$fn539 $tmp538 = ($fn539) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp540 = $tmp538(param1);
frost$core$Int64 $tmp541 = *(&local0);
frost$core$Int64 $tmp542 = *(&local1);
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 < $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp536, $tmp537, $tmp540, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
return $tmp536;
block31:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {8};
frost$core$Bit $tmp548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block32; else goto block33;
block32:;
// line 370
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp550 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp551 = (frost$core$Int64) {6};
$fn553 $tmp552 = ($fn553) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp554 = $tmp552(param1);
frost$core$Int64 $tmp555 = *(&local0);
frost$core$Int64 $tmp556 = *(&local1);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 > $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp550, $tmp551, $tmp554, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
return $tmp550;
block33:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {11};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block34; else goto block35;
block34:;
// line 373
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp564 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {6};
$fn567 $tmp566 = ($fn567) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp568 = $tmp566(param1);
frost$core$Int64 $tmp569 = *(&local0);
frost$core$Int64 $tmp570 = *(&local1);
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 <= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp564, $tmp565, $tmp568, $tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
return $tmp564;
block35:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {10};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block36; else goto block37;
block36:;
// line 376
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp578 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {6};
$fn581 $tmp580 = ($fn581) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp582 = $tmp580(param1);
frost$core$Int64 $tmp583 = *(&local0);
frost$core$Int64 $tmp584 = *(&local1);
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 >= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp578, $tmp579, $tmp582, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
return $tmp578;
block37:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {15};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block38; else goto block39;
block38:;
// line 379
frost$core$Int64 $tmp592 = *(&local0);
frost$core$Int64 $tmp593 = *(&local1);
frost$core$Int64 $tmp594 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp592, $tmp593);
frost$core$UInt64 $tmp595 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp594);
*(&local9) = $tmp595;
// line 380
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp596 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp597 = (frost$core$Int64) {25};
$fn599 $tmp598 = ($fn599) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp600 = $tmp598(param1);
frost$core$UInt64 $tmp601 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp596, $tmp597, $tmp600, $tmp601);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
return $tmp596;
block39:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {13};
frost$core$Bit $tmp603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block40; else goto block41;
block40:;
// line 383
frost$core$Int64 $tmp605 = *(&local0);
frost$core$Int64 $tmp606 = *(&local1);
frost$core$Int64 $tmp607 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp605, $tmp606);
frost$core$UInt64 $tmp608 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp607);
*(&local10) = $tmp608;
// line 384
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp609 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp610 = (frost$core$Int64) {25};
$fn612 $tmp611 = ($fn612) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp613 = $tmp611(param1);
frost$core$UInt64 $tmp614 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp609, $tmp610, $tmp613, $tmp614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
return $tmp609;
block41:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {17};
frost$core$Bit $tmp616 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block42; else goto block43;
block42:;
// line 387
frost$core$Int64 $tmp618 = *(&local0);
frost$core$Int64 $tmp619 = *(&local1);
frost$core$Int64 $tmp620 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp618, $tmp619);
frost$core$UInt64 $tmp621 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp620);
*(&local11) = $tmp621;
// line 388
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp622 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp623 = (frost$core$Int64) {25};
$fn625 $tmp624 = ($fn625) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp626 = $tmp624(param1);
frost$core$UInt64 $tmp627 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp622, $tmp623, $tmp626, $tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
return $tmp622;
block43:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {18};
frost$core$Bit $tmp629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block44; else goto block45;
block44:;
// line 391
frost$core$Int64 $tmp631 = *(&local0);
frost$core$Int64 $tmp632 = *(&local1);
frost$core$Int64 $tmp633 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp631, $tmp632);
frost$core$UInt64 $tmp634 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp633);
*(&local12) = $tmp634;
// line 392
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp635 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp636 = (frost$core$Int64) {25};
$fn638 $tmp637 = ($fn638) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp639 = $tmp637(param1);
frost$core$UInt64 $tmp640 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp635, $tmp636, $tmp639, $tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
return $tmp635;
block45:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {19};
frost$core$Bit $tmp642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block46; else goto block11;
block46:;
// line 395
frost$core$Int64 $tmp644 = *(&local0);
frost$core$Int64 $tmp645 = *(&local1);
frost$core$Int64 $tmp646 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp644, $tmp645);
frost$core$UInt64 $tmp647 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp646);
*(&local13) = $tmp647;
// line 396
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp648 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp649 = (frost$core$Int64) {25};
$fn651 $tmp650 = ($fn651) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp652 = $tmp650(param1);
frost$core$UInt64 $tmp653 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp648, $tmp649, $tmp652, $tmp653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
return $tmp648;
block11:;
// line 399
$fn655 $tmp654 = ($fn655) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp656 = $tmp654(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp657;
$tmp657 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp657->value = param2;
$fn659 $tmp658 = ($fn659) ((frost$core$Object*) $tmp657)->$class->vtable[0];
frost$core$String* $tmp660 = $tmp658(((frost$core$Object*) $tmp657));
frost$core$String* $tmp661 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s662, $tmp660);
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp661, &$s664);
frost$core$String* $tmp665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp663, &$s666);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp656, $tmp665);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// line 401
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 408
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp667;
$tmp667 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp667->value = param2;
frost$core$Int64 $tmp668 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp669 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp668);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp670;
$tmp670 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp670->value = $tmp669;
ITable* $tmp671 = ((frost$core$Equatable*) $tmp667)->$class->itable;
while ($tmp671->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp671 = $tmp671->next;
}
$fn673 $tmp672 = $tmp671->methods[1];
frost$core$Bit $tmp674 = $tmp672(((frost$core$Equatable*) $tmp667), ((frost$core$Equatable*) $tmp670));
bool $tmp675 = $tmp674.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp670)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp667)));
if ($tmp675) goto block1; else goto block2;
block1:;
// line 409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 411
frost$core$Int64* $tmp676 = &param1->$rawValue;
frost$core$Int64 $tmp677 = *$tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {40};
frost$core$Bit $tmp679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp677, $tmp678);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Position* $tmp681 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp682 = *$tmp681;
*(&local0) = $tmp682;
frost$core$String** $tmp683 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp684 = *$tmp683;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$String* $tmp685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local1) = $tmp684;
// line 413
frost$core$Int64* $tmp686 = &param3->$rawValue;
frost$core$Int64 $tmp687 = *$tmp686;
frost$core$Int64 $tmp688 = (frost$core$Int64) {40};
frost$core$Bit $tmp689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp687, $tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp691 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp692 = *$tmp691;
frost$core$String** $tmp693 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp694 = *$tmp693;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$String* $tmp695 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local2) = $tmp694;
// line 415
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp696 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp697 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp698 = *(&local0);
frost$core$String* $tmp699 = *(&local1);
frost$core$String* $tmp700 = *(&local2);
frost$core$String* $tmp701 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp699, $tmp700);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp696, $tmp697, $tmp698, $tmp701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$String* $tmp702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local1) = ((frost$core$String*) NULL);
return $tmp696;
block5:;
frost$core$String* $tmp704 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block3:;
// line 420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// line 425
frost$core$Int64* $tmp705 = &param1->$rawValue;
frost$core$Int64 $tmp706 = *$tmp705;
frost$core$Int64 $tmp707 = (frost$core$Int64) {25};
frost$core$Bit $tmp708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp706, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block2; else goto block3;
block2:;
// line 427
org$frostlang$frostc$ASTNode* $tmp710 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
return $tmp710;
block3:;
frost$core$Int64 $tmp711 = (frost$core$Int64) {40};
frost$core$Bit $tmp712 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp706, $tmp711);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block4; else goto block5;
block4:;
// line 430
org$frostlang$frostc$ASTNode* $tmp714 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
return $tmp714;
block5:;
// line 433
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block6;
block6:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
frost$core$UInt64 local4;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
frost$core$UInt64 local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
// line 441
org$frostlang$frostc$ASTNode* $tmp715 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
org$frostlang$frostc$ASTNode* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local0) = $tmp715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// line 442
org$frostlang$frostc$ASTNode* $tmp717 = *(&local0);
frost$core$Bit $tmp718 = frost$core$Bit$init$builtin_bit($tmp717 != NULL);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block1; else goto block2;
block1:;
// line 443
org$frostlang$frostc$ASTNode* $tmp720 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp721 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp720, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$ASTNode* $tmp722 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp721;
block2:;
// line 445
frost$core$Int64 $tmp723 = param3.$rawValue;
frost$core$Int64 $tmp724 = (frost$core$Int64) {23};
frost$core$Bit $tmp725 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp723, $tmp724);
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block4; else goto block5;
block4:;
// line 447
org$frostlang$frostc$Scanner** $tmp727 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp728 = *$tmp727;
org$frostlang$frostc$Type* $tmp729 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp728, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
org$frostlang$frostc$Type* $tmp730 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local1) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// line 448
org$frostlang$frostc$Type* $tmp731 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp732 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp731);
org$frostlang$frostc$IR$Value* $tmp733 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp732, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$Type* $tmp734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp735 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp733;
block5:;
frost$core$Int64 $tmp736 = (frost$core$Int64) {21};
frost$core$Bit $tmp737 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp723, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp739 = (frost$core$Int64) {22};
frost$core$Bit $tmp740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp723, $tmp739);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block6; else goto block8;
block6:;
// line 451
org$frostlang$frostc$IR$Value* $tmp742 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$ASTNode* $tmp743 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp742;
block8:;
// line 454
org$frostlang$frostc$Pair* $tmp744 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
org$frostlang$frostc$Pair* $tmp745 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local2) = $tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// line 455
org$frostlang$frostc$Pair* $tmp746 = *(&local2);
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit($tmp746 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block9; else goto block10;
block9:;
// line 456
org$frostlang$frostc$Pair* $tmp749 = *(&local2);
frost$core$Object** $tmp750 = &$tmp749->first;
frost$core$Object* $tmp751 = *$tmp750;
ITable* $tmp752 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp751))->$class->itable;
while ($tmp752->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp752 = $tmp752->next;
}
$fn754 $tmp753 = $tmp752->methods[0];
frost$core$Int64 $tmp755 = $tmp753(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp751)));
frost$core$Int64 $tmp756 = (frost$core$Int64) {1};
int64_t $tmp757 = $tmp755.value;
int64_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 > $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block11; else goto block12;
block11:;
// line 457
org$frostlang$frostc$Pair* $tmp762 = *(&local2);
frost$core$Object** $tmp763 = &$tmp762->first;
frost$core$Object* $tmp764 = *$tmp763;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp765 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp766 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp765, $tmp766);
frost$collections$Array$add$frost$collections$Array$T($tmp765, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp765, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp764), ((frost$collections$ListView*) $tmp765), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// line 458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp768 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// line 460
org$frostlang$frostc$Pair* $tmp769 = *(&local2);
frost$core$Object** $tmp770 = &$tmp769->first;
frost$core$Object* $tmp771 = *$tmp770;
frost$core$Int64 $tmp772 = (frost$core$Int64) {0};
ITable* $tmp773 = ((frost$collections$ListView*) $tmp771)->$class->itable;
while ($tmp773->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
frost$core$Object* $tmp776 = $tmp774(((frost$collections$ListView*) $tmp771), $tmp772);
org$frostlang$frostc$MethodDecl** $tmp777 = &((org$frostlang$frostc$MethodRef*) $tmp776)->value;
org$frostlang$frostc$MethodDecl* $tmp778 = *$tmp777;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
org$frostlang$frostc$MethodDecl* $tmp779 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local3) = $tmp778;
frost$core$Frost$unref$frost$core$Object$Q($tmp776);
// line 461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp780;
$tmp780 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp780->value = param3;
frost$core$Int64 $tmp781 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp782 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp781);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp783;
$tmp783 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp783->value = $tmp782;
ITable* $tmp784 = ((frost$core$Equatable*) $tmp780)->$class->itable;
while ($tmp784->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp784 = $tmp784->next;
}
$fn786 $tmp785 = $tmp784->methods[0];
frost$core$Bit $tmp787 = $tmp785(((frost$core$Equatable*) $tmp780), ((frost$core$Equatable*) $tmp783));
bool $tmp788 = $tmp787.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp780)));
if ($tmp788) goto block15; else goto block14;
block15:;
org$frostlang$frostc$MethodDecl* $tmp789 = *(&local3);
frost$core$Weak** $tmp790 = &$tmp789->owner;
frost$core$Weak* $tmp791 = *$tmp790;
frost$core$Object* $tmp792 = frost$core$Weak$get$R$frost$core$Weak$T($tmp791);
frost$core$Bit $tmp793 = org$frostlang$frostc$Compiler$isTuple$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp792));
bool $tmp794 = $tmp793.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp792);
if ($tmp794) goto block13; else goto block14;
block13:;
// line 462
frost$core$Int64* $tmp795 = &param4->$rawValue;
frost$core$Int64 $tmp796 = *$tmp795;
frost$core$Int64 $tmp797 = (frost$core$Int64) {25};
frost$core$Bit $tmp798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp796, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block17; else goto block16;
block17:;
org$frostlang$frostc$Position* $tmp800 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp801 = *$tmp800;
frost$core$UInt64* $tmp802 = (frost$core$UInt64*) (param4->$data + 16);
frost$core$UInt64 $tmp803 = *$tmp802;
*(&local4) = $tmp803;
// line 464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp804 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp805 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp804, $tmp805);
org$frostlang$frostc$IR$Value* $tmp806 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp804);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
org$frostlang$frostc$IR$Value* $tmp807 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local5) = $tmp806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// line 466
org$frostlang$frostc$IR$Value* $tmp808 = *(&local5);
frost$core$Bit $tmp809 = frost$core$Bit$init$builtin_bit($tmp808 == NULL);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block18; else goto block19;
block18:;
// line 467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp811 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp812 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp813 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp814 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
// line 469
org$frostlang$frostc$IR$Value* $tmp815 = *(&local5);
frost$core$UInt64 $tmp816 = *(&local4);
frost$core$UInt64$wrapper* $tmp817;
$tmp817 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp817->value = $tmp816;
frost$core$String* $tmp818 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s819, ((frost$core$Object*) $tmp817));
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp818, &$s821);
org$frostlang$frostc$IR$Value* $tmp822 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp815, $tmp820);
org$frostlang$frostc$IR$Value* $tmp823 = *(&local5);
$fn825 $tmp824 = ($fn825) $tmp823->$class->vtable[2];
org$frostlang$frostc$Type* $tmp826 = $tmp824($tmp823);
org$frostlang$frostc$FixedArray* $tmp827 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp826);
frost$core$UInt64 $tmp828 = *(&local4);
frost$core$Int64 $tmp829 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp828);
frost$core$Object* $tmp830 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp827, $tmp829);
org$frostlang$frostc$IR$Value* $tmp831 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp822, ((org$frostlang$frostc$Type*) $tmp830));
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp831, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q($tmp830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
org$frostlang$frostc$IR$Value* $tmp833 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp834 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp835 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp832;
block16:;
goto block14;
block14:;
// line 475
org$frostlang$frostc$MethodDecl* $tmp837 = *(&local3);
org$frostlang$frostc$Annotations** $tmp838 = &$tmp837->annotations;
org$frostlang$frostc$Annotations* $tmp839 = *$tmp838;
frost$core$Bit $tmp840 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp839);
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block20; else goto block21;
block20:;
// line 476
org$frostlang$frostc$MethodDecl* $tmp842 = *(&local3);
frost$collections$Array** $tmp843 = &$tmp842->parameters;
frost$collections$Array* $tmp844 = *$tmp843;
ITable* $tmp845 = ((frost$collections$CollectionView*) $tmp844)->$class->itable;
while ($tmp845->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp845 = $tmp845->next;
}
$fn847 $tmp846 = $tmp845->methods[0];
frost$core$Int64 $tmp848 = $tmp846(((frost$collections$CollectionView*) $tmp844));
frost$core$Int64 $tmp849 = (frost$core$Int64) {2};
frost$core$Bit $tmp850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp848, $tmp849);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block22; else goto block23;
block22:;
// line 477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp852 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp853 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp854 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp852, $tmp853, ((org$frostlang$frostc$IR$Value*) NULL), $tmp854);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp855 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp856 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp855, $tmp856);
frost$collections$Array$add$frost$collections$Array$T($tmp855, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp855, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp857 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp852, ((frost$collections$ListView*) $tmp855), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$MethodDecl* $tmp858 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp859 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp857;
block23:;
// line 480
org$frostlang$frostc$MethodDecl* $tmp861 = *(&local3);
frost$collections$Array** $tmp862 = &$tmp861->parameters;
frost$collections$Array* $tmp863 = *$tmp862;
ITable* $tmp864 = ((frost$collections$CollectionView*) $tmp863)->$class->itable;
while ($tmp864->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp864 = $tmp864->next;
}
$fn866 $tmp865 = $tmp864->methods[0];
frost$core$Int64 $tmp867 = $tmp865(((frost$collections$CollectionView*) $tmp863));
frost$core$Int64 $tmp868 = (frost$core$Int64) {1};
frost$core$Bit $tmp869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp867, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp871 = (frost$core$Int64) {480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s872, $tmp871);
abort(); // unreachable
block24:;
// line 481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp873 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp874 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp875 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp873, $tmp874, ((org$frostlang$frostc$IR$Value*) NULL), $tmp875);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp876 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp877 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp876, $tmp877);
frost$collections$Array$add$frost$collections$Array$T($tmp876, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp878 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp873, ((frost$collections$ListView*) $tmp876), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
org$frostlang$frostc$MethodDecl* $tmp879 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp881 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp878;
block21:;
// line 484
org$frostlang$frostc$MethodDecl* $tmp882 = *(&local3);
frost$core$Weak** $tmp883 = &$tmp882->owner;
frost$core$Weak* $tmp884 = *$tmp883;
frost$core$Object* $tmp885 = frost$core$Weak$get$R$frost$core$Weak$T($tmp884);
frost$core$String** $tmp886 = &((org$frostlang$frostc$ClassDecl*) $tmp885)->name;
frost$core$String* $tmp887 = *$tmp886;
frost$core$Bit $tmp888 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp887, &$s889);
bool $tmp890 = $tmp888.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp885);
if ($tmp890) goto block26; else goto block27;
block26:;
// line 485
org$frostlang$frostc$MethodDecl* $tmp891 = *(&local3);
frost$core$String** $tmp892 = &((org$frostlang$frostc$Symbol*) $tmp891)->name;
frost$core$String* $tmp893 = *$tmp892;
frost$core$Bit $tmp894 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp893, &$s895);
bool $tmp896 = $tmp894.value;
if ($tmp896) goto block28; else goto block29;
block28:;
// line 486
org$frostlang$frostc$IR$Value* $tmp897 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
org$frostlang$frostc$MethodDecl* $tmp898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp899 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp900 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp897;
block29:;
// line 488
org$frostlang$frostc$MethodDecl* $tmp901 = *(&local3);
frost$core$String** $tmp902 = &((org$frostlang$frostc$Symbol*) $tmp901)->name;
frost$core$String* $tmp903 = *$tmp902;
frost$core$Bit $tmp904 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp903, &$s905);
bool $tmp906 = $tmp904.value;
if ($tmp906) goto block30; else goto block31;
block30:;
// line 489
org$frostlang$frostc$IR$Value* $tmp907 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$MethodDecl* $tmp908 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp909 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp907;
block31:;
goto block27;
block27:;
// line 492
frost$collections$CollectionView* $tmp911 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp912 = *(&local3);
frost$core$Weak** $tmp913 = &$tmp912->owner;
frost$core$Weak* $tmp914 = *$tmp913;
frost$core$Object* $tmp915 = frost$core$Weak$get$R$frost$core$Weak$T($tmp914);
org$frostlang$frostc$Type* $tmp916 = org$frostlang$frostc$Compiler$findType$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp911, ((org$frostlang$frostc$ClassDecl*) $tmp915));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
org$frostlang$frostc$Type* $tmp917 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local6) = $tmp916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q($tmp915);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// line 493
org$frostlang$frostc$Type* $tmp918 = *(&local6);
frost$core$Bit $tmp919 = frost$core$Bit$init$builtin_bit($tmp918 != NULL);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp921 = (frost$core$Int64) {493};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s922, $tmp921);
abort(); // unreachable
block32:;
// line 494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp923 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp924 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp925 = *(&local6);
frost$core$Bit $tmp926 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp923, $tmp924, $tmp925, $tmp926);
org$frostlang$frostc$IR$Value* $tmp927 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp923);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
org$frostlang$frostc$IR$Value* $tmp928 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local7) = $tmp927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// line 495
org$frostlang$frostc$IR$Value* $tmp929 = *(&local7);
frost$core$Bit $tmp930 = frost$core$Bit$init$builtin_bit($tmp929 == NULL);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block34; else goto block35;
block34:;
// line 496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp932 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp933 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp934 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block35:;
// line 498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp937 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp938 = (frost$core$Int64) {9};
org$frostlang$frostc$IR$Value* $tmp939 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp940 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp937, $tmp938, $tmp939, $tmp940);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp941 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp942 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp941, $tmp942);
frost$collections$Array$add$frost$collections$Array$T($tmp941, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp943 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp937, ((frost$collections$ListView*) $tmp941), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$IR$Value* $tmp944 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp945 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp946 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp948 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp943;
block10:;
// line 501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp949 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp950 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp949, $tmp950);
org$frostlang$frostc$IR$Value* $tmp951 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp949);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$IR$Value* $tmp952 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local8) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// line 502
org$frostlang$frostc$IR$Value* $tmp953 = *(&local8);
frost$core$Bit $tmp954 = frost$core$Bit$init$builtin_bit($tmp953 == NULL);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block36; else goto block37;
block36:;
// line 503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp956 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp957 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp959;
$tmp959 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp959->value = param3;
frost$core$Int64 $tmp960 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp961 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp960);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp962;
$tmp962 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp962->value = $tmp961;
ITable* $tmp963 = ((frost$core$Equatable*) $tmp959)->$class->itable;
while ($tmp963->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp963 = $tmp963->next;
}
$fn965 $tmp964 = $tmp963->methods[0];
frost$core$Bit $tmp966 = $tmp964(((frost$core$Equatable*) $tmp959), ((frost$core$Equatable*) $tmp962));
bool $tmp967 = $tmp966.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp962)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp959)));
if ($tmp967) goto block40; else goto block39;
block40:;
org$frostlang$frostc$IR$Value* $tmp968 = *(&local8);
$fn970 $tmp969 = ($fn970) $tmp968->$class->vtable[2];
org$frostlang$frostc$Type* $tmp971 = $tmp969($tmp968);
frost$core$Bit $tmp972 = org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit($tmp971);
bool $tmp973 = $tmp972.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
if ($tmp973) goto block38; else goto block39;
block38:;
// line 506
frost$core$Int64* $tmp974 = &param4->$rawValue;
frost$core$Int64 $tmp975 = *$tmp974;
frost$core$Int64 $tmp976 = (frost$core$Int64) {25};
frost$core$Bit $tmp977 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp975, $tmp976);
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block42; else goto block41;
block42:;
org$frostlang$frostc$Position* $tmp979 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp980 = *$tmp979;
frost$core$UInt64* $tmp981 = (frost$core$UInt64*) (param4->$data + 16);
frost$core$UInt64 $tmp982 = *$tmp981;
*(&local9) = $tmp982;
// line 508
org$frostlang$frostc$IR$Value* $tmp983 = *(&local8);
frost$core$UInt64 $tmp984 = *(&local9);
frost$core$UInt64$wrapper* $tmp985;
$tmp985 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp985->value = $tmp984;
frost$core$String* $tmp986 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s987, ((frost$core$Object*) $tmp985));
frost$core$String* $tmp988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp986, &$s989);
org$frostlang$frostc$IR$Value* $tmp990 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp983, $tmp988);
org$frostlang$frostc$IR$Value* $tmp991 = *(&local8);
$fn993 $tmp992 = ($fn993) $tmp991->$class->vtable[2];
org$frostlang$frostc$Type* $tmp994 = $tmp992($tmp991);
org$frostlang$frostc$FixedArray* $tmp995 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp994);
frost$core$UInt64 $tmp996 = *(&local9);
frost$core$Int64 $tmp997 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp996);
frost$core$Object* $tmp998 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp995, $tmp997);
org$frostlang$frostc$IR$Value* $tmp999 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp990, ((org$frostlang$frostc$Type*) $tmp998));
org$frostlang$frostc$IR$Value* $tmp1000 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp999, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q($tmp998);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
org$frostlang$frostc$IR$Value* $tmp1001 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1002 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1003 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1000;
block41:;
goto block39;
block39:;
// line 514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1004 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1005 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp1006 = *(&local8);
$fn1008 $tmp1007 = ($fn1008) $tmp1006->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1009 = $tmp1007($tmp1006);
frost$core$Bit $tmp1010 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1004, $tmp1005, $tmp1009, $tmp1010);
org$frostlang$frostc$IR$Value* $tmp1011 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1004);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
org$frostlang$frostc$IR$Value* $tmp1012 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local10) = $tmp1011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// line 516
org$frostlang$frostc$IR$Value* $tmp1013 = *(&local10);
frost$core$Bit $tmp1014 = frost$core$Bit$init$builtin_bit($tmp1013 == NULL);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block43; else goto block44;
block43:;
// line 517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1016 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1017 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1018 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block44:;
// line 519
org$frostlang$frostc$IR$Value* $tmp1020 = *(&local8);
$fn1022 $tmp1021 = ($fn1022) $tmp1020->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1023 = $tmp1021($tmp1020);
org$frostlang$frostc$Type* $tmp1024 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1025 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1023, $tmp1024);
bool $tmp1026 = $tmp1025.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
if ($tmp1026) goto block45; else goto block47;
block47:;
org$frostlang$frostc$IR$Value* $tmp1027 = *(&local8);
$fn1029 $tmp1028 = ($fn1029) $tmp1027->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1030 = $tmp1028($tmp1027);
frost$core$Bit $tmp1031 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1030);
bool $tmp1032 = $tmp1031.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
if ($tmp1032) goto block45; else goto block46;
block45:;
// line 521
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1033 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1034 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1033, $tmp1034, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1035 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1033);
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
org$frostlang$frostc$Type* $tmp1036 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local11) = $tmp1035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// line 523
org$frostlang$frostc$Type* $tmp1037 = *(&local11);
frost$core$Bit $tmp1038 = frost$core$Bit$init$builtin_bit($tmp1037 != NULL);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block48; else goto block49;
block48:;
// line 524
org$frostlang$frostc$IR** $tmp1040 = &param0->ir;
org$frostlang$frostc$IR* $tmp1041 = *$tmp1040;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1042 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1043 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1044 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1045 = *(&local10);
org$frostlang$frostc$Type* $tmp1046 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1042, $tmp1043, param1, $tmp1044, param3, $tmp1045, $tmp1046);
$fn1048 $tmp1047 = ($fn1048) $tmp1041->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1049 = $tmp1047($tmp1041, $tmp1042);
*(&local12) = $tmp1049;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// line 526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1050 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1051 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1052 = *(&local12);
org$frostlang$frostc$Type* $tmp1053 = *(&local11);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1050, $tmp1051, $tmp1052, $tmp1053);
org$frostlang$frostc$IR$Value* $tmp1054 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1050, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
org$frostlang$frostc$Type* $tmp1055 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1056 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1057 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1058 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1054;
block49:;
org$frostlang$frostc$Type* $tmp1060 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block46;
block46:;
// line 529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1061->value = param3;
$fn1063 $tmp1062 = ($fn1063) ((frost$core$Object*) $tmp1061)->$class->vtable[0];
frost$core$String* $tmp1064 = $tmp1062(((frost$core$Object*) $tmp1061));
frost$core$String* $tmp1065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1066, $tmp1064);
frost$core$String* $tmp1067 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1065, &$s1068);
org$frostlang$frostc$IR$Value* $tmp1069 = *(&local8);
$fn1071 $tmp1070 = ($fn1071) $tmp1069->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1072 = $tmp1070($tmp1069);
frost$core$String* $tmp1073 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1074, ((frost$core$Object*) $tmp1072));
frost$core$String* $tmp1075 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1073, &$s1076);
org$frostlang$frostc$IR$Value* $tmp1077 = *(&local10);
$fn1079 $tmp1078 = ($fn1079) $tmp1077->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1080 = $tmp1078($tmp1077);
frost$core$String* $tmp1081 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1075, ((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1081, &$s1083);
frost$core$String* $tmp1084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1067, $tmp1082);
$fn1086 $tmp1085 = ($fn1086) param5->$class->vtable[2];
frost$core$String* $tmp1087 = $tmp1085(param5);
frost$core$String* $tmp1088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1084, $tmp1087);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1088);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// line 532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1089 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1090 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1091 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block3:;
goto block50;
block50:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

