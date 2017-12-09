#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"


org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C", 15, 1 };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C\x3E", 16, 1 };

void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    self->loopLabel = p_loopLabel;
    self->breakLabel = p_breakLabel;
    self->continueLabel = p_continueLabel;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp2 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1, self->loopLabel);
        panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2, &$s3);
        return $tmp4;
    }
    }
    else {
    {
        return &$s5;
    }
    }
}
