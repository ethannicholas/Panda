#include "panda/core/String/UTF8List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/String/UTF8Iterator.h"
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim(panda$core$String$UTF8List* self) {
    panda$collections$Iterator* result = panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(self);
    return result;
}
panda$core$Object* panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim(panda$core$String$UTF8List* self, panda$core$Int64 p0) {
    panda$core$Char8 result = panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(self, p0);
    panda$core$Char8$wrapper* $tmp1;
    $tmp1 = (panda$core$Char8$wrapper*) pandaAlloc(13);
    $tmp1->cl = (panda$core$Class*) &panda$core$Char8$wrapperclass;
    $tmp1->refCount = 1;
    $tmp1->value = result;
    return ((panda$core$Object*) $tmp1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$String$UTF8List$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$CollectionView, { panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$UTF8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$Iterable, { panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim} };

panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8List$_panda$collections$ListView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8$shim, panda$core$String$UTF8List$get_count$R$panda$core$Int64, panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT$shim} };



void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str) {
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_str));
        self->str = ((panda$core$String*) $tmp2);
    }
}
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index) {
    return self->str->data[p_index.value];
}
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self) {
    return self->str->_length;
}
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self) {
    panda$core$String$UTF8Iterator* $tmp3 = (panda$core$String$UTF8Iterator*) pandaAlloc(32);
    $tmp3->$class = (panda$core$Class*) &panda$core$String$UTF8Iterator$class;
    $tmp3->refCount.value = 1;
    panda$core$String$UTF8Iterator$init$panda$core$String($tmp3, self->str);
    return ((panda$collections$Iterator*) $tmp3);
}

