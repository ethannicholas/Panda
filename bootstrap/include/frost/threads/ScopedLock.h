#pragma once
#include "frost_c.h"
#include "ScopedLock_types.h"
typedef struct frost$threads$ScopedLock frost$threads$ScopedLock;
typedef struct frost$threads$Lock frost$threads$Lock;

void frost$threads$ScopedLock$init$frost$threads$Lock(frost$threads$ScopedLock* self, frost$threads$Lock* p_lock);
void frost$threads$ScopedLock$cleanup(frost$threads$ScopedLock* self);
