#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/Variable/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Variable$Kind$cleanup(org$frostlang$frostc$Variable$Kind self);
org$frostlang$frostc$Variable$Kind org$frostlang$frostc$Variable$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$Variable$Kind$$EQ$org$frostlang$frostc$Variable$Kind$R$frost$core$Bit(org$frostlang$frostc$Variable$Kind self, org$frostlang$frostc$Variable$Kind p_other);
frost$core$Int org$frostlang$frostc$Variable$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Variable$Kind self);
frost$core$String* org$frostlang$frostc$Variable$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Variable$Kind self);

