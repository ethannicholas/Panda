#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$SymbolTable {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashMap* symbols;
    frost$core$Weak* compiler;
    frost$collections$HashMap* merged;
    frost$collections$Array* parents;
} org$frostlang$frostc$SymbolTable;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } org$frostlang$frostc$SymbolTable$class_type;
extern org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class;

