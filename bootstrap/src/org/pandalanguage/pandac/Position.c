#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim(org$pandalanguage$pandac$Position$wrapper* self) {
    return org$pandalanguage$pandac$Position$convert$R$panda$core$String(self->value);
}

org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Position$init(org$pandalanguage$pandac$Position* self) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
}
void org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    panda$core$Bit $tmp2 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_line, ((panda$core$Int64) { 0 }));
    bool $tmp1 = $tmp2.value;
    if (!$tmp1) goto $l3;
    panda$core$Bit $tmp4 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_column, ((panda$core$Int64) { 0 }));
    $tmp1 = $tmp4.value;
    $l3:;
    panda$core$Bit $tmp5 = { $tmp1 };
    PANDA_ASSERT($tmp5.value);
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self) {
    panda$core$String* $tmp6 = panda$core$Int64$convert$R$panda$core$String(self.line);
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6, &$s7);
    panda$core$Int64$wrapper* $tmp9;
    $tmp9 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp9->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp9->refCount = 1;
    $tmp9->value = self.column;
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp8, ((panda$core$Object*) $tmp9));
    panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s11);
    return $tmp12;
}

