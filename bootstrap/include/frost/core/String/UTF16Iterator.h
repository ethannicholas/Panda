#pragma once
#include "frost_c.h"
#include "UTF16Iterator_types.h"
typedef struct frost$core$String$UTF16Iterator frost$core$String$UTF16Iterator;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "frost/core/Char16_types.h"

void frost$core$String$UTF16Iterator$init$frost$core$String(frost$core$String$UTF16Iterator* self, frost$core$String* p_str);
frost$core$Bit frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF16Iterator* self);
frost$core$Char16 frost$core$String$UTF16Iterator$next$R$frost$core$Char16(frost$core$String$UTF16Iterator* self);
void frost$core$String$UTF16Iterator$cleanup(frost$core$String$UTF16Iterator* self);
