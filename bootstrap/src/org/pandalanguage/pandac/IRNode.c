#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/FieldDecl.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$collections$Iterator* (*$fn43)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn55)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn94)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn103)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn105)(panda$core$Object*);
typedef panda$core$String* (*$fn107)(panda$core$Object*);
typedef panda$core$String* (*$fn110)(panda$core$Object*);
typedef panda$core$String* (*$fn113)(panda$core$Object*);

static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x63\x6F\x6E\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6F\x62\x6A\x65\x63\x74\x3A\x20", 23, 1 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x44\x65\x66\x69\x6E\x69\x74\x69\x6F\x6E\x3A\x20", 26, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x2A\x20\x52\x65\x75\x73\x65\x64\x56\x61\x6C\x75\x65\x3A\x20", 16, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2A\x2D", 3, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x5F\x72\x61\x6E\x67\x65\x3C", 17, 1 };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x49\x52\x4E\x6F\x64\x65\x3A", 8, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Type* $tmp1 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp2 = (panda$collections$Array*) malloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2->refCount.value = 1;
    panda$collections$Array$init($tmp2);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp1, NULL, ((panda$collections$ListView*) $tmp2));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$Type* $tmp4 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp5 = (panda$collections$Array*) malloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    panda$collections$Array$init($tmp5);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp4, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp5));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$Type* $tmp7 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp8 = (panda$collections$Array*) malloc(40);
    $tmp8->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp8->refCount.value = 1;
    panda$collections$Array$init($tmp8);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp7, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp8));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$Type* $tmp10 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$collections$Array* $tmp11 = (panda$collections$Array*) malloc(40);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp11->refCount.value = 1;
    panda$collections$Array$init($tmp11);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp10, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp11));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp13 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp13, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$Type* $tmp14 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, $tmp14, p_payload, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp15->refCount.value = 1;
    panda$collections$Array$init($tmp15);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, NULL, ((panda$collections$ListView*) $tmp15));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init($tmp17);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp17));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$String* p_payload) {
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init($tmp19);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp19));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp21 = (panda$collections$Array*) malloc(40);
    $tmp21->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp21->refCount.value = 1;
    panda$collections$Array$init($tmp21);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp21));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_payload) {
    panda$collections$Array* $tmp23 = (panda$collections$Array*) malloc(40);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp23->refCount.value = 1;
    panda$collections$Array$init($tmp23);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp23));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable* p_payload) {
    panda$collections$Array* $tmp25 = (panda$collections$Array*) malloc(40);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp25->refCount.value = 1;
    panda$collections$Array$init($tmp25);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp25));
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(self, p_kind, p_position, p_type, NULL, p_children);
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->position = p_position;
    self->type = p_type;
    self->payload = p_payload;
    panda$collections$Array* $tmp27 = (panda$collections$Array*) malloc(40);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp27->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp27, p_children);
    self->children = $tmp27;
    PANDA_ASSERT(p_type->resolved.value);
    panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind, ((panda$core$Int64) { 1001 }));
    bool $tmp29 = $tmp30.value;
    if ($tmp29) goto $l31;
    bool $tmp32 = ((panda$core$Bit) { p_payload != NULL }).value;
    if (!$tmp32) goto $l33;
    $tmp32 = ((org$pandalanguage$pandac$Type*) p_payload)->resolved.value;
    $l33:;
    panda$core$Bit $tmp34 = { $tmp32 };
    $tmp29 = $tmp34.value;
    $l31:;
    panda$core$Bit $tmp35 = { $tmp29 };
    PANDA_ASSERT($tmp35.value);
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    panda$core$MutableString* result36;
    panda$collections$Iterator* child$Iter40;
    org$pandalanguage$pandac$IRNode* child52;
    panda$core$String* c57;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp66;
    panda$core$MutableString* result215;
    switch (self->kind.value) {
        case 1000:
        {
            panda$core$MutableString* $tmp37 = (panda$core$MutableString*) malloc(40);
            $tmp37->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp37->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp37, &$s39);
            result36 = $tmp37;
            {
                ITable* $tmp41 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp41 = $tmp41->next;
                }
                $fn43 $tmp42 = $tmp41->methods[0];
                panda$collections$Iterator* $tmp44 = $tmp42(((panda$collections$Iterable*) self->children));
                child$Iter40 = $tmp44;
                $l45:;
                ITable* $tmp47 = child$Iter40->$class->itable;
                while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp47 = $tmp47->next;
                }
                $fn49 $tmp48 = $tmp47->methods[0];
                panda$core$Bit $tmp50 = $tmp48(child$Iter40);
                panda$core$Bit $tmp51 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp50);
                if (!$tmp51.value) goto $l46;
                {
                    ITable* $tmp53 = child$Iter40->$class->itable;
                    while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp53 = $tmp53->next;
                    }
                    $fn55 $tmp54 = $tmp53->methods[1];
                    panda$core$Object* $tmp56 = $tmp54(child$Iter40);
                    child52 = ((org$pandalanguage$pandac$IRNode*) $tmp56);
                    panda$core$String* $tmp58 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(child52);
                    c57 = $tmp58;
                    panda$core$Bit $tmp61 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c57, &$s60);
                    bool $tmp59 = $tmp61.value;
                    if (!$tmp59) goto $l62;
                    panda$core$Bit $tmp64 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c57, &$s63);
                    $tmp59 = $tmp64.value;
                    $l62:;
                    panda$core$Bit $tmp65 = { $tmp59 };
                    if ($tmp65.value) {
                    {
                        panda$core$String$Index $tmp67 = panda$core$String$start$R$panda$core$String$Index(c57);
                        panda$core$String$Index $tmp68 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c57, $tmp67);
                        panda$core$String$Index $tmp69 = panda$core$String$end$R$panda$core$String$Index(c57);
                        panda$core$String$Index $tmp70 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c57, $tmp69);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp66, ((panda$core$String$Index$nullable) { $tmp68, true }), ((panda$core$String$Index$nullable) { $tmp70, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp71 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c57, $tmp66);
                        panda$core$MutableString$append$panda$core$String(result36, $tmp71);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result36, ((panda$core$Object*) child52));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result36, &$s72);
                }
                goto $l45;
                $l46:;
            }
            panda$core$MutableString$append$panda$core$String(result36, &$s73);
            panda$core$String* $tmp74 = panda$core$MutableString$convert$R$panda$core$String(result36);
            return $tmp74;
        }
        break;
        case 1002:
        {
            panda$core$Int64 $tmp75 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp76 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp75, ((panda$core$Int64) { 0 }));
            if ($tmp76.value) {
            {
                panda$core$Object* $tmp78 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s77, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp78)));
                panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, &$s80);
                panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
                panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
                return $tmp84;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name;
        }
        break;
        case 1003:
        {
            panda$core$Int64 $tmp85 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, ((panda$core$Int64) { 1 }));
            if ($tmp86.value) {
            {
                panda$core$Object* $tmp88 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s87, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp88)));
                panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
                ITable* $tmp92 = ((panda$collections$ListView*) self->payload)->$class->itable;
                while ($tmp92->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp92 = $tmp92->next;
                }
                $fn94 $tmp93 = $tmp92->methods[0];
                panda$core$Object* $tmp95 = $tmp93(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp95)->value)->name);
                panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s97);
                return $tmp98;
            }
            }
            panda$core$Int64 $tmp99 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp99, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp100.value);
            ITable* $tmp101 = ((panda$collections$ListView*) self->payload)->$class->itable;
            while ($tmp101->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp101 = $tmp101->next;
            }
            $fn103 $tmp102 = $tmp101->methods[0];
            panda$core$Object* $tmp104 = $tmp102(((panda$collections$ListView*) self->payload), ((panda$core$Int64) { 0 }));
            return ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp104)->value)->name;
        }
        break;
        case 1001:
        {
            panda$core$String* $tmp106 = (($fn105) self->payload->$class->vtable[0])(self->payload);
            return $tmp106;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp108 = (($fn107) self->payload->$class->vtable[0])(self->payload);
            return $tmp108;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp111 = (($fn110) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s109, $tmp111);
            return $tmp112;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp114 = (($fn113) self->payload->$class->vtable[0])(self->payload);
            return $tmp114;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s115, ((panda$core$Object*) self->type));
            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s117);
            panda$core$Object* $tmp119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp121 = panda$collections$Array$join$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp119)->children, &$s120);
            panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, $tmp121);
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
            return $tmp124;
        }
        break;
        case 1038:
        {
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s125, ((panda$core$Object*) self->type));
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp126, &$s127);
            return $tmp128;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) self->payload)->value)->name);
            panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
            panda$core$String* $tmp134 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s133);
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, $tmp134);
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
            return $tmp137;
        }
        break;
        case 1009:
        {
            panda$core$Object* $tmp139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s138, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp139)));
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s141);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp142, ((panda$core$Object*) self->type));
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
            return $tmp145;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s146, ((panda$core$Object*) ((org$pandalanguage$pandac$Variable*) self->payload)));
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
            return $tmp149;
        }
        break;
        case 1023:
        {
            panda$core$Object* $tmp151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s150, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp151)));
            panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s153);
            panda$core$String* $tmp155 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, $tmp155);
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
            panda$core$Object* $tmp159 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp158, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp159)));
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
            return $tmp162;
        }
        break;
        case 1025:
        {
            return &$s163;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s164, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp165)));
            panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s167);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp168, self->payload);
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s170);
            return $tmp171;
        }
        break;
        case 1028:
        {
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s172, self->payload);
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
            return $tmp175;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s176, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp177)));
            panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) self->payload))->name);
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            return $tmp183;
        }
        break;
        case 1030:
        {
            return &$s184;
        }
        break;
        case 1021:
        {
            panda$core$Int64 $tmp185 = panda$collections$Array$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp185, ((panda$core$Int64) { 1 }));
            if ($tmp186.value) {
            {
                panda$core$Object* $tmp187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp188 = org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(((org$pandalanguage$pandac$IRNode*) $tmp187));
                return $tmp188;
            }
            }
            panda$core$Object* $tmp190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s189, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp190)));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
            panda$core$Object* $tmp194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp193, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp194)));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s196);
            return $tmp197;
        }
        break;
        case 1018:
        {
            panda$core$String* $tmp200 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s199);
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s198, $tmp200);
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
            return $tmp203;
        }
        break;
        case 1017:
        {
            panda$core$String* $tmp206 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self->children, &$s205);
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s204, $tmp206);
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s208);
            return $tmp209;
        }
        break;
        case 1008:
        {
            panda$core$String* $tmp211 = panda$collections$Array$join$R$panda$core$String(self->children);
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s210, $tmp211);
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s213);
            return $tmp214;
        }
        break;
        case 1031:
        {
            panda$core$MutableString* $tmp216 = (panda$core$MutableString*) malloc(40);
            $tmp216->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp216->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp216, &$s218);
            result215 = $tmp216;
            panda$core$Object* $tmp219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp220 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp219)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp220.value) {
            {
                panda$core$Object* $tmp221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result215, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp221)));
            }
            }
            if (((panda$core$Bit$wrapper*) self->payload)->value.value) {
            {
                panda$core$MutableString$append$panda$core$String(result215, &$s222);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result215, &$s223);
            }
            }
            panda$core$Object* $tmp224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp225 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp224)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp225.value) {
            {
                panda$core$Object* $tmp226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result215, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp226)));
            }
            }
            panda$core$Object* $tmp227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp228 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp227)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp228.value) {
            {
                panda$core$MutableString$append$panda$core$String(result215, &$s229);
                panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result215, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp230)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result215, &$s231);
            panda$core$String* $tmp232 = panda$core$MutableString$convert$R$panda$core$String(result215);
            return $tmp232;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s233, self->payload);
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s235);
            return $tmp236;
        }
        break;
        default:
        {
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s237, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s239);
            return $tmp240;
        }
    }
}
