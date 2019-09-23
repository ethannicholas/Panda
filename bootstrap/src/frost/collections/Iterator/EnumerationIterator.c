#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim(frost$collections$Iterator$EnumerationIterator* p0) {
    frost$core$Tuple2* result = frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$EnumerationIterator$class_type frost$collections$Iterator$EnumerationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$EnumerationIterator$cleanup, frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -4993360700336273267, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29", 152, -7078141578672242078, NULL };

void frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(void* rawSelf, frost$collections$Iterator* param1) {
frost$collections$Iterator$EnumerationIterator* param0 = (frost$collections$Iterator$EnumerationIterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$Iterator** _7;
frost$collections$Iterator* _8;
frost$core$Object* _9;
frost$collections$Iterator** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:139
_1 = (frost$core$Int) {18446744073709551615u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:142
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->base;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->base;
*_11 = param1;
return;

}
frost$core$Bit frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Iterator$EnumerationIterator* param0 = (frost$collections$Iterator$EnumerationIterator*) rawSelf;

frost$collections$Iterator** _1;
frost$collections$Iterator* _2;
$fn2 _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:147
_1 = &param0->base;
_2 = *_1;
ITable* $tmp3 = _2->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
_3 = $tmp3->methods[0];
_4 = _3(_2);
return _4;

}
frost$core$Tuple2* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(void* rawSelf) {
frost$collections$Iterator$EnumerationIterator* param0 = (frost$collections$Iterator$EnumerationIterator*) rawSelf;

frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Int* _22;
frost$core$Tuple2* _25;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Object* _28;
frost$collections$Iterator** _29;
frost$collections$Iterator* _30;
$fn5 _31;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Tuple2* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp6 = _0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_1 = $tmp6->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:152
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:153
_25 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_26 = &param0->index;
_27 = *_26;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _27;
_28 = ((frost$core$Object*) $tmp9);
_29 = &param0->base;
_30 = *_29;
ITable* $tmp10 = _30->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_31 = $tmp10->methods[1];
_32 = _31(_30);
_33 = _32;
_34 = _33;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_25, _28, _34);
_36 = _25;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_43);
return _36;

}
void frost$collections$Iterator$EnumerationIterator$cleanup(void* rawSelf) {
frost$collections$Iterator$EnumerationIterator* param0 = (frost$collections$Iterator$EnumerationIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:136
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






