#pragma once
#include "frost_c.h"
#include "LLVMCodeGenerator_types.h"
typedef struct org$frostlang$frostc$LLVMCodeGenerator org$frostlang$frostc$LLVMCodeGenerator;
typedef struct frost$core$String frost$core$String;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$LLVMCodeGenerator$MethodShim org$frostlang$frostc$LLVMCodeGenerator$MethodShim;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Pair org$frostlang$frostc$Pair;
typedef struct org$frostlang$frostc$LLVMCodeGenerator$ClassConstant org$frostlang$frostc$LLVMCodeGenerator$ClassConstant;
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
#include "org/frostlang/frostc/LLVMCodeGenerator/OpClass_types.h"
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Real64_types.h"
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

void org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(org$frostlang$frostc$LLVMCodeGenerator* self, frost$core$String* p_triple, frost$io$OutputStream* p_out);
void org$frostlang$frostc$LLVMCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$LLVMCodeGenerator$finish(org$frostlang$frostc$LLVMCodeGenerator* self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$nextMetadata$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self);
void org$frostlang$frostc$LLVMCodeGenerator$createBlock$frost$core$String$frost$io$OutputStream(org$frostlang$frostc$LLVMCodeGenerator* self, frost$core$String* p_label, frost$io$OutputStream* p_out);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
void org$frostlang$frostc$LLVMCodeGenerator$writeWrapperType$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$llvmType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$llvmMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t, org$frostlang$frostc$Type* p_selfType);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$LLVMCodeGenerator$MethodShim* org$frostlang$frostc$LLVMCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$LLVMCodeGenerator$MethodShim(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_raw, org$frostlang$frostc$Type* p_effective);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Pair* org$frostlang$frostc$LLVMCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Pair$LTfrost$core$String$Cfrost$core$String$GT(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$LLVMCodeGenerator$ClassConstant* org$frostlang$frostc$LLVMCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$LLVMCodeGenerator$ClassConstant(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
org$frostlang$frostc$LLVMCodeGenerator$ClassConstant* org$frostlang$frostc$LLVMCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$LLVMCodeGenerator$ClassConstant(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Variable* p_v);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$FieldDecl* p_f);
org$frostlang$frostc$LLVMCodeGenerator$OpClass org$frostlang$frostc$LLVMCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$LLVMCodeGenerator$OpClass(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$wrapValue$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$OutputStream$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$OutputStream* p_out);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$unwrapValue$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$OutputStream$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$OutputStream* p_out);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$toNullableValue$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$OutputStream$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$OutputStream* p_out);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$toNonNullableValue$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$OutputStream$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, frost$core$String* p_value, org$frostlang$frostc$Type* p_srcType, org$frostlang$frostc$Type* p_dstType, frost$io$OutputStream* p_out);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getCastReference$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, frost$core$String* p_value, org$frostlang$frostc$Type* p_src, org$frostlang$frostc$Type* p_target);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t, frost$core$Real64 p_r64);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, frost$core$String* p_s);
frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$haveSelfValuePointer$R$frost$core$Bit(org$frostlang$frostc$LLVMCodeGenerator* self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getSelfPointer$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getSelfValue$frost$io$OutputStream$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, frost$io$OutputStream* p_out);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Type* p_t);
frost$core$Int64 org$frostlang$frostc$LLVMCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ChoiceCase* p_e, frost$core$Int64 p_index);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
void org$frostlang$frostc$LLVMCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$IR$Value* p_v);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$getTypedReference$org$frostlang$frostc$IR$Value$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$IR$Value* p_v);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$debugInfo$org$frostlang$frostc$Position$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position);
void org$frostlang$frostc$LLVMCodeGenerator$writeIsNull$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$LLVMCodeGenerator$writeIsNonNull$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$IR$Value* p_v);
void org$frostlang$frostc$LLVMCodeGenerator$writeBinary$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$writeBranch$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Block$ID p_target);
void org$frostlang$frostc$LLVMCodeGenerator$writeCast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$Type* p_target);
void org$frostlang$frostc$LLVMCodeGenerator$writeConditionalBranch$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_test, org$frostlang$frostc$IR$Block$ID p_ifTrue, org$frostlang$frostc$IR$Block$ID p_ifFalse);
void org$frostlang$frostc$LLVMCodeGenerator$writeConstruct$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMCodeGenerator$writeCreateStruct$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$ClassDecl* p_cl, org$frostlang$frostc$FixedArray* p_args);
void org$frostlang$frostc$LLVMCodeGenerator$writeDynamicCall$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$LLVMCodeGenerator$writeExtractField$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$LLVMCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$ChoiceCase* p_cc, frost$core$Int64 p_index);
void org$frostlang$frostc$LLVMCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_target, org$frostlang$frostc$FieldDecl* p_field);
void org$frostlang$frostc$LLVMCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$ClassDecl* p_cl, frost$core$Int64 p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value, frost$core$Int64 p_index, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$writeLoad$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$LLVMCodeGenerator$writeNegate$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$LLVMCodeGenerator$writeNot$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerAlloc$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_count, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerDestroy$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerGetIndex$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerOffset$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_offset);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerRealloc$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_oldCount, org$frostlang$frostc$IR$Value* p_newCount);
void org$frostlang$frostc$LLVMCodeGenerator$writePointerSetIndex$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr, org$frostlang$frostc$IR$Value* p_index);
void org$frostlang$frostc$LLVMCodeGenerator$writeReturn$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$LLVMCodeGenerator$writeStaticCall$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$MethodDecl* p_m, frost$collections$ListView* p_args);
void org$frostlang$frostc$LLVMCodeGenerator$writeStore$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_value, org$frostlang$frostc$IR$Value* p_ptr);
void org$frostlang$frostc$LLVMCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$IR$Statement$ID p_id, org$frostlang$frostc$IR$Statement* p_s);
void org$frostlang$frostc$LLVMCodeGenerator$writeIR$org$frostlang$frostc$IR(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$LLVMCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
void org$frostlang$frostc$LLVMCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$LLVMCodeGenerator* self, org$frostlang$frostc$ClassDecl* p_cl);
void org$frostlang$frostc$LLVMCodeGenerator$cleanup(org$frostlang$frostc$LLVMCodeGenerator* self);

