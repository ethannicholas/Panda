#include "org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Equatable.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class_type org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String} };

typedef panda$core$Object* (*$fn13)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn19)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn20)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn37)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn39)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$String* (*$fn44)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn49)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn85)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 55, 280434186264950556, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, org$pandalanguage$pandac$pandadoc$Markdown* p_markdown) {
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp2;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp3;
    self->markdown = NULL;
    {
        $tmp2 = self->markdown;
        $tmp3 = p_markdown;
        self->markdown = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$collections$ListView* p_groups) {
    panda$core$String* codeBlock7 = NULL;
    panda$core$String* $tmp8;
    panda$core$Object* $tmp9;
    panda$core$Int64 $tmp10;
    panda$core$MutableString* ed15 = NULL;
    panda$core$MutableString* $tmp16;
    panda$core$MutableString* $tmp17;
    panda$core$RegularExpression* $tmp21;
    panda$core$RegularExpression* $tmp25;
    panda$core$String* text29 = NULL;
    panda$core$String* $tmp30;
    panda$core$String* $tmp31;
    panda$core$String* out33 = NULL;
    panda$core$String* firstLine34 = NULL;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $returnValue51;
    panda$core$String* $tmp52;
    int $tmp6;
    {
        panda$core$Int64$init$builtin_int64(&$tmp10, 1);
        ITable* $tmp11 = p_groups->$class->itable;
        while ($tmp11->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp11 = $tmp11->next;
        }
        $fn13 $tmp12 = $tmp11->methods[0];
        panda$core$Object* $tmp14 = $tmp12(p_groups, $tmp10);
        $tmp9 = $tmp14;
        $tmp8 = ((panda$core$String*) $tmp9);
        codeBlock7 = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object($tmp9);
        panda$core$MutableString* $tmp18 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp18, codeBlock7);
        $tmp17 = $tmp18;
        $tmp16 = $tmp17;
        ed15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
        org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(ed15);
        (($fn19) self->markdown->$class->vtable[18])(self->markdown, ed15);
        (($fn20) self->markdown->$class->vtable[14])(self->markdown, ed15);
        panda$core$RegularExpression* $tmp22 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp22, &$s23);
        $tmp21 = $tmp22;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(ed15, $tmp21, &$s24);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$RegularExpression* $tmp26 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp26, &$s27);
        $tmp25 = $tmp26;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(ed15, $tmp25, &$s28);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$String* $tmp32 = panda$core$MutableString$convert$R$panda$core$String(ed15);
        $tmp31 = $tmp32;
        $tmp30 = $tmp31;
        text29 = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        memset(&out33, 0, sizeof(out33));
        panda$core$String* $tmp38 = (($fn37) self->$class->vtable[3])(self, text29);
        $tmp36 = $tmp38;
        $tmp35 = $tmp36;
        firstLine34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Bit $tmp40 = (($fn39) self->$class->vtable[4])(self, firstLine34);
        if ($tmp40.value) {
        {
            {
                $tmp41 = out33;
                panda$core$String* $tmp45 = (($fn44) self->$class->vtable[5])(self, firstLine34, text29);
                $tmp43 = $tmp45;
                $tmp42 = $tmp43;
                out33 = $tmp42;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
            }
        }
        }
        else {
        {
            {
                $tmp46 = out33;
                panda$core$String* $tmp50 = (($fn49) self->$class->vtable[6])(self, text29);
                $tmp48 = $tmp50;
                $tmp47 = $tmp48;
                out33 = $tmp47;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            }
        }
        }
        $tmp52 = out33;
        $returnValue51 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        $tmp6 = 0;
        goto $l4;
        $l53:;
        return $returnValue51;
    }
    $l4:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstLine34));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out33));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ed15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) codeBlock7));
    codeBlock7 = NULL;
    ed15 = NULL;
    text29 = NULL;
    firstLine34 = NULL;
    switch ($tmp6) {
        case 0: goto $l53;
    }
    $l55:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_text) {
    panda$core$String* $returnValue56;
    panda$core$String* $tmp57;
    panda$core$Object* $tmp58;
    panda$collections$Array* $tmp59;
    panda$core$Int64 $tmp62;
    panda$collections$Array* $tmp61 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_text, &$s60);
    $tmp59 = $tmp61;
    panda$core$Int64$init$builtin_int64(&$tmp62, 0);
    panda$core$Object* $tmp63 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp59, $tmp62);
    $tmp58 = $tmp63;
    $tmp57 = ((panda$core$String*) $tmp58);
    $returnValue56 = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object($tmp58);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    return $returnValue56;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_line) {
    panda$core$String* lang68 = NULL;
    panda$core$String* $tmp69;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp76;
    panda$core$Bit $returnValue81;
    int $tmp67;
    {
        $tmp69 = &$s70;
        lang68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Bit $tmp72 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_line, &$s71);
        if ($tmp72.value) {
        {
            {
                $tmp73 = lang68;
                panda$core$String* $tmp79 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_line, &$s77, &$s78);
                $tmp76 = $tmp79;
                panda$core$String* $tmp80 = panda$core$String$trim$R$panda$core$String($tmp76);
                $tmp75 = $tmp80;
                $tmp74 = $tmp75;
                lang68 = $tmp74;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
            }
        }
        }
        ITable* $tmp83 = ((panda$core$Equatable*) lang68)->$class->itable;
        while ($tmp83->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp83 = $tmp83->next;
        }
        $fn85 $tmp84 = $tmp83->methods[1];
        panda$core$Bit $tmp86 = $tmp84(((panda$core$Equatable*) lang68), ((panda$core$Equatable*) &$s82));
        $returnValue81 = $tmp86;
        $tmp67 = 0;
        goto $l65;
        $l87:;
        return $returnValue81;
    }
    $l65:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lang68));
    lang68 = NULL;
    switch ($tmp67) {
        case 0: goto $l87;
    }
    $l89:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_firstLine, panda$core$String* p_text) {
    panda$core$String* lang93 = NULL;
    panda$core$String* $tmp94;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$String* block101 = NULL;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $returnValue109;
    panda$core$String* $tmp110;
    panda$core$String* $tmp111;
    panda$core$String* $tmp112;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    int $tmp92;
    {
        panda$core$String* $tmp99 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_firstLine, &$s97, &$s98);
        $tmp96 = $tmp99;
        panda$core$String* $tmp100 = panda$core$String$trim$R$panda$core$String($tmp96);
        $tmp95 = $tmp100;
        $tmp94 = $tmp95;
        lang93 = $tmp94;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_firstLine, &$s105);
        $tmp104 = $tmp106;
        panda$core$String* $tmp108 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_text, $tmp104, &$s107);
        $tmp103 = $tmp108;
        $tmp102 = $tmp103;
        block101 = $tmp102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s115, lang93);
        $tmp114 = $tmp116;
        panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s117);
        $tmp113 = $tmp118;
        panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, block101);
        $tmp112 = $tmp119;
        panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s120);
        $tmp111 = $tmp121;
        $tmp110 = $tmp111;
        $returnValue109 = $tmp110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        $tmp92 = 0;
        goto $l90;
        $l122:;
        return $returnValue109;
    }
    $l90:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lang93));
    lang93 = NULL;
    block101 = NULL;
    switch ($tmp92) {
        case 0: goto $l122;
    }
    $l124:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_text) {
    panda$core$String* $returnValue125;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, p_text);
    $tmp128 = $tmp130;
    panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s131);
    $tmp127 = $tmp132;
    $tmp126 = $tmp127;
    $returnValue125 = $tmp126;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    return $returnValue125;
}
void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self) {
    int $tmp136;
    {
    }
    $tmp136 = -1;
    goto $l134;
    $l134:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp136) {
        case -1: goto $l137;
    }
    $l137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->markdown));
}

