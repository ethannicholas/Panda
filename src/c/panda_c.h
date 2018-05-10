#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

typedef struct panda$core$Class panda$core$Class;

typedef struct ITable {
    panda$core$Class* $class;
    struct ITable* next;
    void* methods[];
} ITable;

void* pandaZAlloc(size_t size);

void* pandaObjectAlloc(size_t size, panda$core$Class* cl);

void* pandaRealloc(void* old, size_t oldSize, size_t newSize);

void* pandaNewRealloc(void* old, size_t oldSize, size_t newSize);

void pandaFree(void* ptr);

char* pandaConvertToString(void* o);

#define PANDA_ASSERT(x) if (!x) { printf("assertion failure: %s:%d\n", __FILE__, __LINE__); \
        __builtin_trap(); }
