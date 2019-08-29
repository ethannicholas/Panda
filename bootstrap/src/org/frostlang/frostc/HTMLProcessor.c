#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/io/File.h"
#include "frost/core/Error.h"
#include "frost/threads/MessageQueue.h"
#include "frost/threads/ScopedLock.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Maybe.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/io/Console.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int32.h"
#include "frost/core/Char32.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$cleanup, org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String} };

typedef frost$collections$Iterator* (*$fn18)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn27)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn38)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn50)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn215)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn225)(frost$core$Object*);
typedef frost$core$String* (*$fn234)(frost$core$Object*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn300)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn338)(frost$core$Object*);
typedef frost$core$Int (*$fn351)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn355)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn359)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn363)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn371)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn398)(frost$core$Object*);
typedef frost$core$Int (*$fn421)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn475)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn490)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn509)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn527)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn545)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn559)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn574)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn589)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn604)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn619)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn634)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn651)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn665)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn680)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn695)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn710)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn725)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn746)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, -162222424923477505, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, -8814482118997729913, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 2697689956412709694, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 683364003274147512, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, -6588624628402863451, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, -7636228459579019980, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, -7838137996368162576, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2476654268654116656, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 348240475473272024, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 4133860649010664239, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 5716761674580204597, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -145632375787406955, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -8920756938342762323, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 2682849467595832643, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, -6454915742278049375, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7193073556246214837, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -8315368983397429245, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, -8738063546824915686, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 2223332588984305893, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
return;

}
frost$core$String* org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local3;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local5;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local6;
frost$core$MutableString* local7 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local9;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local11;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local12;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local13;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local14;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local15;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:16
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp5, &$s6);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$MutableString* $tmp7 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
*(&local0) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:17
frost$core$Int $tmp8 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:17:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp9 = &(&local2)->$rawValue;
*$tmp9 = $tmp8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp10 = *(&local2);
*(&local1) = $tmp10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp11 = *(&local1);
*(&local3) = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:18
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp12 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp13 = *$tmp12;
frost$collections$Array** $tmp14 = &$tmp13->tokens;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$Iterable*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$collections$Iterator* $tmp19 = $tmp17(((frost$collections$Iterable*) $tmp15));
goto block2;
block2:;
ITable* $tmp20 = $tmp19->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Bit $tmp23 = $tmp21($tmp19);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block3;
block3:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp25 = $tmp19->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[1];
frost$core$Object* $tmp28 = $tmp26($tmp19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp28)));
org$frostlang$frostc$Pair* $tmp29 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:19
org$frostlang$frostc$Pair* $tmp30 = *(&local4);
frost$core$Object** $tmp31 = &$tmp30->second;
frost$core$Object* $tmp32 = *$tmp31;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp33->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp32)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp34 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp35->value = $tmp34;
ITable* $tmp36 = ((frost$core$Equatable*) $tmp33)->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
frost$core$Bit $tmp39 = $tmp37(((frost$core$Equatable*) $tmp33), ((frost$core$Equatable*) $tmp35));
bool $tmp40 = $tmp39.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp35)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp33)));
if ($tmp40) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp41 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp42->value = $tmp41;
frost$core$Int $tmp43 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:19:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp44 = &(&local6)->$rawValue;
*$tmp44 = $tmp43;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp45 = *(&local6);
*(&local5) = $tmp45;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp46 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp47->value = $tmp46;
ITable* $tmp48 = ((frost$core$Equatable*) $tmp42)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
frost$core$Bit $tmp51 = $tmp49(((frost$core$Equatable*) $tmp42), ((frost$core$Equatable*) $tmp47));
bool $tmp52 = $tmp51.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp42)));
if ($tmp52) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:20
frost$core$MutableString* $tmp53 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp53, &$s54);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:22
org$frostlang$frostc$Pair* $tmp55 = *(&local4);
frost$core$Object** $tmp56 = &$tmp55->second;
frost$core$Object* $tmp57 = *$tmp56;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp58;
$tmp58 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp58->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp57)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp59 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp60->value = $tmp59;
ITable* $tmp61 = ((frost$core$Equatable*) $tmp58)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp58), ((frost$core$Equatable*) $tmp60));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp58)));
if ($tmp65) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:23
org$frostlang$frostc$Pair* $tmp66 = *(&local4);
frost$core$Object** $tmp67 = &$tmp66->second;
frost$core$Object* $tmp68 = *$tmp67;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp68)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:24
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp69 = *(&local3);
frost$core$Int $tmp70 = $tmp69.$rawValue;
frost$core$Int $tmp71 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:25:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int $tmp77 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:28:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp78 = $tmp70.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 == $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block15; else goto block16;
block16:;
frost$core$Int $tmp83 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:28:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp84 = $tmp70.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 == $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block15; else goto block18;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:29
frost$core$MutableString* $tmp89 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp89, &$s90);
goto block11;
block18:;
frost$core$Int $tmp91 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:31:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp92 = $tmp70.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 == $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:32
frost$core$MutableString* $tmp97 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp97, &$s98);
goto block11;
block21:;
frost$core$Int $tmp99 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:34:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp70.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:35
frost$core$MutableString* $tmp105 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp105, &$s106);
goto block11;
block24:;
frost$core$Int $tmp107 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:37:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp108 = $tmp70.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 == $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:38
frost$core$MutableString* $tmp113 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp113, &$s114);
goto block11;
block27:;
frost$core$Int $tmp115 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:40:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp116 = $tmp70.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 == $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:41
frost$core$MutableString* $tmp121 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp121, &$s122);
goto block11;
block30:;
frost$core$Int $tmp123 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:43:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp124 = $tmp70.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 == $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:44
frost$core$MutableString* $tmp129 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp129, &$s130);
goto block11;
block33:;
frost$core$Int $tmp131 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:46:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp132 = $tmp70.value;
int64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 == $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:47
frost$core$MutableString* $tmp137 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp137, &$s138);
goto block11;
block36:;
frost$core$Int $tmp139 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:49:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp140 = $tmp70.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:50
frost$core$MutableString* $tmp145 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp145, &$s146);
goto block11;
block39:;
frost$core$Int $tmp147 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:52:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp148 = $tmp70.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 == $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:53
frost$core$MutableString* $tmp153 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp153, &$s154);
goto block11;
block42:;
frost$core$Int $tmp155 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:55:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp156 = $tmp70.value;
int64_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 == $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:56
frost$core$MutableString* $tmp161 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp161, &$s162);
goto block11;
block45:;
frost$core$Int $tmp163 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:58:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp164 = $tmp70.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:59
frost$core$MutableString* $tmp169 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp169, &$s170);
goto block11;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:62
frost$core$Int $tmp171 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s172, $tmp171);
abort(); // unreachable
block11:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:66
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp173 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp174 = *(&local4);
frost$core$Object** $tmp175 = &$tmp174->first;
frost$core$Object* $tmp176 = *$tmp175;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from HTMLProcessor.frost:66:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp177 = &param1->source;
frost$core$String* $tmp178 = *$tmp177;
frost$core$String$Index $tmp179 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp176)->value.start;
frost$core$String$Index $tmp180 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp176)->value.end;
frost$core$Bit $tmp181 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp182 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp179, $tmp180, $tmp181);
frost$core$String* $tmp183 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp178, $tmp182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$MutableString$init$frost$core$String($tmp173, $tmp183);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$MutableString* $tmp184 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local7) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:67
frost$core$MutableString* $tmp185 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp185, &$s186, &$s187);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:68
frost$core$MutableString* $tmp188 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp188, &$s189, &$s190);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:69
frost$core$MutableString* $tmp191 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp191, &$s192, &$s193);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:70
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp194 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp195;
$tmp195 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp195->value = $tmp194;
frost$core$Int $tmp196 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp197 = &(&local9)->$rawValue;
*$tmp197 = $tmp196;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp198 = *(&local9);
*(&local8) = $tmp198;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp199 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp200;
$tmp200 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp200->value = $tmp199;
ITable* $tmp201 = ((frost$core$Equatable*) $tmp195)->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
frost$core$Bit $tmp204 = $tmp202(((frost$core$Equatable*) $tmp195), ((frost$core$Equatable*) $tmp200));
bool $tmp205 = $tmp204.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp200)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp195)));
if ($tmp205) goto block53; else goto block52;
block53:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp206 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp207->value = $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:71:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp209 = &(&local11)->$rawValue;
*$tmp209 = $tmp208;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp210 = *(&local11);
*(&local10) = $tmp210;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp211 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp212->value = $tmp211;
ITable* $tmp213 = ((frost$core$Equatable*) $tmp207)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
frost$core$Bit $tmp216 = $tmp214(((frost$core$Equatable*) $tmp207), ((frost$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp207)));
if ($tmp217) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:72
frost$core$MutableString* $tmp218 = *(&local0);
org$frostlang$frostc$Pair* $tmp219 = *(&local4);
frost$core$Object** $tmp220 = &$tmp219->first;
frost$core$Object* $tmp221 = *$tmp220;
org$frostlang$frostc$parser$Token$Kind $tmp222 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp221)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp223;
$tmp223 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp223->value = $tmp222;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HTMLProcessor.frost:72:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn225 $tmp224 = ($fn225) ((frost$core$Object*) $tmp223)->$class->vtable[0];
frost$core$String* $tmp226 = $tmp224(((frost$core$Object*) $tmp223));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s228, $tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, &$s230);
frost$core$MutableString$append$frost$core$String($tmp218, $tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:74
frost$core$MutableString* $tmp231 = *(&local0);
frost$core$MutableString* $tmp232 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HTMLProcessor.frost:74:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn234 $tmp233 = ($fn234) ((frost$core$Object*) $tmp232)->$class->vtable[0];
frost$core$String* $tmp235 = $tmp233(((frost$core$Object*) $tmp232));
frost$core$MutableString$append$frost$core$String($tmp231, $tmp235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:75
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp236 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp237;
$tmp237 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp237->value = $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:75:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp239 = &(&local13)->$rawValue;
*$tmp239 = $tmp238;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp240 = *(&local13);
*(&local12) = $tmp240;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp241 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp242->value = $tmp241;
ITable* $tmp243 = ((frost$core$Equatable*) $tmp237)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[1];
frost$core$Bit $tmp246 = $tmp244(((frost$core$Equatable*) $tmp237), ((frost$core$Equatable*) $tmp242));
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp237)));
if ($tmp247) goto block60; else goto block59;
block60:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp248 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int $tmp250 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:76:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp251 = &(&local15)->$rawValue;
*$tmp251 = $tmp250;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp252 = *(&local15);
*(&local14) = $tmp252;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp253 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[1];
frost$core$Bit $tmp258 = $tmp256(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
if ($tmp259) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:77
frost$core$MutableString* $tmp260 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp260, &$s261);
goto block59;
block59:;
frost$core$MutableString* $tmp262 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
org$frostlang$frostc$Pair* $tmp263 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:80
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp264 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp265;
$tmp265 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp265->value = $tmp264;
frost$core$Int $tmp266 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:80:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp267 = &(&local17)->$rawValue;
*$tmp267 = $tmp266;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp268 = *(&local17);
*(&local16) = $tmp268;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp269 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp270->value = $tmp269;
ITable* $tmp271 = ((frost$core$Equatable*) $tmp265)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[1];
frost$core$Bit $tmp274 = $tmp272(((frost$core$Equatable*) $tmp265), ((frost$core$Equatable*) $tmp270));
bool $tmp275 = $tmp274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp265)));
if ($tmp275) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:81
frost$core$MutableString* $tmp276 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp276, &$s277);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:83
frost$core$MutableString* $tmp278 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp278, &$s279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:84
frost$core$MutableString* $tmp280 = *(&local0);
frost$core$String* $tmp281 = frost$core$MutableString$finish$R$frost$core$String($tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$MutableString* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp281;

}
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, frost$io$File* param1, frost$io$File* param2, frost$core$String* param3) {

frost$core$Error* local0 = NULL;
frost$threads$MessageQueue* local1 = NULL;
org$frostlang$frostc$parser$Parser* local2 = NULL;
frost$threads$ScopedLock* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int local5;
frost$core$MutableString* local6 = NULL;
frost$core$Int local7;
frost$core$String* local8 = NULL;
frost$io$OutputStream* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:88
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:89
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp283 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp283);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$threads$MessageQueue* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:90
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp285 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp286 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp285, $tmp286);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$parser$Parser* $tmp287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local2) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:91
org$frostlang$frostc$parser$Parser* $tmp288 = *(&local2);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp289 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp290 = &$tmp288->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp291 = *$tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp292 = &$tmp288->syntaxHighlighter;
*$tmp292 = $tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:92
org$frostlang$frostc$parser$Parser* $tmp293 = *(&local2);
org$frostlang$frostc$Compiler** $tmp294 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp295 = *$tmp294;
frost$collections$Array** $tmp296 = &$tmp295->files;
frost$collections$Array* $tmp297 = *$tmp296;
ITable* $tmp298 = ((frost$collections$CollectionView*) $tmp297)->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Int $tmp301 = $tmp299(((frost$collections$CollectionView*) $tmp297));
frost$core$Maybe* $tmp302 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
frost$core$Int* $tmp303 = &$tmp302->$rawValue;
frost$core$Int $tmp304 = *$tmp303;
int64_t $tmp305 = $tmp304.value;
bool $tmp306 = $tmp305 == 0u;
if ($tmp306) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp307 = (frost$core$Error**) ($tmp302->$data + 0);
frost$core$Error* $tmp308 = *$tmp307;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$parser$Parser* $tmp309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp311 = (frost$core$Object**) ($tmp302->$data + 0);
frost$core$Object* $tmp312 = *$tmp311;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp293, param1, $tmp301, ((frost$core$String*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:93
org$frostlang$frostc$Compiler** $tmp313 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp314 = *$tmp313;
frost$collections$Array** $tmp315 = &$tmp314->files;
frost$collections$Array* $tmp316 = *$tmp315;
frost$collections$Array$add$frost$collections$Array$T($tmp316, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:94
org$frostlang$frostc$parser$Parser* $tmp317 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp318 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp317);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318 == NULL};
bool $tmp320 = $tmp319.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
if ($tmp320) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:95
goto block7;
block7:;
frost$threads$MessageQueue* $tmp321 = *(&local1);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from HTMLProcessor.frost:95:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp322 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp323 = &$tmp321->lock;
frost$threads$Lock* $tmp324 = *$tmp323;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp322, $tmp324);
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$threads$ScopedLock* $tmp325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local3) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp326 = &$tmp321->count;
frost$core$Int $tmp327 = *$tmp326;
frost$threads$ScopedLock* $tmp328 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp329 = (frost$core$Int) {0u};
int64_t $tmp330 = $tmp327.value;
int64_t $tmp331 = $tmp329.value;
bool $tmp332 = $tmp330 > $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:96
frost$threads$MessageQueue* $tmp335 = *(&local1);
frost$core$Immutable* $tmp336 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp335);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:96:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn338 $tmp337 = ($fn338) ((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp336))->$class->vtable[0];
frost$core$String* $tmp339 = $tmp337(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp336)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp339);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
goto block7;
block9:;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:99
org$frostlang$frostc$parser$Parser* $tmp340 = *(&local2);
frost$core$String* $tmp341 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp340);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from HTMLProcessor.frost:99:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp342 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp343 = $tmp342.value;
frost$core$Int $tmp344 = (frost$core$Int) {((int64_t) $tmp343)};
frost$collections$Array* $tmp345 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp341, &$s346, $tmp344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$collections$Array* $tmp347 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local4) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:100
frost$collections$Array* $tmp348 = *(&local4);
ITable* $tmp349 = ((frost$collections$CollectionView*) $tmp348)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[0];
frost$core$Int $tmp352 = $tmp350(((frost$collections$CollectionView*) $tmp348));
frost$core$Int$wrapper* $tmp353;
$tmp353 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp353->value = $tmp352;
$fn355 $tmp354 = ($fn355) ((frost$core$Object*) $tmp353)->$class->vtable[0];
frost$core$String* $tmp356 = $tmp354(((frost$core$Object*) $tmp353));
// begin inline call to function frost.core.String.get_length():frost.core.Int from HTMLProcessor.frost:100:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp357 = ((frost$collections$Iterable*) $tmp356)->$class->itable;
while ($tmp357->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp357 = $tmp357->next;
}
$fn359 $tmp358 = $tmp357->methods[0];
frost$collections$Iterator* $tmp360 = $tmp358(((frost$collections$Iterable*) $tmp356));
ITable* $tmp361 = $tmp360->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[2];
frost$core$Int $tmp364 = $tmp362($tmp360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local5) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:101
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp365 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp365);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$MutableString* $tmp366 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local6) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:102
frost$core$Int $tmp367 = (frost$core$Int) {0u};
frost$collections$Array* $tmp368 = *(&local4);
ITable* $tmp369 = ((frost$collections$CollectionView*) $tmp368)->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
frost$core$Int $tmp372 = $tmp370(((frost$collections$CollectionView*) $tmp368));
frost$core$Bit $tmp373 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp374 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp367, $tmp372, $tmp373);
frost$core$Int $tmp375 = $tmp374.min;
*(&local7) = $tmp375;
frost$core$Int $tmp376 = $tmp374.max;
frost$core$Bit $tmp377 = $tmp374.inclusive;
bool $tmp378 = $tmp377.value;
frost$core$Int $tmp379 = (frost$core$Int) {1u};
if ($tmp378) goto block20; else goto block21;
block20:;
int64_t $tmp380 = $tmp375.value;
int64_t $tmp381 = $tmp376.value;
bool $tmp382 = $tmp380 <= $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block17; else goto block18;
block21:;
int64_t $tmp385 = $tmp375.value;
int64_t $tmp386 = $tmp376.value;
bool $tmp387 = $tmp385 < $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:103
frost$core$Int $tmp390 = *(&local7);
frost$core$Int $tmp391 = (frost$core$Int) {1u};
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int $tmp395 = (frost$core$Int) {$tmp394};
frost$core$Int$wrapper* $tmp396;
$tmp396 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp396->value = $tmp395;
$fn398 $tmp397 = ($fn398) ((frost$core$Object*) $tmp396)->$class->vtable[0];
frost$core$String* $tmp399 = $tmp397(((frost$core$Object*) $tmp396));
frost$core$Int $tmp400 = *(&local5);
// begin inline call to function frost.core.String.rightAlign(width:frost.core.Int):frost.core.String from HTMLProcessor.frost:103:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1313
frost$core$Int32 $tmp401 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp402 = frost$core$Char32$init$frost$core$Int32($tmp401);
frost$core$String* $tmp403 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String($tmp399, $tmp400, $tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$String* $tmp404 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local8) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:104
frost$core$MutableString* $tmp405 = *(&local6);
frost$core$String* $tmp406 = *(&local8);
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s408, $tmp406);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s410);
frost$collections$Array* $tmp411 = *(&local4);
frost$core$Int $tmp412 = *(&local7);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from HTMLProcessor.frost:104:93
frost$core$Int $tmp413 = (frost$core$Int) {0u};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 >= $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block26; else goto block25;
block26:;
ITable* $tmp419 = ((frost$collections$CollectionView*) $tmp411)->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Int $tmp422 = $tmp420(((frost$collections$CollectionView*) $tmp411));
int64_t $tmp423 = $tmp412.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 < $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block24; else goto block25;
block25:;
frost$core$Int $tmp428 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s429, $tmp428, &$s430);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp431 = &$tmp411->data;
frost$core$Object** $tmp432 = *$tmp431;
frost$core$Int64 $tmp433 = frost$core$Int64$init$frost$core$Int($tmp412);
int64_t $tmp434 = $tmp433.value;
frost$core$Object* $tmp435 = $tmp432[$tmp434];
frost$core$Frost$ref$frost$core$Object$Q($tmp435);
frost$core$String* $tmp436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, ((frost$core$String*) $tmp435));
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp436, &$s438);
frost$core$MutableString$append$frost$core$String($tmp405, $tmp437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q($tmp435);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$String* $tmp439 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Int $tmp440 = *(&local7);
int64_t $tmp441 = $tmp376.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 - $tmp442;
frost$core$Int $tmp444 = (frost$core$Int) {$tmp443};
if ($tmp378) goto block28; else goto block29;
block28:;
int64_t $tmp445 = $tmp444.value;
int64_t $tmp446 = $tmp379.value;
bool $tmp447 = $tmp445 >= $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block27; else goto block18;
block29:;
int64_t $tmp450 = $tmp444.value;
int64_t $tmp451 = $tmp379.value;
bool $tmp452 = $tmp450 > $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block27; else goto block18;
block27:;
int64_t $tmp455 = $tmp440.value;
int64_t $tmp456 = $tmp379.value;
int64_t $tmp457 = $tmp455 + $tmp456;
frost$core$Int $tmp458 = (frost$core$Int) {$tmp457};
*(&local7) = $tmp458;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:106
frost$core$Maybe* $tmp459 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
frost$core$Int* $tmp460 = &$tmp459->$rawValue;
frost$core$Int $tmp461 = *$tmp460;
int64_t $tmp462 = $tmp461.value;
bool $tmp463 = $tmp462 == 0u;
if ($tmp463) goto block30; else goto block31;
block31:;
frost$core$Error** $tmp464 = (frost$core$Error**) ($tmp459->$data + 0);
frost$core$Error* $tmp465 = *$tmp464;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local0) = $tmp465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$MutableString* $tmp466 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp467 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block30:;
frost$core$Object** $tmp470 = (frost$core$Object**) ($tmp459->$data + 0);
frost$core$Object* $tmp471 = *$tmp470;
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp471)));
frost$io$OutputStream* $tmp472 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local9) = ((frost$io$OutputStream*) $tmp471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:107
frost$io$OutputStream* $tmp473 = *(&local9);
$fn475 $tmp474 = ($fn475) $tmp473->$class->vtable[19];
frost$core$Error* $tmp476 = $tmp474($tmp473, &$s477);
if ($tmp476 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp476 != NULL};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block34; else goto block35;
block35:;
frost$core$Int $tmp480 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s481, $tmp480, &$s482);
abort(); // unreachable
block34:;
*(&local0) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$io$OutputStream* $tmp483 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp484 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp485 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:108
frost$io$OutputStream* $tmp488 = *(&local9);
$fn490 $tmp489 = ($fn490) $tmp488->$class->vtable[19];
frost$core$Error* $tmp491 = $tmp489($tmp488, &$s492);
if ($tmp491 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp491 != NULL};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block38; else goto block39;
block39:;
frost$core$Int $tmp495 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s496, $tmp495, &$s497);
abort(); // unreachable
block38:;
*(&local0) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$io$OutputStream* $tmp498 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp499 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp500 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:109
frost$io$OutputStream* $tmp503 = *(&local9);
frost$core$String* $tmp504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s505, param3);
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp504, &$s507);
$fn509 $tmp508 = ($fn509) $tmp503->$class->vtable[19];
frost$core$Error* $tmp510 = $tmp508($tmp503, $tmp506);
if ($tmp510 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510 != NULL};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block42; else goto block43;
block43:;
frost$core$Int $tmp513 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s514, $tmp513, &$s515);
abort(); // unreachable
block42:;
*(&local0) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$io$OutputStream* $tmp516 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp517 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp518 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp519 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:110
frost$io$OutputStream* $tmp521 = *(&local9);
frost$core$String* $tmp522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s523, param3);
frost$core$String* $tmp524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp522, &$s525);
$fn527 $tmp526 = ($fn527) $tmp521->$class->vtable[19];
frost$core$Error* $tmp528 = $tmp526($tmp521, $tmp524);
if ($tmp528 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528 != NULL};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block46; else goto block47;
block47:;
frost$core$Int $tmp531 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s532, $tmp531, &$s533);
abort(); // unreachable
block46:;
*(&local0) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$io$OutputStream* $tmp534 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp535 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp536 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:111
frost$io$OutputStream* $tmp539 = *(&local9);
frost$core$String* $tmp540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s541, param3);
frost$core$String* $tmp542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp540, &$s543);
$fn545 $tmp544 = ($fn545) $tmp539->$class->vtable[19];
frost$core$Error* $tmp546 = $tmp544($tmp539, $tmp542);
if ($tmp546 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546 != NULL};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block50; else goto block51;
block51:;
frost$core$Int $tmp549 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s550, $tmp549, &$s551);
abort(); // unreachable
block50:;
*(&local0) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$io$OutputStream* $tmp552 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp553 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp554 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp555 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp556 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:112
frost$io$OutputStream* $tmp557 = *(&local9);
$fn559 $tmp558 = ($fn559) $tmp557->$class->vtable[19];
frost$core$Error* $tmp560 = $tmp558($tmp557, &$s561);
if ($tmp560 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp560 != NULL};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block54; else goto block55;
block55:;
frost$core$Int $tmp564 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s565, $tmp564, &$s566);
abort(); // unreachable
block54:;
*(&local0) = $tmp560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$io$OutputStream* $tmp567 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp568 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp569 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:113
frost$io$OutputStream* $tmp572 = *(&local9);
$fn574 $tmp573 = ($fn574) $tmp572->$class->vtable[19];
frost$core$Error* $tmp575 = $tmp573($tmp572, &$s576);
if ($tmp575 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp575 != NULL};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block58; else goto block59;
block59:;
frost$core$Int $tmp579 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s580, $tmp579, &$s581);
abort(); // unreachable
block58:;
*(&local0) = $tmp575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$io$OutputStream* $tmp582 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp583 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp585 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:114
frost$io$OutputStream* $tmp587 = *(&local9);
$fn589 $tmp588 = ($fn589) $tmp587->$class->vtable[19];
frost$core$Error* $tmp590 = $tmp588($tmp587, &$s591);
if ($tmp590 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp590 != NULL};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block62; else goto block63;
block63:;
frost$core$Int $tmp594 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s595, $tmp594, &$s596);
abort(); // unreachable
block62:;
*(&local0) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$io$OutputStream* $tmp597 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp598 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp599 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp600 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp601 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:115
frost$io$OutputStream* $tmp602 = *(&local9);
$fn604 $tmp603 = ($fn604) $tmp602->$class->vtable[19];
frost$core$Error* $tmp605 = $tmp603($tmp602, &$s606);
if ($tmp605 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp605 != NULL};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block66; else goto block67;
block67:;
frost$core$Int $tmp609 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s610, $tmp609, &$s611);
abort(); // unreachable
block66:;
*(&local0) = $tmp605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$io$OutputStream* $tmp612 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp613 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp614 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:116
frost$io$OutputStream* $tmp617 = *(&local9);
$fn619 $tmp618 = ($fn619) $tmp617->$class->vtable[19];
frost$core$Error* $tmp620 = $tmp618($tmp617, &$s621);
if ($tmp620 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp620 != NULL};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block70; else goto block71;
block71:;
frost$core$Int $tmp624 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s625, $tmp624, &$s626);
abort(); // unreachable
block70:;
*(&local0) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$io$OutputStream* $tmp627 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp628 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp629 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:117
frost$io$OutputStream* $tmp632 = *(&local9);
$fn634 $tmp633 = ($fn634) $tmp632->$class->vtable[19];
frost$core$Error* $tmp635 = $tmp633($tmp632, &$s636);
if ($tmp635 == NULL) goto block72; else goto block73;
block73:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp635 != NULL};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block74; else goto block75;
block75:;
frost$core$Int $tmp639 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block74:;
*(&local0) = $tmp635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$io$OutputStream* $tmp642 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp643 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp644 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp645 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp646 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:118
frost$io$OutputStream* $tmp647 = *(&local9);
frost$core$MutableString* $tmp648 = *(&local6);
frost$core$String* $tmp649 = frost$core$MutableString$finish$R$frost$core$String($tmp648);
$fn651 $tmp650 = ($fn651) $tmp647->$class->vtable[17];
frost$core$Error* $tmp652 = $tmp650($tmp647, $tmp649);
if ($tmp652 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652 != NULL};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block78; else goto block79;
block79:;
frost$core$Int $tmp655 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s656, $tmp655, &$s657);
abort(); // unreachable
block78:;
*(&local0) = $tmp652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$io$OutputStream* $tmp658 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp659 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp660 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp661 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp662 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:119
frost$io$OutputStream* $tmp663 = *(&local9);
$fn665 $tmp664 = ($fn665) $tmp663->$class->vtable[19];
frost$core$Error* $tmp666 = $tmp664($tmp663, &$s667);
if ($tmp666 == NULL) goto block80; else goto block81;
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Bit $tmp668 = (frost$core$Bit) {$tmp666 != NULL};
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block82; else goto block83;
block83:;
frost$core$Int $tmp670 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s671, $tmp670, &$s672);
abort(); // unreachable
block82:;
*(&local0) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$io$OutputStream* $tmp673 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp674 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp675 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp676 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp677 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:120
frost$io$OutputStream* $tmp678 = *(&local9);
$fn680 $tmp679 = ($fn680) $tmp678->$class->vtable[19];
frost$core$Error* $tmp681 = $tmp679($tmp678, &$s682);
if ($tmp681 == NULL) goto block84; else goto block85;
block85:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp681 != NULL};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block86; else goto block87;
block87:;
frost$core$Int $tmp685 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s686, $tmp685, &$s687);
abort(); // unreachable
block86:;
*(&local0) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$io$OutputStream* $tmp688 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp689 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp690 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp691 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:121
frost$io$OutputStream* $tmp693 = *(&local9);
$fn695 $tmp694 = ($fn695) $tmp693->$class->vtable[19];
frost$core$Error* $tmp696 = $tmp694($tmp693, &$s697);
if ($tmp696 == NULL) goto block88; else goto block89;
block89:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp696 != NULL};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block90; else goto block91;
block91:;
frost$core$Int $tmp700 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s701, $tmp700, &$s702);
abort(); // unreachable
block90:;
*(&local0) = $tmp696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$io$OutputStream* $tmp703 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp704 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp705 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp707 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block88:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:122
frost$io$OutputStream* $tmp708 = *(&local9);
$fn710 $tmp709 = ($fn710) $tmp708->$class->vtable[19];
frost$core$Error* $tmp711 = $tmp709($tmp708, &$s712);
if ($tmp711 == NULL) goto block92; else goto block93;
block93:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp711 != NULL};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block94; else goto block95;
block95:;
frost$core$Int $tmp715 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s716, $tmp715, &$s717);
abort(); // unreachable
block94:;
*(&local0) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$io$OutputStream* $tmp718 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp719 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp720 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp721 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block92:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:123
frost$io$OutputStream* $tmp723 = *(&local9);
$fn725 $tmp724 = ($fn725) $tmp723->$class->vtable[19];
frost$core$Error* $tmp726 = $tmp724($tmp723, &$s727);
if ($tmp726 == NULL) goto block96; else goto block97;
block97:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp726 != NULL};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block98; else goto block99;
block99:;
frost$core$Int $tmp730 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s731, $tmp730, &$s732);
abort(); // unreachable
block98:;
*(&local0) = $tmp726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$io$OutputStream* $tmp733 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp734 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp735 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp736 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp737 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$io$OutputStream* $tmp738 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp739 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp740 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp741 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Error* $tmp743 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:126
frost$core$Error* $tmp744 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:126:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn746 $tmp745 = ($fn746) ((frost$core$Object*) $tmp744)->$class->vtable[0];
frost$core$String* $tmp747 = $tmp745(((frost$core$Object*) $tmp744));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp747);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:127
frost$core$Int $tmp748 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp748);
frost$core$Int $tmp749 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s750, $tmp749, &$s751);
abort(); // unreachable

}
void org$frostlang$frostc$HTMLProcessor$cleanup(org$frostlang$frostc$HTMLProcessor* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp752 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp753 = *$tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
return;

}

