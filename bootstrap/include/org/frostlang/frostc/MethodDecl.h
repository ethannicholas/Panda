#pragma once
#include "frost_c.h"
#include "MethodDecl_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* self, org$frostlang$frostc$ClassDecl* p_owner, org$frostlang$frostc$Position p_position, frost$core$String* p_doccomment, org$frostlang$frostc$Annotations* p_annotations, org$frostlang$frostc$MethodDecl$Kind p_methodKind, frost$core$String* p_name, frost$collections$Array* p_genericParameters, frost$collections$Array* p_parameters, org$frostlang$frostc$Type* p_returnType, org$frostlang$frostc$FixedArray* p_body);
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* self);
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* self);
frost$core$Bit org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* self);
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* self, org$frostlang$frostc$MethodDecl* p_other);
frost$core$Int64 org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlang$frostc$MethodDecl* self);
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl* self);
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* self);
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* self);
frost$core$String* org$frostlang$frostc$MethodDecl$convert$R$frost$core$String(org$frostlang$frostc$MethodDecl* self);
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* self);
