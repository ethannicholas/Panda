#pragma once
#include "panda_c.h"
#include "Annotations_types.h"
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self);
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags);
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags, panda$collections$ListView* p_expressions);
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isUnsafeImmutable$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$Bit org$pandalanguage$pandac$Annotations$isDefault$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self);
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self);
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self);

