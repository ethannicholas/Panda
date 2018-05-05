#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$json$JSON {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[8];
} panda$json$JSON;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[15]; } panda$json$JSON$class_type;
extern panda$json$JSON$class_type panda$json$JSON$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$json$JSON panda$json$JSON;
#include "panda/core/Int64.h"
#include "panda/core/Real64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$json$JSON$PathKey panda$json$JSON$PathKey;
#include "panda/core/String/Index.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$collections$MapView panda$collections$MapView;

void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0);
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv);
panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start);
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self);
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self);
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self);
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self);
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self);
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self);
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self);
void panda$json$JSON$cleanup(panda$json$JSON* self);

#endif
