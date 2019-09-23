#include "frost/core/Comparable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Comparable$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Comparable$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Comparable$_frost$core$Equatable, { NULL, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$Comparable$class_type frost$core$Comparable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$Comparable$_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn4)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn6)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -9060234412520564052, NULL };

frost$core$Bit frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit(void* rawSelf, frost$core$Comparable* param1) {
frost$core$Comparable* param0 = (frost$core$Comparable*) rawSelf;

frost$core$Comparable* _1;
frost$core$Comparable* _2;
$fn2 _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Comparable.frost:13
_1 = param1;
_2 = param0;
ITable* $tmp3 = _1->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp3 = $tmp3->next;
}
_3 = $tmp3->methods[0];
_4 = _3(_1, _2);
return _4;

}
frost$core$Bit frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit(void* rawSelf, frost$core$Comparable* param1) {
frost$core$Comparable* param0 = (frost$core$Comparable*) rawSelf;

$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Comparable.frost:18
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp5 = $tmp5->next;
}
_1 = $tmp5->methods[1];
_2 = _1(param0, param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Comparable.frost:18:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
return _7;

}
frost$core$Bit frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit(void* rawSelf, frost$core$Comparable* param1) {
frost$core$Comparable* param0 = (frost$core$Comparable*) rawSelf;

$fn6 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Comparable.frost:23
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp7 = $tmp7->next;
}
_1 = $tmp7->methods[0];
_2 = _1(param0, param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Comparable.frost:23:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
return _7;

}






