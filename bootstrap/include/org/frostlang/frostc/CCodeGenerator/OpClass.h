#pragma once
#include "frost_c.h"
#include "OpClass_types.h"
#include "org/frostlang/frostc/CCodeGenerator/OpClass_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CCodeGenerator$OpClass$cleanup(org$frostlang$frostc$CCodeGenerator$OpClass self);
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$CCodeGenerator$OpClass$$EQ$org$frostlang$frostc$CCodeGenerator$OpClass$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator$OpClass self, org$frostlang$frostc$CCodeGenerator$OpClass p_other);
frost$core$Int org$frostlang$frostc$CCodeGenerator$OpClass$get_hash$R$frost$core$Int(org$frostlang$frostc$CCodeGenerator$OpClass self);
frost$core$String* org$frostlang$frostc$CCodeGenerator$OpClass$get_asString$R$frost$core$String(org$frostlang$frostc$CCodeGenerator$OpClass self);

