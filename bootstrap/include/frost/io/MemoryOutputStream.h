#pragma once
#include "frost_c.h"
#include "MemoryOutputStream_types.h"
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$MemoryOutputStream$init(frost$io$MemoryOutputStream* self);
void frost$io$MemoryOutputStream$init$frost$core$Int64(frost$io$MemoryOutputStream* self, frost$core$Int64 p_capacity);
frost$core$Error* frost$io$MemoryOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$MemoryOutputStream* self, frost$core$UInt8 p_i);
frost$core$Error* frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$MemoryOutputStream* self, frost$core$UInt8* p_ptr, frost$core$Int64 p_count);
void frost$io$MemoryOutputStream$clear(frost$io$MemoryOutputStream* self);
frost$core$String* frost$io$MemoryOutputStream$convert$R$frost$core$String(frost$io$MemoryOutputStream* self);
frost$core$String* frost$io$MemoryOutputStream$finish$R$frost$core$String(frost$io$MemoryOutputStream* self);
void frost$io$MemoryOutputStream$cleanup(frost$io$MemoryOutputStream* self);

