#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$collections$ImmutableHashMap$Entry$class_type panda$collections$ImmutableHashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$Entry$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 40, -6387519024651096206, NULL };

void panda$collections$ImmutableHashMap$Entry$init$panda$collections$ImmutableHashMap$Entry$K$panda$collections$ImmutableHashMap$Entry$V(panda$collections$ImmutableHashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    self->key = NULL;
    self->value = NULL;
    self->next = NULL;
    {
        panda$collections$Key* $tmp2 = self->key;
        panda$collections$Key* $tmp3 = p_key;
        self->key = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        panda$core$Object* $tmp4 = self->value;
        panda$core$Object* $tmp5 = p_value;
        self->value = $tmp5;
        panda$core$Panda$ref$panda$core$Object($tmp5);
        panda$core$Panda$unref$panda$core$Object($tmp4);
    }
}
void panda$collections$ImmutableHashMap$Entry$cleanup(panda$collections$ImmutableHashMap$Entry* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->key));
    panda$core$Panda$unref$panda$core$Object(self->value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->next));
}
