#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
#include "panda/core/Bit.h"

typedef struct org$pandalanguage$pandac$MethodDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    org$pandalanguage$pandac$ClassDecl* owner;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    panda$core$Int64 methodKind;
    panda$collections$Array* parameters;
    org$pandalanguage$pandac$Type* returnType;
    org$pandalanguage$pandac$ASTNode* body;
    org$pandalanguage$pandac$IRNode* compiledBody;
    panda$core$Bit resolved;
} org$pandalanguage$pandac$MethodDecl;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[8]; } org$pandalanguage$pandac$MethodDecl$class_type;
extern org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "panda/core/Int64.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, org$pandalanguage$pandac$ASTNode* p_body);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other);
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);

#endif