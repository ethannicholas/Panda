#pragma once
#include "frost_c.h"
#include "EntryIterator_types.h"
typedef struct frost$collections$HashMap$EntryIterator frost$collections$HashMap$EntryIterator;
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Tuple2 frost$core$Tuple2;

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* self, frost$collections$HashMap* p_map);
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$EntryIterator* self);
frost$core$Tuple2* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(frost$collections$HashMap$EntryIterator* self);
void frost$collections$HashMap$EntryIterator$cleanup(frost$collections$HashMap$EntryIterator* self);

