#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$List panda$collections$List;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
#include "panda/core/Bit.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;

typedef struct org$pandalanguage$pandac$ClassDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$io$File* source;
    panda$collections$MapView* aliases;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    panda$core$Int64 classKind;
    panda$collections$Array* declaredSupers;
    org$pandalanguage$pandac$Type* rawSuper;
    panda$collections$Array* rawInterfaces;
    panda$collections$List* parameters;
    panda$collections$Array* fields;
    panda$collections$Array* methods;
    panda$collections$Array* classes;
    org$pandalanguage$pandac$ClassDecl* owner;
    org$pandalanguage$pandac$SymbolTable* symbolTable;
    panda$core$Bit symbolTableResolved;
    panda$core$Bit external;
    panda$collections$Array* virtualMethods;
    panda$collections$HashMap* classResolutionCache;
    panda$core$Bit resolved;
} org$pandalanguage$pandac$ClassDecl;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[6]; } org$pandalanguage$pandac$ClassDecl$class_type;
extern org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "panda/core/Int64.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$ClassDecl* self, panda$io$File* p_source, org$pandalanguage$pandac$Position p_position, panda$collections$MapView* p_aliases, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_kind, panda$core$String* p_name, panda$collections$ListView* p_declaredSupers, panda$collections$Array* p_parameters, org$pandalanguage$pandac$SymbolTable* p_parent);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl* self);
panda$core$Bit org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(org$pandalanguage$pandac$ClassDecl* self);
panda$core$String* org$pandalanguage$pandac$ClassDecl$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl* self);

#endif
