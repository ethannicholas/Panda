#include "org/pandalanguage/pandac/Compiler/AutoAtPreFlag.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class_type org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoAtPreFlag$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x41\x74\x50\x72\x65\x46\x6c\x61\x67", 47, -8242666560216288626, NULL };

void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    org$pandalanguage$pandac$Compiler* $tmp2;
    org$pandalanguage$pandac$Compiler* $tmp3;
    self->compiler = NULL;
    {
        $tmp2 = self->compiler;
        $tmp3 = p_compiler;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    p_compiler->inAtPre = ((panda$core$Bit) { true });
}
void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$cleanup(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* self) {
    int $tmp6;
    {
        PANDA_ASSERT(self->compiler->inAtPre.value);
        self->compiler->inAtPre = ((panda$core$Bit) { false });
    }
    $tmp6 = -1;
    goto $l4;
    $l4:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp6) {
        case -1: goto $l7;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}
