#pragma once
#include "frost_c.h"
#include "Block_types.h"
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Block* self, org$frostlang$frostc$IR$Block$ID p_id);
frost$core$String* org$frostlang$frostc$IR$Block$convert$R$frost$core$String(org$frostlang$frostc$IR$Block* self);
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* self);
