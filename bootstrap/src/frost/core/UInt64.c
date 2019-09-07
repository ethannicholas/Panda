#include "frost/core/UInt64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt.h"
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "org/frostlang/frost/UInt64List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_hash$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt64$format$frost$core$String$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_count$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt64$get_asString$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$BNOT$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim(frost$core$UInt64* sret, frost$core$Object* p0) {
    frost$core$UInt64$get_bitCount$R$frost$core$UInt64(sret, ((frost$core$UInt64$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_asInt$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt64$get_asInt8$R$frost$core$Int8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt64$get_asInt16$R$frost$core$Int16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt64$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt64$get_asUInt$R$frost$core$UInt(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt64$get_asReal32$R$frost$core$Real32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt64$get_asReal64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt64$cleanup(((frost$core$UInt64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$_frost$collections$HashKey, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int$shim, frost$core$UInt64$get_asInt$R$frost$core$Int$shim, frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt64$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$HashKey, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 927876898115167035, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, 7504487529883524065, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, -4057673255977011726, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 121, -7196161859593174948, NULL };

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t param0) {

frost$core$UInt64 local0;
uint64_t* _1;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt64 local0;
uint8_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:36
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt64 local0;
uint16_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:42
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$UInt64 local0;
uint32_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:48
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$UInt64 local0;
uint64_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:54
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:60
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:66
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:71
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:77
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:83
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int8 param1) {

uint64_t _1;
double _2;
int8_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:95
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int16 param1) {

uint64_t _1;
double _2;
int16_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:101
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int32 param1) {

uint64_t _1;
double _2;
int32_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:107
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int64 param1) {

uint64_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:113
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
double _2;
uint8_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:119
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
double _2;
uint16_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:125
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
double _2;
uint32_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:131
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:137
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real32 param1) {

uint64_t _1;
double _2;
float _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:143
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real64 param1) {

uint64_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:149
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:154
_1 = param0.value;
_2 = !_1;
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:172
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:178
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:184
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:190
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:196
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$UInt64) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:208
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:214
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:220
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:233
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:239
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:245
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:251
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:258
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:264
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:270
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:276
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:282
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:289
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:295
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:301
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:307
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:313
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:320
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:326
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:332
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:338
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:344
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:351
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:357
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:363
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:369
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:375
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:382
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:388
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint8_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:399
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:400
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:402
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint16_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:408
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:409
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:411
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint32_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:417
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:418
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:420
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint64_t _8;
frost$core$UInt64 _9;
uint64_t _12;
frost$core$UInt64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:426
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:427
_8 = param0.value;
_9 = (frost$core$UInt64) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:429
_12 = param1.value;
_13 = (frost$core$UInt64) {_12};
return _13;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint64_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:435
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:436
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:438
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint8_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:449
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:450
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:452
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint16_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:458
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:459
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:461
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint32_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:467
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:468
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:470
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint64_t _8;
frost$core$UInt64 _9;
uint64_t _12;
frost$core$UInt64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:476
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:477
_8 = param0.value;
_9 = (frost$core$UInt64) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:479
_12 = param1.value;
_13 = (frost$core$UInt64) {_12};
return _13;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt64 _10;
uint64_t _13;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:485
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:486
_9 = param0.value;
_10 = (frost$core$UInt64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:488
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 _0;
frost$core$UInt64 _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
frost$core$Int64 _6;
int64_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _13;
uint64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _19;
org$frostlang$frost$UInt64List* _23;
frost$core$UInt64 _24;
frost$core$UInt64 _25;
frost$core$UInt64 _26;
frost$core$Bit _27;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT _28;
frost$collections$ListView* _30;
frost$core$Object* _31;
frost$core$Object* _33;
_0 = param0.max;
_1 = param0.min;
_2 = _0.value;
_3 = _1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt64) {_4};
_6 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from UInt64.frost:492:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_9 = _6.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
_13 = _5.value;
_14 = _11.value;
_15 = _13 < _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block2:;
_19 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _19, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:494
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
_23 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
_24 = param0.min;
_25 = param0.max;
_26 = (frost$core$UInt64) {1u};
_27 = param0.inclusive;
_28 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit(_24, _25, _26, _27);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(_23, _28);
_30 = ((frost$collections$ListView*) _23);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return _30;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
org$frostlang$frost$UInt64List* _12;
frost$collections$ListView* _14;
frost$core$Object* _15;
frost$core$Object* _17;
_0 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int(param0);
_1 = (frost$core$Int) {0u};
_2 = _0.value;
_3 = _1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {499u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _8, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:500
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
_12 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(_12, param0);
_14 = ((frost$collections$ListView*) _12);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return _14;

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int param1) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn8 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Object* _15;
frost$core$Int _18;
frost$core$Int _22;
int64_t _25;
int64_t _26;
int64_t _27;
frost$core$Int _28;
frost$core$Int64 _30;
uint64_t _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int64 _37;
frost$core$Int64 _39;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
frost$core$UInt64$wrapper* $tmp9;
$tmp9 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp9->value = param0;
_7 = ((frost$collections$CollectionView*) $tmp9);
ITable* $tmp10 = _7->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_8 = $tmp10->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
_15 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_15);
if (_14) goto block1; else goto block2;
block2:;
_18 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _18, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt64.frost:506:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
_30 = frost$core$Int64$init$frost$core$Int(_28);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:506:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
_33 = param0.value;
_34 = ((int64_t) _33);
_35 = _30.value;
_36 = _34 & _35;
_37 = (frost$core$Int64) {_36};
_39 = (frost$core$Int64) {0u};
_40 = _37.value;
_41 = _39.value;
_42 = _40 != _41;
_43 = (frost$core$Bit) {_42};
return _43;

}
frost$core$Int frost$core$UInt64$get_count$R$frost$core$Int(frost$core$UInt64 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:512
_1 = (frost$core$Int) {64u};
return _1;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

org$frostlang$frost$IntBitIterator* _1;
frost$core$UInt64 _2;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:522
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
_2 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(_1, param0, _2);
_4 = ((frost$collections$Iterator*) _1);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}
frost$core$Int frost$core$UInt64$get_hash$R$frost$core$Int(frost$core$UInt64 param0) {

uint64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:527
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Int _14;
frost$core$UInt64$nullable _18;
frost$core$UInt64$nullable _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$UInt64$nullable _29;
_0 = (frost$core$Int) {2u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {36u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 <= _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {533u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _14, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:534
_18 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:535
_21 = *(&local0);
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:536
return ((frost$core$UInt64$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:538
_29 = *(&local0);
return _29;

}
frost$core$Int frost$core$UInt64$get_asInt$R$frost$core$Int(frost$core$UInt64 param0) {

uint64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8(frost$core$UInt64 param0) {

uint64_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16(frost$core$UInt64 param0) {

uint64_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:556
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32(frost$core$UInt64 param0) {

uint64_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:562
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

uint64_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$UInt64$get_asUInt$R$frost$core$UInt(frost$core$UInt64 param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:574
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(frost$core$UInt64 param0) {

uint64_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(frost$core$UInt64 param0) {

uint64_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:586
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(frost$core$UInt64 param0) {

uint64_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32(frost$core$UInt64 param0) {

uint64_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:598
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64(frost$core$UInt64 param0) {

uint64_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:604
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt64 local3;
frost$core$Int local4;
frost$core$Int local5;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Int64 _5;
int64_t _6;
frost$core$Char8* _7;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
frost$core$UInt64 _20;
frost$core$UInt64 _21;
uint64_t _22;
uint64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int64 _33;
frost$core$UInt64 _34;
frost$core$UInt64 _35;
uint64_t _38;
uint64_t _39;
uint64_t _40;
frost$core$UInt64 _41;
frost$core$UInt64 _43;
uint64_t _44;
uint64_t _45;
uint64_t _46;
frost$core$UInt64 _47;
uint64_t _50;
uint8_t _51;
frost$core$UInt8 _52;
frost$core$Char8 _54;
int64_t _55;
frost$core$UInt64 _58;
frost$core$UInt64 _59;
uint64_t _60;
uint64_t _61;
uint64_t _62;
frost$core$UInt64 _63;
frost$core$Int _66;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
frost$core$UInt64 _74;
frost$core$UInt64 _75;
uint64_t _76;
uint64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _83;
frost$core$Int _84;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Char8* _95;
frost$core$Int _96;
frost$core$Int64 _97;
frost$core$UInt64 _98;
frost$core$UInt64 _99;
frost$core$UInt64 _100;
uint64_t _103;
uint64_t _104;
uint64_t _105;
frost$core$UInt64 _106;
uint64_t _108;
uint64_t _109;
uint64_t _110;
frost$core$UInt64 _111;
uint64_t _114;
uint8_t _115;
frost$core$UInt8 _116;
frost$core$Char8 _118;
int64_t _119;
frost$core$UInt64 _122;
frost$core$UInt64 _123;
uint64_t _124;
uint64_t _125;
uint64_t _126;
frost$core$UInt64 _127;
frost$core$Int _130;
frost$core$Int _131;
int64_t _132;
int64_t _133;
int64_t _134;
frost$core$Int _135;
frost$core$UInt64 _138;
frost$core$UInt64 _139;
uint64_t _140;
uint64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
frost$core$Char8* _147;
frost$core$Int _148;
frost$core$Int64 _149;
frost$core$UInt8 _150;
frost$core$Char8 _151;
int64_t _152;
frost$core$Int _156;
frost$core$Int _157;
int64_t _158;
int64_t _159;
int64_t _160;
frost$core$Int _161;
frost$core$Int _164;
frost$core$Int _165;
frost$core$Bit _166;
frost$core$Range$LTfrost$core$Int$GT _167;
frost$core$Int _168;
frost$core$Int _170;
frost$core$Bit _171;
bool _172;
frost$core$Int _173;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _179;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _185;
frost$core$Char8* _188;
frost$core$Int _189;
frost$core$Int64 _190;
frost$core$Char8* _191;
frost$core$Int _192;
frost$core$Int _193;
int64_t _194;
int64_t _195;
int64_t _196;
frost$core$Int _197;
frost$core$Int64 _198;
int64_t _199;
frost$core$Char8 _200;
int64_t _201;
frost$core$Int _204;
int64_t _205;
int64_t _206;
int64_t _207;
frost$core$Int _208;
int64_t _210;
int64_t _211;
bool _212;
frost$core$Bit _213;
bool _214;
int64_t _216;
int64_t _217;
bool _218;
frost$core$Bit _219;
bool _220;
int64_t _222;
int64_t _223;
int64_t _224;
frost$core$Int _225;
frost$core$String* _229;
frost$core$Char8* _230;
frost$core$Int _231;
frost$core$Object* _233;
frost$core$Object* _235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:610
_1 = (frost$core$Int) {20u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:611
_4 = *(&local0);
_5 = frost$core$Int64$init$frost$core$Int(_4);
_6 = _5.value;
_7 = ((frost$core$Char8*) frostAlloc(_6 * 1));
*(&local1) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:612
_10 = *(&local0);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
*(&local2) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:613
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:614
_20 = *(&local3);
_21 = (frost$core$UInt64) {0u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:615
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:616
_31 = *(&local1);
_32 = *(&local2);
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = *(&local3);
_35 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:616:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
_38 = _34.value;
_39 = _35.value;
_40 = _38 % _39;
_41 = (frost$core$UInt64) {_40};
_43 = (frost$core$UInt64) {48u};
_44 = _41.value;
_45 = _43.value;
_46 = _44 + _45;
_47 = (frost$core$UInt64) {_46};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:616:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
_50 = _47.value;
_51 = ((uint8_t) _50);
_52 = (frost$core$UInt8) {_51};
_54 = frost$core$Char8$init$frost$core$UInt8(_52);
_55 = _33.value;
_31[_55] = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:617
_58 = *(&local3);
_59 = (frost$core$UInt64) {10u};
_60 = _58.value;
_61 = _59.value;
_62 = _60 / _61;
_63 = (frost$core$UInt64) {_62};
*(&local3) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:618
_66 = *(&local2);
_67 = (frost$core$Int) {1u};
_68 = _66.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
*(&local2) = _71;
_74 = *(&local3);
_75 = (frost$core$UInt64) {0u};
_76 = _74.value;
_77 = _75.value;
_78 = _76 > _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:621
_83 = *(&local2);
_84 = (frost$core$Int) {1u};
_85 = _83.value;
_86 = _84.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
*(&local2) = _88;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:624
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:625
_95 = *(&local1);
_96 = *(&local2);
_97 = frost$core$Int64$init$frost$core$Int(_96);
_98 = (frost$core$UInt64) {48u};
_99 = *(&local3);
_100 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:625:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
_103 = _99.value;
_104 = _100.value;
_105 = _103 % _104;
_106 = (frost$core$UInt64) {_105};
_108 = _98.value;
_109 = _106.value;
_110 = _108 - _109;
_111 = (frost$core$UInt64) {_110};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:625:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
_114 = _111.value;
_115 = ((uint8_t) _114);
_116 = (frost$core$UInt8) {_115};
_118 = frost$core$Char8$init$frost$core$UInt8(_116);
_119 = _97.value;
_95[_119] = _118;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:626
_122 = *(&local3);
_123 = (frost$core$UInt64) {10u};
_124 = _122.value;
_125 = _123.value;
_126 = _124 / _125;
_127 = (frost$core$UInt64) {_126};
*(&local3) = _127;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:627
_130 = *(&local2);
_131 = (frost$core$Int) {1u};
_132 = _130.value;
_133 = _131.value;
_134 = _132 - _133;
_135 = (frost$core$Int) {_134};
*(&local2) = _135;
_138 = *(&local3);
_139 = (frost$core$UInt64) {0u};
_140 = _138.value;
_141 = _139.value;
_142 = _140 < _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:630
_147 = *(&local1);
_148 = *(&local2);
_149 = frost$core$Int64$init$frost$core$Int(_148);
_150 = (frost$core$UInt8) {45u};
_151 = frost$core$Char8$init$frost$core$UInt8(_150);
_152 = _149.value;
_147[_152] = _151;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:632
_156 = *(&local0);
_157 = *(&local2);
_158 = _156.value;
_159 = _157.value;
_160 = _158 - _159;
_161 = (frost$core$Int) {_160};
*(&local4) = _161;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:633
_164 = (frost$core$Int) {0u};
_165 = *(&local4);
_166 = (frost$core$Bit) {false};
_167 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_164, _165, _166);
_168 = _167.min;
*(&local5) = _168;
_170 = _167.max;
_171 = _167.inclusive;
_172 = _171.value;
_173 = (frost$core$Int) {1u};
if (_172) goto block17; else goto block18;
block17:;
_175 = _168.value;
_176 = _170.value;
_177 = _175 <= _176;
_178 = (frost$core$Bit) {_177};
_179 = _178.value;
if (_179) goto block14; else goto block15;
block18:;
_181 = _168.value;
_182 = _170.value;
_183 = _181 < _182;
_184 = (frost$core$Bit) {_183};
_185 = _184.value;
if (_185) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:634
_188 = *(&local1);
_189 = *(&local5);
_190 = frost$core$Int64$init$frost$core$Int(_189);
_191 = *(&local1);
_192 = *(&local5);
_193 = *(&local2);
_194 = _192.value;
_195 = _193.value;
_196 = _194 + _195;
_197 = (frost$core$Int) {_196};
_198 = frost$core$Int64$init$frost$core$Int(_197);
_199 = _198.value;
_200 = _191[_199];
_201 = _190.value;
_188[_201] = _200;
_204 = *(&local5);
_205 = _170.value;
_206 = _204.value;
_207 = _205 - _206;
_208 = (frost$core$Int) {_207};
if (_172) goto block20; else goto block21;
block20:;
_210 = _208.value;
_211 = _173.value;
_212 = _210 >= _211;
_213 = (frost$core$Bit) {_212};
_214 = _213.value;
if (_214) goto block19; else goto block15;
block21:;
_216 = _208.value;
_217 = _173.value;
_218 = _216 > _217;
_219 = (frost$core$Bit) {_218};
_220 = _219.value;
if (_220) goto block19; else goto block15;
block19:;
_222 = _204.value;
_223 = _173.value;
_224 = _222 + _223;
_225 = (frost$core$Int) {_224};
*(&local5) = _225;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:636
FROST_ASSERT(48 == sizeof(frost$core$String));
_229 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_230 = *(&local1);
_231 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_229, _230, _231);
_233 = ((frost$core$Object*) _229);
frost$core$Frost$ref$frost$core$Object$Q(_233);
_235 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_235);
return _229;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

frost$core$Bit _1;
frost$core$UInt64 _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:642
_1 = (frost$core$Bit) {false};
_2 = (frost$core$UInt64) {18446744073709551615u};
_3 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_1, param0, _2, param1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

