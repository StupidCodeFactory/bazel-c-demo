#ifndef BLACK_OPS_H
#define BLACK_OPS_H

#include <stdbool.h>
static bool fail = false;

typedef void * (*function_stub_t)();

extern void * expectMallocFail(function_stub_t stubbed);

#endif /* BLACK_OPS_H */

#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
