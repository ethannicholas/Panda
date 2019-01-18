#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$io$MemoryOutputStream frost$io$MemoryOutputStream;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

typedef struct org$frostlang$frostc$LLVMCodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$OutputStream* physicalOut;
    frost$io$OutputStream* out;
    frost$core$Weak* compiler;
    frost$io$MemoryOutputStream* declarations;
    frost$io$MemoryOutputStream* types;
    frost$io$MemoryOutputStream* methods;
    frost$io$MemoryOutputStream* methodHeader;
    frost$io$MemoryOutputStream* shims;
    frost$io$MemoryOutputStream* strings;
    frost$io$MemoryOutputStream* metadata;
    frost$collections$HashSet* declared;
    frost$collections$HashSet* writtenTypes;
    frost$collections$HashSet* writtenWrappers;
    frost$collections$HashMap* classConstants;
    frost$core$Int64 varCount;
    frost$core$Int64 labelCount;
    frost$core$Int64 metadataCount;
    frost$core$String* currentFileMetadata;
    frost$core$String* currentMethodMetadata;
    org$frostlang$frostc$Position lastDebugPosition;
    frost$core$String* currentBlock;
    frost$collections$IdentityMap* sizes;
    frost$collections$IdentityMap* choiceDataSizes;
    frost$collections$IdentityMap* methodShims;
    frost$collections$HashMap* refs;
    org$frostlang$frostc$IR* ir;
} org$frostlang$frostc$LLVMCodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[84]; } org$frostlang$frostc$LLVMCodeGenerator$class_type;
extern org$frostlang$frostc$LLVMCodeGenerator$class_type org$frostlang$frostc$LLVMCodeGenerator$class;
