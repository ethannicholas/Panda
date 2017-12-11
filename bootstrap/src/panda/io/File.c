#include "panda/io/File.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Int64.h"
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$absolutePath$R$panda$core$String, panda$io$File$absolute$R$panda$io$File, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn11)(panda$io$InputStream*);
typedef panda$core$String* (*$fn58)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path) {
    self->path = p_path;
}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path) {
    panda$core$Bit $tmp2 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s1);
    if ($tmp2.value) {
    {
        panda$io$File* $tmp3 = (panda$io$File*) malloc(24);
        $tmp3->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp3->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp3, p_path);
        return $tmp3;
    }
    }
    panda$io$File* $tmp5 = (panda$io$File*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp5->refCount.value = 1;
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s7);
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, p_path);
    panda$io$File$init$panda$core$String($tmp5, $tmp9);
    return $tmp5;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$io$InputStream* $tmp10 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$collections$Iterator* $tmp12 = (($fn11) $tmp10->$class->vtable[12])($tmp10);
    return $tmp12;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $tmp13 = (panda$io$File*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp13->refCount.value = 1;
    panda$core$String* $tmp15 = panda$io$File$absolutePath$R$panda$core$String(self);
    panda$io$File$init$panda$core$String($tmp13, $tmp15);
    return $tmp13;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String$Index$nullable index24;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp29;
    panda$core$Bit $tmp17 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s16);
    if ($tmp17.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp19 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s18);
    if ($tmp19.value) {
    {
        panda$io$File* $tmp20 = (panda$io$File*) malloc(24);
        $tmp20->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp20->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp20, &$s22);
        panda$io$File* $tmp23 = panda$io$File$parent$R$panda$io$File$Q($tmp20);
        return $tmp23;
    }
    }
    panda$core$String$Index$nullable $tmp26 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s25);
    index24 = $tmp26;
    if (((panda$core$Bit) { index24.nonnull }).value) {
    {
        panda$io$File* $tmp27 = (panda$io$File*) malloc(24);
        $tmp27->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp27->refCount.value = 1;
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp29, ((panda$core$String$Index$nullable) { .nonnull = false }), index24, ((panda$core$Bit) { false }));
        panda$core$String* $tmp30 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp29);
        panda$io$File$init$panda$core$String($tmp27, $tmp30);
        return $tmp27;
    }
    }
    else {
    {
        panda$io$File* $tmp31 = panda$io$File$absolute$R$panda$io$File(self);
        panda$io$File* $tmp32 = panda$io$File$parent$R$panda$io$File$Q($tmp31);
        return $tmp32;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index33;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp36;
    panda$core$String$Index$nullable $tmp35 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s34);
    index33 = $tmp35;
    if (((panda$core$Bit) { index33.nonnull }).value) {
    {
        panda$core$String$Index $tmp37 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index33.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp36, ((panda$core$String$Index$nullable) { $tmp37, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp38 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp36);
        return $tmp38;
    }
    }
    else {
    {
        return self->path;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result39;
    panda$core$String$Index$nullable index41;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp44;
    panda$core$String* $tmp40 = panda$io$File$name$R$panda$core$String(self);
    result39 = $tmp40;
    panda$core$String$Index$nullable $tmp43 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result39, &$s42);
    index41 = $tmp43;
    if (((panda$core$Bit) { !index41.nonnull }).value) {
    {
        return result39;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp44, ((panda$core$String$Index$nullable) { .nonnull = false }), index41, ((panda$core$Bit) { false }));
    panda$core$String* $tmp45 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result39, $tmp44);
    return $tmp45;
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $tmp46 = panda$io$File$parent$R$panda$io$File$Q(self);
    panda$core$String* $tmp47 = panda$io$File$simpleName$R$panda$core$String(self);
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, p_ext);
    panda$io$File* $tmp49 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp46, $tmp48);
    return $tmp49;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p50;
    panda$core$Bit $tmp54;
    panda$io$File* $tmp51 = panda$io$File$parent$R$panda$io$File$Q(self);
    p50 = $tmp51;
    bool $tmp52 = ((panda$core$Bit) { p50 != NULL }).value;
    if (!$tmp52) goto $l53;
    panda$io$File$exists$R$panda$core$Bit(&$tmp54, p50);
    panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp54);
    $tmp52 = $tmp55.value;
    $l53:;
    panda$core$Bit $tmp56 = { $tmp52 };
    if ($tmp56.value) {
    {
        panda$io$File$createDirectories(p50);
    }
    }
    panda$io$File$createDirectory(self);
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$io$InputStream* $tmp57 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$core$String* $tmp59 = (($fn58) $tmp57->$class->vtable[6])($tmp57);
    return $tmp59;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp60 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp60;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp61 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp61;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $tmp62 = panda$core$String$hash$R$panda$core$Int64(self->path);
    return $tmp62;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    return self->path;
}

