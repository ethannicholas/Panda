#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/io/File.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void org$frostlang$frostc$Compiler$Settings$cleanup$shim(org$frostlang$frostc$Compiler$Settings* p0) {
    org$frostlang$frostc$Compiler$Settings$cleanup(p0);

}

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Settings$class_type org$frostlang$frostc$Compiler$Settings$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Settings$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x53\x65\x74\x74\x69\x6e\x67\x73", 38, 7720244119815717860, NULL };

void org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(void* rawSelf, frost$io$File* param1, frost$collections$ListView* param2, frost$core$Int param3, frost$core$Int param4, frost$core$Bit param5) {
org$frostlang$frostc$Compiler$Settings* param0 = (org$frostlang$frostc$Compiler$Settings*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$io$File** _7;
frost$io$File* _8;
frost$core$Object* _9;
frost$io$File** _11;
frost$collections$ImmutableArray* _14;
frost$core$Object* _16;
frost$collections$ImmutableArray** _18;
frost$collections$ImmutableArray* _19;
frost$core$Object* _20;
frost$collections$ImmutableArray** _22;
frost$core$Object* _24;
frost$core$Int* _27;
frost$core$Int* _30;
frost$core$Bit* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:245
_1 = (frost$core$Int) {8u};
_2 = &param0->intSize;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:249
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->frostHome;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->frostHome;
*_11 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:250
_14 = (frost$collections$ImmutableArray*) frostObjectAlloc(sizeof(frost$collections$ImmutableArray), (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(_14, param2);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->importDirs;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->importDirs;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:251
_27 = &param0->optimizationLevel;
*_27 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:252
_30 = &param0->safetyLevel;
*_30 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:253
_33 = &param0->debug;
*_33 = param5;
return;

}
void org$frostlang$frostc$Compiler$Settings$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$Settings* param0 = (org$frostlang$frostc$Compiler$Settings*) rawSelf;

frost$core$Immutable* _1;
frost$io$File** _3;
frost$io$File* _4;
frost$core$Object* _5;
frost$collections$ImmutableArray** _7;
frost$collections$ImmutableArray* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:234
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->frostHome;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->importDirs;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

