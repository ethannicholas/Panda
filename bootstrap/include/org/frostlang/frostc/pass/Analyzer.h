#pragma once
#include "frost_c.h"
#include "Analyzer_types.h"
typedef struct org$frostlang$frostc$pass$Analyzer org$frostlang$frostc$pass$Analyzer;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$pass$Analyzer$Definition org$frostlang$frostc$pass$Analyzer$Definition;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct frost$core$Tuple2 frost$core$Tuple2;
typedef struct org$frostlang$frostc$pass$Analyzer$DataFlowValue org$frostlang$frostc$pass$Analyzer$DataFlowValue;
typedef struct org$frostlang$frostc$pass$Analyzer$State org$frostlang$frostc$pass$Analyzer$State;
#include "org/frostlang/frostc/pass/Analyzer/BlockExit_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
#include "frost/core/Int_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$pass$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
org$frostlang$frostc$pass$Analyzer$Definition* org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Statement$ID$R$org$frostlang$frostc$pass$Analyzer$Definition(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Statement$ID p_stmt);
org$frostlang$frostc$pass$Analyzer$Definition* org$frostlang$frostc$pass$Analyzer$definitionFrom$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$pass$Analyzer$Definition(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Value* p_value);
frost$core$Tuple2* org$frostlang$frostc$pass$Analyzer$$anonymous1$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$R$$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP(frost$core$Tuple2* p_p);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Statement$ID p_stmt, org$frostlang$frostc$pass$Analyzer$State* p_state);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Value* p_v, org$frostlang$frostc$pass$Analyzer$State* p_s);
void org$frostlang$frostc$pass$Analyzer$propagate$org$frostlang$frostc$pass$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$pass$Analyzer$BlockExit p_src, org$frostlang$frostc$IR$Block$ID p_target);
void org$frostlang$frostc$pass$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Block* p_b, frost$core$Int p_exit, org$frostlang$frostc$pass$Analyzer$State* p_state);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$pass$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right, org$frostlang$frostc$pass$Analyzer$State* p_state, org$frostlang$frostc$Type* p_type);
org$frostlang$frostc$pass$Analyzer$State* org$frostlang$frostc$pass$Analyzer$computeExitState$org$frostlang$frostc$pass$Analyzer$BlockExit$R$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$pass$Analyzer$BlockExit p_target);
void org$frostlang$frostc$pass$Analyzer$process$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id);
void org$frostlang$frostc$pass$Analyzer$dump(org$frostlang$frostc$pass$Analyzer* self);
void org$frostlang$frostc$pass$Analyzer$analyze(org$frostlang$frostc$pass$Analyzer* self);
void org$frostlang$frostc$pass$Analyzer$makeUnreachable$org$frostlang$frostc$IR$Block(org$frostlang$frostc$pass$Analyzer* self, org$frostlang$frostc$IR$Block* p_b);
void org$frostlang$frostc$pass$Analyzer$removeBlock$frost$core$Int(org$frostlang$frostc$pass$Analyzer* self, frost$core$Int p_index);
void org$frostlang$frostc$pass$Analyzer$cleanup(org$frostlang$frostc$pass$Analyzer* self);

