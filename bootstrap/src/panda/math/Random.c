#include "panda/math/Random.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/XorShift128Plus.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Real32.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$Random$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$Random$class_type panda$math$Random$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$Random$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

typedef panda$core$Int64 (*$fn12)(panda$math$Random*);
typedef panda$core$Int64 (*$fn20)(panda$math$Random*);
typedef panda$core$Int64 (*$fn47)(panda$math$Random*);
typedef panda$core$Int32 (*$fn70)(panda$math$Random*);
typedef panda$core$Int64 (*$fn97)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 91, -8241417805943957811, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 4829225525059687821, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, 219884244517965983, NULL };

panda$math$Random* panda$math$Random$default$R$panda$math$Random() {
    panda$math$Random* $returnValue2;
    panda$math$Random* $tmp3;
    panda$math$XorShift128Plus* $tmp4;
    panda$core$Int64 $tmp6;
    panda$math$XorShift128Plus* $tmp5 = (panda$math$XorShift128Plus*) pandaObjectAlloc(32, (panda$core$Class*) &panda$math$XorShift128Plus$class);
    int64_t $tmp7 = panda$core$Panda$currentTime$R$builtin_int64();
    panda$core$Int64$init$builtin_int64(&$tmp6, $tmp7);
    panda$math$XorShift128Plus$init$panda$core$Int64($tmp5, $tmp6);
    $tmp4 = $tmp5;
    $tmp3 = ((panda$math$Random*) $tmp4);
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* self) {
    panda$core$Bit $returnValue9;
    panda$core$Int64 $tmp14;
    ITable* $tmp10 = self->$class->itable;
    while ($tmp10->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp10 = $tmp10->next;
    }
    $fn12 $tmp11 = $tmp10->methods[2];
    panda$core$Int64 $tmp13 = $tmp11(self);
    panda$core$Int64$init$builtin_int64(&$tmp14, 0);
    panda$core$Bit $tmp15 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp13, $tmp14);
    $returnValue9 = $tmp15;
    return $returnValue9;
}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* self) {
    panda$core$Int32 $returnValue17;
    ITable* $tmp18 = self->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[2];
    panda$core$Int64 $tmp21 = $tmp19(self);
    panda$core$Int32 $tmp22 = panda$core$Int64$convert$R$panda$core$Int32($tmp21);
    $returnValue17 = $tmp22;
    return $returnValue17;
}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n) {
    panda$core$Int64 $tmp27;
    panda$core$Int64 $tmp33;
    panda$core$Int64 $returnValue35;
    panda$core$Int64 $tmp36;
    panda$core$Int64 min39;
    panda$core$Int64 x44;
    panda$core$Int64 $tmp55;
    int $tmp26;
    {
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Bit $tmp28 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_n, $tmp27);
        if ($tmp28.value) goto $l29; else goto $l30;
        $l30:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s31, (panda$core$Int64) { 50 }, &$s32);
        abort();
        $l29:;
        panda$core$Int64$init$builtin_int64(&$tmp33, 1);
        panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, $tmp33);
        if ($tmp34.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp36, 0);
            $returnValue35 = $tmp36;
            $tmp26 = 0;
            goto $l24;
            $l37:;
            return $returnValue35;
        }
        }
        panda$core$Int64 $tmp40 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
        panda$core$Int64 $tmp41 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp40, p_n);
        min39 = $tmp41;
        $l42:;
        while (true) {
        {
            ITable* $tmp45 = self->$class->itable;
            while ($tmp45->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp45 = $tmp45->next;
            }
            $fn47 $tmp46 = $tmp45->methods[2];
            panda$core$Int64 $tmp48 = $tmp46(self);
            x44 = $tmp48;
            panda$core$Bit $tmp49 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x44, min39);
            if ($tmp49.value) {
            {
                panda$core$Int64 $tmp50 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x44, p_n);
                $returnValue35 = $tmp50;
                $tmp26 = 1;
                goto $l24;
                $l51:;
                return $returnValue35;
            }
            }
        }
        }
        $l43:;
    }
    $tmp26 = -1;
    goto $l24;
    $l24:;
    panda$core$Int64$init$builtin_int64(&$tmp55, 0);
    panda$core$Bit $tmp56 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue35, $tmp55);
    bool $tmp54 = $tmp56.value;
    if (!$tmp54) goto $l57;
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($returnValue35, p_n);
    $tmp54 = $tmp58.value;
    $l57:;
    panda$core$Bit $tmp59 = { $tmp54 };
    if ($tmp59.value) goto $l60; else goto $l61;
    $l61:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 50 }, &$s63);
    abort();
    $l60:;
    switch ($tmp26) {
        case -1: goto $l53;
        case 0: goto $l37;
        case 1: goto $l51;
    }
    $l53:;
    abort();
}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self) {
    panda$core$Real32 $returnValue67;
    panda$core$UInt32 $tmp73;
    panda$core$UInt32 $tmp75;
    panda$core$Real32 $tmp81;
    panda$core$Real32 $tmp84;
    int $tmp66;
    {
        ITable* $tmp68 = self->$class->itable;
        while ($tmp68->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp68 = $tmp68->next;
        }
        $fn70 $tmp69 = $tmp68->methods[1];
        panda$core$Int32 $tmp71 = $tmp69(self);
        panda$core$UInt32 $tmp72 = panda$core$Int32$convert$R$panda$core$UInt32($tmp71);
        panda$core$UInt32$init$builtin_uint32(&$tmp73, 8);
        panda$core$UInt32 $tmp74 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp72, $tmp73);
        panda$core$UInt32$init$builtin_uint32(&$tmp75, 16777216);
        panda$core$Real32 $tmp76 = panda$core$UInt32$$DIV$panda$core$UInt32$R$panda$core$Real32($tmp74, $tmp75);
        $returnValue67 = $tmp76;
        $tmp66 = 0;
        goto $l64;
        $l77:;
        return $returnValue67;
    }
    $l64:;
    panda$core$Real32$init$builtin_float32(&$tmp81, 0.0);
    panda$core$Bit $tmp82 = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit($returnValue67, $tmp81);
    bool $tmp80 = $tmp82.value;
    if (!$tmp80) goto $l83;
    panda$core$Real32$init$builtin_float32(&$tmp84, 1.0);
    panda$core$Bit $tmp85 = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit($returnValue67, $tmp84);
    $tmp80 = $tmp85.value;
    $l83:;
    panda$core$Bit $tmp86 = { $tmp80 };
    if ($tmp86.value) goto $l87; else goto $l88;
    $l88:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s89, (panda$core$Int64) { 70 }, &$s90);
    abort();
    $l87:;
    switch ($tmp66) {
        case 0: goto $l77;
    }
    $l79:;
    abort();
}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self) {
    panda$core$Real64 $returnValue94;
    panda$core$UInt64 $tmp100;
    panda$core$UInt64 $tmp102;
    panda$core$Real64 $tmp108;
    panda$core$Real64 $tmp111;
    int $tmp93;
    {
        ITable* $tmp95 = self->$class->itable;
        while ($tmp95->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp95 = $tmp95->next;
        }
        $fn97 $tmp96 = $tmp95->methods[2];
        panda$core$Int64 $tmp98 = $tmp96(self);
        panda$core$UInt64 $tmp99 = panda$core$Int64$convert$R$panda$core$UInt64($tmp98);
        panda$core$UInt64$init$builtin_uint64(&$tmp100, 11);
        panda$core$UInt64 $tmp101 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp99, $tmp100);
        panda$core$UInt64$init$builtin_uint64(&$tmp102, 9007199254740992);
        panda$core$Real64 $tmp103 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp101, $tmp102);
        $returnValue94 = $tmp103;
        $tmp93 = 0;
        goto $l91;
        $l104:;
        return $returnValue94;
    }
    $l91:;
    panda$core$Real64$init$builtin_float64(&$tmp108, 0.0);
    panda$core$Bit $tmp109 = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit($returnValue94, $tmp108);
    bool $tmp107 = $tmp109.value;
    if (!$tmp107) goto $l110;
    panda$core$Real64$init$builtin_float64(&$tmp111, 1.0);
    panda$core$Bit $tmp112 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit($returnValue94, $tmp111);
    $tmp107 = $tmp112.value;
    $l110:;
    panda$core$Bit $tmp113 = { $tmp107 };
    if ($tmp113.value) goto $l114; else goto $l115;
    $l115:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s116, (panda$core$Int64) { 80 }, &$s117);
    abort();
    $l114:;
    switch ($tmp93) {
        case 0: goto $l104;
    }
    $l106:;
    abort();
}





