#pragma once
#include "frost_c.h"
#include "PermutationIterator_types.h"
typedef struct frost$collections$ListView$PermutationIterator frost$collections$ListView$PermutationIterator;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* self, frost$collections$ListView* p_list);
frost$core$Bit frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PermutationIterator* self);
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* self);
void frost$collections$ListView$PermutationIterator$cleanup(frost$collections$ListView$PermutationIterator* self);

