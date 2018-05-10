#include "panda/core/UInt32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt32$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt32$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt32$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt32$hash$R$panda$core$Int64$wrappershim(panda$core$UInt32$wrapper* self) {
    return panda$core$UInt32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$String* panda$core$UInt32$convert$R$panda$core$String$wrappershim(panda$core$UInt32$wrapper* self) {
    return panda$core$UInt32$convert$R$panda$core$String(self->value);
}
void panda$core$UInt32$cleanup$wrappershim(panda$core$UInt32$wrapper* self) {
    panda$core$UInt32$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt32$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt32$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt32$_panda$core$Formattable, { panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt32$_panda$core$Equatable, { panda$core$UInt32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt32$_panda$collections$Key, { panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$UInt32$class_type panda$core$UInt32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt32$_panda$core$Comparable, { panda$core$UInt32$convert$R$panda$core$String, panda$core$UInt32$cleanup, panda$core$UInt32$$ADD$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SUB$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SUB$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$INTDIV$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$REM$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BNOT$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$EQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$NEQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$min$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$min$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$min$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$min$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$max$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$max$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$max$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$max$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$hash$R$panda$core$Int64, panda$core$UInt32$convert$R$panda$core$Int8, panda$core$UInt32$convert$R$panda$core$Int16, panda$core$UInt32$convert$R$panda$core$Int32, panda$core$UInt32$convert$R$panda$core$Int64, panda$core$UInt32$convert$R$panda$core$UInt8, panda$core$UInt32$convert$R$panda$core$UInt16, panda$core$UInt32$convert$R$panda$core$UInt64, panda$core$UInt32$convert$R$panda$core$Real32, panda$core$UInt32$convert$R$panda$core$Real64, panda$core$UInt32$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt32$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt32$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Formattable, { panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Equatable, { panda$core$UInt32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt32$wrapper_panda$collections$Key, { panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$UInt32$wrapperclass_type panda$core$UInt32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Comparable, { panda$core$UInt32$convert$R$panda$core$String$wrappershim, panda$core$UInt32$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };

void panda$core$UInt32$init$builtin_uint32(panda$core$UInt32* self, uint32_t p_value) {
    self->value = p_value;
}
void panda$core$UInt32$init$panda$core$UInt8(panda$core$UInt32* self, panda$core$UInt8 p_value) {
    self->value = ((uint32_t) p_value.value);
}
void panda$core$UInt32$init$panda$core$UInt16(panda$core$UInt32* self, panda$core$UInt16 p_value) {
    self->value = ((uint32_t) p_value.value);
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn2;
    int64_t $tmp4 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $finallyReturn2 = ((panda$core$Int64) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn5;
    int64_t $tmp7 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $finallyReturn5 = ((panda$core$Int64) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn8;
    int64_t $tmp10 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $finallyReturn8 = ((panda$core$Int64) { $tmp10 });
    return $finallyReturn8;
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn11;
    uint32_t $tmp13 = self.value + ((uint32_t) p_other.value);
    $finallyReturn11 = ((panda$core$UInt32) { $tmp13 });
    return $finallyReturn11;
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn14;
    uint32_t $tmp16 = self.value + ((uint32_t) p_other.value);
    $finallyReturn14 = ((panda$core$UInt32) { $tmp16 });
    return $finallyReturn14;
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn17;
    uint32_t $tmp19 = self.value + p_other.value;
    $finallyReturn17 = ((panda$core$UInt32) { $tmp19 });
    return $finallyReturn17;
}
panda$core$UInt64 panda$core$UInt32$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn20;
    uint64_t $tmp22 = ((uint64_t) self.value) + p_other.value;
    $finallyReturn20 = ((panda$core$UInt64) { $tmp22 });
    return $finallyReturn20;
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn23;
    int64_t $tmp25 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $finallyReturn23 = ((panda$core$Int64) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn26;
    int64_t $tmp28 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $finallyReturn26 = ((panda$core$Int64) { $tmp28 });
    return $finallyReturn26;
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn29;
    int64_t $tmp31 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $finallyReturn29 = ((panda$core$Int64) { $tmp31 });
    return $finallyReturn29;
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn32;
    uint32_t $tmp34 = self.value - ((uint32_t) p_other.value);
    $finallyReturn32 = ((panda$core$UInt32) { $tmp34 });
    return $finallyReturn32;
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn35;
    uint32_t $tmp37 = self.value - ((uint32_t) p_other.value);
    $finallyReturn35 = ((panda$core$UInt32) { $tmp37 });
    return $finallyReturn35;
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn38;
    uint32_t $tmp40 = self.value - p_other.value;
    $finallyReturn38 = ((panda$core$UInt32) { $tmp40 });
    return $finallyReturn38;
}
panda$core$UInt64 panda$core$UInt32$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn41;
    uint64_t $tmp43 = ((uint64_t) self.value) - p_other.value;
    $finallyReturn41 = ((panda$core$UInt64) { $tmp43 });
    return $finallyReturn41;
}
panda$core$UInt32 panda$core$UInt32$$SUB$R$panda$core$UInt32(panda$core$UInt32 self) {
    panda$core$UInt32 $finallyReturn44;
    $finallyReturn44 = ((panda$core$UInt32) { -self.value });
    return $finallyReturn44;
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn47;
    int64_t $tmp49 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $finallyReturn47 = ((panda$core$Int64) { $tmp49 });
    return $finallyReturn47;
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn50;
    int64_t $tmp52 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $finallyReturn50 = ((panda$core$Int64) { $tmp52 });
    return $finallyReturn50;
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn53;
    int64_t $tmp55 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $finallyReturn53 = ((panda$core$Int64) { $tmp55 });
    return $finallyReturn53;
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn56;
    uint32_t $tmp58 = self.value * ((uint32_t) p_other.value);
    $finallyReturn56 = ((panda$core$UInt32) { $tmp58 });
    return $finallyReturn56;
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn59;
    uint32_t $tmp61 = self.value * ((uint32_t) p_other.value);
    $finallyReturn59 = ((panda$core$UInt32) { $tmp61 });
    return $finallyReturn59;
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn62;
    uint32_t $tmp64 = self.value * p_other.value;
    $finallyReturn62 = ((panda$core$UInt32) { $tmp64 });
    return $finallyReturn62;
}
panda$core$UInt64 panda$core$UInt32$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn65;
    uint64_t $tmp67 = ((uint64_t) self.value) * p_other.value;
    $finallyReturn65 = ((panda$core$UInt64) { $tmp67 });
    return $finallyReturn65;
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn68;
    int64_t $tmp70 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $finallyReturn68 = ((panda$core$Int64) { $tmp70 });
    return $finallyReturn68;
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn71;
    int64_t $tmp73 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $finallyReturn71 = ((panda$core$Int64) { $tmp73 });
    return $finallyReturn71;
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn74;
    int64_t $tmp76 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $finallyReturn74 = ((panda$core$Int64) { $tmp76 });
    return $finallyReturn74;
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn77;
    uint32_t $tmp79 = self.value / ((uint32_t) p_other.value);
    $finallyReturn77 = ((panda$core$UInt32) { $tmp79 });
    return $finallyReturn77;
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn80;
    uint32_t $tmp82 = self.value / ((uint32_t) p_other.value);
    $finallyReturn80 = ((panda$core$UInt32) { $tmp82 });
    return $finallyReturn80;
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn83;
    uint32_t $tmp85 = self.value / p_other.value;
    $finallyReturn83 = ((panda$core$UInt32) { $tmp85 });
    return $finallyReturn83;
}
panda$core$UInt64 panda$core$UInt32$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn86;
    uint64_t $tmp88 = ((uint64_t) self.value) / p_other.value;
    $finallyReturn86 = ((panda$core$UInt64) { $tmp88 });
    return $finallyReturn86;
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn89;
    int64_t $tmp91 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $finallyReturn89 = ((panda$core$Int64) { $tmp91 });
    return $finallyReturn89;
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn92;
    int64_t $tmp94 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $finallyReturn92 = ((panda$core$Int64) { $tmp94 });
    return $finallyReturn92;
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn95;
    int64_t $tmp97 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $finallyReturn95 = ((panda$core$Int64) { $tmp97 });
    return $finallyReturn95;
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn98;
    uint32_t $tmp100 = self.value % ((uint32_t) p_other.value);
    $finallyReturn98 = ((panda$core$UInt32) { $tmp100 });
    return $finallyReturn98;
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn101;
    uint32_t $tmp103 = self.value % ((uint32_t) p_other.value);
    $finallyReturn101 = ((panda$core$UInt32) { $tmp103 });
    return $finallyReturn101;
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn104;
    uint32_t $tmp106 = self.value % p_other.value;
    $finallyReturn104 = ((panda$core$UInt32) { $tmp106 });
    return $finallyReturn104;
}
panda$core$UInt64 panda$core$UInt32$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn107;
    uint64_t $tmp109 = ((uint64_t) self.value) % p_other.value;
    $finallyReturn107 = ((panda$core$UInt64) { $tmp109 });
    return $finallyReturn107;
}
panda$core$UInt32 panda$core$UInt32$$BNOT$R$panda$core$UInt32(panda$core$UInt32 self) {
    panda$core$UInt32 $finallyReturn110;
    $finallyReturn110 = ((panda$core$UInt32) { ~self.value });
    return $finallyReturn110;
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn113;
    int32_t $tmp115 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $finallyReturn113 = ((panda$core$Int32) { $tmp115 });
    return $finallyReturn113;
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn116;
    int32_t $tmp118 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $finallyReturn116 = ((panda$core$Int32) { $tmp118 });
    return $finallyReturn116;
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn119;
    int32_t $tmp121 = ((int32_t) self.value) & p_other.value;
    $finallyReturn119 = ((panda$core$Int32) { $tmp121 });
    return $finallyReturn119;
}
panda$core$Int64 panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn122;
    int64_t $tmp124 = ((int64_t) self.value) & p_other.value;
    $finallyReturn122 = ((panda$core$Int64) { $tmp124 });
    return $finallyReturn122;
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn125;
    uint32_t $tmp127 = self.value & ((uint32_t) p_other.value);
    $finallyReturn125 = ((panda$core$UInt32) { $tmp127 });
    return $finallyReturn125;
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn128;
    uint32_t $tmp130 = self.value & ((uint32_t) p_other.value);
    $finallyReturn128 = ((panda$core$UInt32) { $tmp130 });
    return $finallyReturn128;
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn131;
    uint32_t $tmp133 = self.value & p_other.value;
    $finallyReturn131 = ((panda$core$UInt32) { $tmp133 });
    return $finallyReturn131;
}
panda$core$UInt64 panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn134;
    uint64_t $tmp136 = ((uint64_t) self.value) & p_other.value;
    $finallyReturn134 = ((panda$core$UInt64) { $tmp136 });
    return $finallyReturn134;
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn137;
    int32_t $tmp139 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $finallyReturn137 = ((panda$core$Int32) { $tmp139 });
    return $finallyReturn137;
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn140;
    int32_t $tmp142 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $finallyReturn140 = ((panda$core$Int32) { $tmp142 });
    return $finallyReturn140;
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn143;
    int32_t $tmp145 = ((int32_t) self.value) | p_other.value;
    $finallyReturn143 = ((panda$core$Int32) { $tmp145 });
    return $finallyReturn143;
}
panda$core$Int64 panda$core$UInt32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn146;
    int64_t $tmp148 = ((int64_t) self.value) | p_other.value;
    $finallyReturn146 = ((panda$core$Int64) { $tmp148 });
    return $finallyReturn146;
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn149;
    uint32_t $tmp151 = self.value | ((uint32_t) p_other.value);
    $finallyReturn149 = ((panda$core$UInt32) { $tmp151 });
    return $finallyReturn149;
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn152;
    uint32_t $tmp154 = self.value | ((uint32_t) p_other.value);
    $finallyReturn152 = ((panda$core$UInt32) { $tmp154 });
    return $finallyReturn152;
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn155;
    uint32_t $tmp157 = self.value | p_other.value;
    $finallyReturn155 = ((panda$core$UInt32) { $tmp157 });
    return $finallyReturn155;
}
panda$core$UInt64 panda$core$UInt32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn158;
    uint64_t $tmp160 = ((uint64_t) self.value) | p_other.value;
    $finallyReturn158 = ((panda$core$UInt64) { $tmp160 });
    return $finallyReturn158;
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn161;
    int32_t $tmp163 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $finallyReturn161 = ((panda$core$Int32) { $tmp163 });
    return $finallyReturn161;
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn164;
    int32_t $tmp166 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $finallyReturn164 = ((panda$core$Int32) { $tmp166 });
    return $finallyReturn164;
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn167;
    int32_t $tmp169 = ((int32_t) self.value) ^ p_other.value;
    $finallyReturn167 = ((panda$core$Int32) { $tmp169 });
    return $finallyReturn167;
}
panda$core$Int64 panda$core$UInt32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn170;
    int64_t $tmp172 = ((int64_t) self.value) ^ p_other.value;
    $finallyReturn170 = ((panda$core$Int64) { $tmp172 });
    return $finallyReturn170;
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn173;
    uint32_t $tmp175 = self.value ^ ((uint32_t) p_other.value);
    $finallyReturn173 = ((panda$core$UInt32) { $tmp175 });
    return $finallyReturn173;
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn176;
    uint32_t $tmp178 = self.value ^ ((uint32_t) p_other.value);
    $finallyReturn176 = ((panda$core$UInt32) { $tmp178 });
    return $finallyReturn176;
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn179;
    uint32_t $tmp181 = self.value ^ p_other.value;
    $finallyReturn179 = ((panda$core$UInt32) { $tmp181 });
    return $finallyReturn179;
}
panda$core$UInt64 panda$core$UInt32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn182;
    uint64_t $tmp184 = ((uint64_t) self.value) ^ p_other.value;
    $finallyReturn182 = ((panda$core$UInt64) { $tmp184 });
    return $finallyReturn182;
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn185;
    int32_t $tmp187 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $finallyReturn185 = ((panda$core$Int32) { $tmp187 });
    return $finallyReturn185;
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn188;
    int32_t $tmp190 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $finallyReturn188 = ((panda$core$Int32) { $tmp190 });
    return $finallyReturn188;
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn191;
    int32_t $tmp193 = ((int32_t) self.value) << p_other.value;
    $finallyReturn191 = ((panda$core$Int32) { $tmp193 });
    return $finallyReturn191;
}
panda$core$Int64 panda$core$UInt32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn194;
    int64_t $tmp196 = ((int64_t) self.value) << p_other.value;
    $finallyReturn194 = ((panda$core$Int64) { $tmp196 });
    return $finallyReturn194;
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn197;
    uint32_t $tmp199 = self.value << ((uint32_t) p_other.value);
    $finallyReturn197 = ((panda$core$UInt32) { $tmp199 });
    return $finallyReturn197;
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn200;
    uint32_t $tmp202 = self.value << ((uint32_t) p_other.value);
    $finallyReturn200 = ((panda$core$UInt32) { $tmp202 });
    return $finallyReturn200;
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn203;
    uint32_t $tmp205 = self.value << p_other.value;
    $finallyReturn203 = ((panda$core$UInt32) { $tmp205 });
    return $finallyReturn203;
}
panda$core$UInt64 panda$core$UInt32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn206;
    uint64_t $tmp208 = ((uint64_t) self.value) << p_other.value;
    $finallyReturn206 = ((panda$core$UInt64) { $tmp208 });
    return $finallyReturn206;
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn209;
    int32_t $tmp211 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $finallyReturn209 = ((panda$core$Int32) { $tmp211 });
    return $finallyReturn209;
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn212;
    int32_t $tmp214 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $finallyReturn212 = ((panda$core$Int32) { $tmp214 });
    return $finallyReturn212;
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn215;
    int32_t $tmp217 = ((int32_t) self.value) >> p_other.value;
    $finallyReturn215 = ((panda$core$Int32) { $tmp217 });
    return $finallyReturn215;
}
panda$core$Int64 panda$core$UInt32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn218;
    int64_t $tmp220 = ((int64_t) self.value) >> p_other.value;
    $finallyReturn218 = ((panda$core$Int64) { $tmp220 });
    return $finallyReturn218;
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn221;
    uint32_t $tmp223 = self.value >> ((uint32_t) p_other.value);
    $finallyReturn221 = ((panda$core$UInt32) { $tmp223 });
    return $finallyReturn221;
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn224;
    uint32_t $tmp226 = self.value >> ((uint32_t) p_other.value);
    $finallyReturn224 = ((panda$core$UInt32) { $tmp226 });
    return $finallyReturn224;
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn227;
    uint32_t $tmp229 = self.value >> p_other.value;
    $finallyReturn227 = ((panda$core$UInt32) { $tmp229 });
    return $finallyReturn227;
}
panda$core$UInt64 panda$core$UInt32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn230;
    uint64_t $tmp232 = ((uint64_t) self.value) >> p_other.value;
    $finallyReturn230 = ((panda$core$UInt64) { $tmp232 });
    return $finallyReturn230;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn233;
    bool $tmp235 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $finallyReturn233 = ((panda$core$Bit) { $tmp235 });
    return $finallyReturn233;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn236;
    bool $tmp238 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $finallyReturn236 = ((panda$core$Bit) { $tmp238 });
    return $finallyReturn236;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn239;
    bool $tmp241 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $finallyReturn239 = ((panda$core$Bit) { $tmp241 });
    return $finallyReturn239;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn242;
    bool $tmp244 = self.value == ((uint32_t) p_other.value);
    $finallyReturn242 = ((panda$core$Bit) { $tmp244 });
    return $finallyReturn242;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn245;
    bool $tmp247 = self.value == ((uint32_t) p_other.value);
    $finallyReturn245 = ((panda$core$Bit) { $tmp247 });
    return $finallyReturn245;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn248;
    bool $tmp250 = self.value == p_other.value;
    $finallyReturn248 = ((panda$core$Bit) { $tmp250 });
    return $finallyReturn248;
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn251;
    bool $tmp253 = ((uint64_t) self.value) == p_other.value;
    $finallyReturn251 = ((panda$core$Bit) { $tmp253 });
    return $finallyReturn251;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn254;
    bool $tmp256 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $finallyReturn254 = ((panda$core$Bit) { $tmp256 });
    return $finallyReturn254;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn257;
    bool $tmp259 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $finallyReturn257 = ((panda$core$Bit) { $tmp259 });
    return $finallyReturn257;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn260;
    bool $tmp262 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $finallyReturn260 = ((panda$core$Bit) { $tmp262 });
    return $finallyReturn260;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn263;
    bool $tmp265 = self.value != ((uint32_t) p_other.value);
    $finallyReturn263 = ((panda$core$Bit) { $tmp265 });
    return $finallyReturn263;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn266;
    bool $tmp268 = self.value != ((uint32_t) p_other.value);
    $finallyReturn266 = ((panda$core$Bit) { $tmp268 });
    return $finallyReturn266;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn269;
    bool $tmp271 = self.value != p_other.value;
    $finallyReturn269 = ((panda$core$Bit) { $tmp271 });
    return $finallyReturn269;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn272;
    bool $tmp274 = ((uint64_t) self.value) != p_other.value;
    $finallyReturn272 = ((panda$core$Bit) { $tmp274 });
    return $finallyReturn272;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn275;
    bool $tmp277 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $finallyReturn275 = ((panda$core$Bit) { $tmp277 });
    return $finallyReturn275;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn278;
    bool $tmp280 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $finallyReturn278 = ((panda$core$Bit) { $tmp280 });
    return $finallyReturn278;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn281;
    bool $tmp283 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $finallyReturn281 = ((panda$core$Bit) { $tmp283 });
    return $finallyReturn281;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn284;
    bool $tmp286 = self.value < ((uint32_t) p_other.value);
    $finallyReturn284 = ((panda$core$Bit) { $tmp286 });
    return $finallyReturn284;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn287;
    bool $tmp289 = self.value < ((uint32_t) p_other.value);
    $finallyReturn287 = ((panda$core$Bit) { $tmp289 });
    return $finallyReturn287;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn290;
    bool $tmp292 = self.value < p_other.value;
    $finallyReturn290 = ((panda$core$Bit) { $tmp292 });
    return $finallyReturn290;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn293;
    bool $tmp295 = ((uint64_t) self.value) < p_other.value;
    $finallyReturn293 = ((panda$core$Bit) { $tmp295 });
    return $finallyReturn293;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn296;
    bool $tmp298 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $finallyReturn296 = ((panda$core$Bit) { $tmp298 });
    return $finallyReturn296;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn299;
    bool $tmp301 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $finallyReturn299 = ((panda$core$Bit) { $tmp301 });
    return $finallyReturn299;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn302;
    bool $tmp304 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $finallyReturn302 = ((panda$core$Bit) { $tmp304 });
    return $finallyReturn302;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn305;
    bool $tmp307 = self.value > ((uint32_t) p_other.value);
    $finallyReturn305 = ((panda$core$Bit) { $tmp307 });
    return $finallyReturn305;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn308;
    bool $tmp310 = self.value > ((uint32_t) p_other.value);
    $finallyReturn308 = ((panda$core$Bit) { $tmp310 });
    return $finallyReturn308;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn311;
    bool $tmp313 = self.value > p_other.value;
    $finallyReturn311 = ((panda$core$Bit) { $tmp313 });
    return $finallyReturn311;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn314;
    bool $tmp316 = ((uint64_t) self.value) > p_other.value;
    $finallyReturn314 = ((panda$core$Bit) { $tmp316 });
    return $finallyReturn314;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn317;
    bool $tmp319 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $finallyReturn317 = ((panda$core$Bit) { $tmp319 });
    return $finallyReturn317;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn320;
    bool $tmp322 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $finallyReturn320 = ((panda$core$Bit) { $tmp322 });
    return $finallyReturn320;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn323;
    bool $tmp325 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $finallyReturn323 = ((panda$core$Bit) { $tmp325 });
    return $finallyReturn323;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn326;
    bool $tmp328 = self.value >= ((uint32_t) p_other.value);
    $finallyReturn326 = ((panda$core$Bit) { $tmp328 });
    return $finallyReturn326;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn329;
    bool $tmp331 = self.value >= ((uint32_t) p_other.value);
    $finallyReturn329 = ((panda$core$Bit) { $tmp331 });
    return $finallyReturn329;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn332;
    bool $tmp334 = self.value >= p_other.value;
    $finallyReturn332 = ((panda$core$Bit) { $tmp334 });
    return $finallyReturn332;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn335;
    bool $tmp337 = ((uint64_t) self.value) >= p_other.value;
    $finallyReturn335 = ((panda$core$Bit) { $tmp337 });
    return $finallyReturn335;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn338;
    bool $tmp340 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $finallyReturn338 = ((panda$core$Bit) { $tmp340 });
    return $finallyReturn338;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn341;
    bool $tmp343 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $finallyReturn341 = ((panda$core$Bit) { $tmp343 });
    return $finallyReturn341;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn344;
    bool $tmp346 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $finallyReturn344 = ((panda$core$Bit) { $tmp346 });
    return $finallyReturn344;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn347;
    bool $tmp349 = self.value <= ((uint32_t) p_other.value);
    $finallyReturn347 = ((panda$core$Bit) { $tmp349 });
    return $finallyReturn347;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn350;
    bool $tmp352 = self.value <= ((uint32_t) p_other.value);
    $finallyReturn350 = ((panda$core$Bit) { $tmp352 });
    return $finallyReturn350;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn353;
    bool $tmp355 = self.value <= p_other.value;
    $finallyReturn353 = ((panda$core$Bit) { $tmp355 });
    return $finallyReturn353;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn356;
    bool $tmp358 = ((uint64_t) self.value) <= p_other.value;
    $finallyReturn356 = ((panda$core$Bit) { $tmp358 });
    return $finallyReturn356;
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn360;
    panda$core$Int64 $finallyReturn362;
    bool $tmp360 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp360 }).value) {
    {
        $finallyReturn360 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn360;
    }
    }
    $finallyReturn362 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn362;
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn365;
    panda$core$Int64 $finallyReturn367;
    bool $tmp365 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp365 }).value) {
    {
        $finallyReturn365 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn365;
    }
    }
    $finallyReturn367 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn367;
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn370;
    panda$core$Int64 $finallyReturn372;
    bool $tmp370 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp370 }).value) {
    {
        $finallyReturn370 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn370;
    }
    }
    $finallyReturn372 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn372;
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn375;
    panda$core$UInt32 $finallyReturn377;
    bool $tmp375 = self.value < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp375 }).value) {
    {
        $finallyReturn375 = ((panda$core$UInt32) { self.value });
        return $finallyReturn375;
    }
    }
    $finallyReturn377 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $finallyReturn377;
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn380;
    panda$core$UInt32 $finallyReturn382;
    bool $tmp380 = self.value < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp380 }).value) {
    {
        $finallyReturn380 = ((panda$core$UInt32) { self.value });
        return $finallyReturn380;
    }
    }
    $finallyReturn382 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $finallyReturn382;
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn385;
    panda$core$UInt32 $finallyReturn387;
    bool $tmp385 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp385 }).value) {
    {
        $finallyReturn385 = ((panda$core$UInt32) { self.value });
        return $finallyReturn385;
    }
    }
    $finallyReturn387 = ((panda$core$UInt32) { p_other.value });
    return $finallyReturn387;
}
panda$core$UInt64 panda$core$UInt32$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn390;
    panda$core$UInt64 $finallyReturn392;
    bool $tmp390 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp390 }).value) {
    {
        $finallyReturn390 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $finallyReturn390;
    }
    }
    $finallyReturn392 = ((panda$core$UInt64) { p_other.value });
    return $finallyReturn392;
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn395;
    panda$core$Int64 $finallyReturn397;
    bool $tmp395 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp395 }).value) {
    {
        $finallyReturn395 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn395;
    }
    }
    $finallyReturn397 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn397;
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn400;
    panda$core$Int64 $finallyReturn402;
    bool $tmp400 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp400 }).value) {
    {
        $finallyReturn400 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn400;
    }
    }
    $finallyReturn402 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn402;
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn405;
    panda$core$Int64 $finallyReturn407;
    bool $tmp405 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp405 }).value) {
    {
        $finallyReturn405 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn405;
    }
    }
    $finallyReturn407 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn407;
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn410;
    panda$core$UInt32 $finallyReturn412;
    bool $tmp410 = self.value > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp410 }).value) {
    {
        $finallyReturn410 = ((panda$core$UInt32) { self.value });
        return $finallyReturn410;
    }
    }
    $finallyReturn412 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $finallyReturn412;
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn415;
    panda$core$UInt32 $finallyReturn417;
    bool $tmp415 = self.value > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp415 }).value) {
    {
        $finallyReturn415 = ((panda$core$UInt32) { self.value });
        return $finallyReturn415;
    }
    }
    $finallyReturn417 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $finallyReturn417;
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn420;
    panda$core$UInt32 $finallyReturn422;
    bool $tmp420 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp420 }).value) {
    {
        $finallyReturn420 = ((panda$core$UInt32) { self.value });
        return $finallyReturn420;
    }
    }
    $finallyReturn422 = ((panda$core$UInt32) { p_other.value });
    return $finallyReturn422;
}
panda$core$UInt64 panda$core$UInt32$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn425;
    panda$core$UInt64 $finallyReturn427;
    bool $tmp425 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp425 }).value) {
    {
        $finallyReturn425 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $finallyReturn425;
    }
    }
    $finallyReturn427 = ((panda$core$UInt64) { p_other.value });
    return $finallyReturn427;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_index) {
    panda$core$Bit $finallyReturn429;
    panda$core$Int32 $tmp431 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp432 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp431);
    panda$core$Bit $tmp433 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp432, ((panda$core$Int32) { 0 }));
    $finallyReturn429 = $tmp433;
    return $finallyReturn429;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_index) {
    panda$core$Bit $finallyReturn434;
    panda$core$Int32 $tmp436 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp437 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp436);
    panda$core$Bit $tmp438 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp437, ((panda$core$Int32) { 0 }));
    $finallyReturn434 = $tmp438;
    return $finallyReturn434;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_index) {
    panda$core$Bit $finallyReturn439;
    panda$core$Int32 $tmp441 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp442 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp441);
    panda$core$Bit $tmp443 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp442, ((panda$core$Int32) { 0 }));
    $finallyReturn439 = $tmp443;
    return $finallyReturn439;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int64 p_index) {
    panda$core$Bit $finallyReturn444;
    panda$core$Int64 $tmp446 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp447 = panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp446);
    panda$core$Bit $tmp448 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp447, ((panda$core$Int64) { 0 }));
    $finallyReturn444 = $tmp448;
    return $finallyReturn444;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_index) {
    panda$core$Bit $finallyReturn449;
    panda$core$UInt32 $tmp451 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp452 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp451);
    panda$core$Bit $tmp453 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp452, ((panda$core$UInt32) { 0 }));
    $finallyReturn449 = $tmp453;
    return $finallyReturn449;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_index) {
    panda$core$Bit $finallyReturn454;
    panda$core$UInt32 $tmp456 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp457 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp456);
    panda$core$Bit $tmp458 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp457, ((panda$core$UInt32) { 0 }));
    $finallyReturn454 = $tmp458;
    return $finallyReturn454;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_index) {
    panda$core$Bit $finallyReturn459;
    panda$core$UInt32 $tmp461 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp462 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp461);
    panda$core$Bit $tmp463 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp462, ((panda$core$UInt32) { 0 }));
    $finallyReturn459 = $tmp463;
    return $finallyReturn459;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_index) {
    panda$core$Bit $finallyReturn464;
    panda$core$UInt64 $tmp466 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp467 = panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp466);
    panda$core$Bit $tmp468 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp467, ((panda$core$UInt64) { 0 }));
    $finallyReturn464 = $tmp468;
    return $finallyReturn464;
}
panda$core$Int64 panda$core$UInt32$hash$R$panda$core$Int64(panda$core$UInt32 self) {
    panda$core$Int64 $finallyReturn469;
    $finallyReturn469 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn469;
}
panda$core$UInt32$nullable panda$core$UInt32$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt32$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result472;
    panda$core$UInt32$nullable $finallyReturn473;
    panda$core$UInt32$nullable $finallyReturn475;
    panda$core$UInt64$nullable $tmp473 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result472 = $tmp473;
    if (((panda$core$Bit) { !result472.nonnull }).value) {
    {
        $finallyReturn473 = ((panda$core$UInt32$nullable) { .nonnull = false });
        return $finallyReturn473;
    }
    }
    panda$core$UInt32 $tmp477 = panda$core$UInt64$convert$R$panda$core$UInt32(((panda$core$UInt64) result472.value));
    $finallyReturn475 = ((panda$core$UInt32$nullable) { $tmp477, true });
    return $finallyReturn475;
}
panda$core$Int8 panda$core$UInt32$convert$R$panda$core$Int8(panda$core$UInt32 self) {
    panda$core$Int8 $finallyReturn478;
    $finallyReturn478 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn478;
}
panda$core$Int16 panda$core$UInt32$convert$R$panda$core$Int16(panda$core$UInt32 self) {
    panda$core$Int16 $finallyReturn480;
    $finallyReturn480 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn480;
}
panda$core$Int32 panda$core$UInt32$convert$R$panda$core$Int32(panda$core$UInt32 self) {
    panda$core$Int32 $finallyReturn482;
    $finallyReturn482 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn482;
}
panda$core$Int64 panda$core$UInt32$convert$R$panda$core$Int64(panda$core$UInt32 self) {
    panda$core$Int64 $finallyReturn484;
    $finallyReturn484 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn484;
}
panda$core$UInt8 panda$core$UInt32$convert$R$panda$core$UInt8(panda$core$UInt32 self) {
    panda$core$UInt8 $finallyReturn486;
    $finallyReturn486 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn486;
}
panda$core$UInt16 panda$core$UInt32$convert$R$panda$core$UInt16(panda$core$UInt32 self) {
    panda$core$UInt16 $finallyReturn488;
    $finallyReturn488 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn488;
}
panda$core$UInt64 panda$core$UInt32$convert$R$panda$core$UInt64(panda$core$UInt32 self) {
    panda$core$UInt64 $finallyReturn490;
    $finallyReturn490 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn490;
}
panda$core$Real32 panda$core$UInt32$convert$R$panda$core$Real32(panda$core$UInt32 self) {
    panda$core$Real32 $finallyReturn492;
    $finallyReturn492 = ((panda$core$Real32) { ((float) self.value) });
    return $finallyReturn492;
}
panda$core$Real64 panda$core$UInt32$convert$R$panda$core$Real64(panda$core$UInt32 self) {
    panda$core$Real64 $finallyReturn494;
    $finallyReturn494 = ((panda$core$Real64) { ((double) self.value) });
    return $finallyReturn494;
}
panda$core$String* panda$core$UInt32$convert$R$panda$core$String(panda$core$UInt32 self) {
    panda$core$Int64 max497;
    panda$core$Char8* chars498;
    panda$core$Int64 index499;
    panda$core$UInt32 value501;
    panda$core$Char8 $tmp505;
    panda$core$Char8 $tmp516;
    panda$core$Char8 $tmp524;
    panda$core$Int64 size525;
    panda$core$Range$LTpanda$core$Int64$GT $tmp527;
    panda$core$String* $finallyReturn547;
    panda$core$String* $tmp549;
    panda$core$String* $tmp550;
    max497 = ((panda$core$Int64) { 10 });
    chars498 = ((panda$core$Char8*) pandaZAlloc(max497.value * 1));
    panda$core$Int64 $tmp500 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max497, ((panda$core$Int64) { 1 }));
    index499 = $tmp500;
    value501 = self;
    panda$core$Bit $tmp502 = panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(value501, ((panda$core$UInt32) { 0 }));
    if ($tmp502.value) {
    {
        $l503:;
        {
            panda$core$UInt32 $tmp506 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(value501, ((panda$core$UInt32) { 10 }));
            panda$core$UInt32 $tmp507 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp506, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp508 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp507);
            panda$core$Char8$init$panda$core$UInt8(&$tmp505, $tmp508);
            chars498[index499.value] = $tmp505;
            panda$core$UInt32 $tmp509 = panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(value501, ((panda$core$UInt32) { 10 }));
            value501 = $tmp509;
            panda$core$Int64 $tmp510 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index499, ((panda$core$Int64) { 1 }));
            index499 = $tmp510;
        }
        panda$core$Bit $tmp512 = panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(value501, ((panda$core$UInt32) { 0 }));
        bool $tmp511 = $tmp512.value;
        if ($tmp511) goto $l503;
        $l504:;
        panda$core$Int64 $tmp513 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index499, ((panda$core$Int64) { 1 }));
        index499 = $tmp513;
    }
    }
    else {
    {
        $l514:;
        {
            panda$core$UInt32 $tmp517 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(value501, ((panda$core$UInt32) { 10 }));
            panda$core$UInt32 $tmp518 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp517);
            panda$core$UInt8 $tmp519 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp518);
            panda$core$Char8$init$panda$core$UInt8(&$tmp516, $tmp519);
            chars498[index499.value] = $tmp516;
            panda$core$UInt32 $tmp520 = panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(value501, ((panda$core$UInt32) { 10 }));
            value501 = $tmp520;
            panda$core$Int64 $tmp521 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index499, ((panda$core$Int64) { 1 }));
            index499 = $tmp521;
        }
        panda$core$Bit $tmp523 = panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(value501, ((panda$core$UInt32) { 0 }));
        bool $tmp522 = $tmp523.value;
        if ($tmp522) goto $l514;
        $l515:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp524, ((panda$core$UInt8) { 45 }));
        chars498[index499.value] = $tmp524;
    }
    }
    panda$core$Int64 $tmp526 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max497, index499);
    size525 = $tmp526;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp527, ((panda$core$Int64) { 0 }), size525, ((panda$core$Bit) { false }));
    int64_t $tmp529 = $tmp527.min.value;
    panda$core$Int64 i528 = { $tmp529 };
    int64_t $tmp531 = $tmp527.max.value;
    bool $tmp532 = $tmp527.inclusive.value;
    if ($tmp532) goto $l539; else goto $l540;
    $l539:;
    if ($tmp529 <= $tmp531) goto $l533; else goto $l535;
    $l540:;
    if ($tmp529 < $tmp531) goto $l533; else goto $l535;
    $l533:;
    {
        panda$core$Int64 $tmp541 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i528, index499);
        chars498[i528.value] = chars498[$tmp541.value];
    }
    $l536:;
    int64_t $tmp543 = $tmp531 - i528.value;
    if ($tmp532) goto $l544; else goto $l545;
    $l544:;
    if ((uint64_t) $tmp543 >= 1) goto $l542; else goto $l535;
    $l545:;
    if ((uint64_t) $tmp543 > 1) goto $l542; else goto $l535;
    $l542:;
    i528.value += 1;
    goto $l533;
    $l535:;
    panda$core$String* $tmp551 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp551, chars498, size525);
    $tmp550 = $tmp551;
    $tmp549 = $tmp550;
    $finallyReturn547 = $tmp549;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp549));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
    return $finallyReturn547;
}
panda$core$String* panda$core$UInt32$format$panda$core$String$R$panda$core$String(panda$core$UInt32 self, panda$core$String* p_fmt) {
    panda$core$String* $finallyReturn552;
    panda$core$String* $tmp554;
    panda$core$String* $tmp555;
    panda$core$UInt64 $tmp556 = panda$core$UInt32$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp557 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp556, ((panda$core$UInt64) { 4294967295 }), p_fmt);
    $tmp555 = $tmp557;
    $tmp554 = $tmp555;
    $finallyReturn552 = $tmp554;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
    return $finallyReturn552;
}
void panda$core$UInt32$cleanup(panda$core$UInt32 self) {
}

