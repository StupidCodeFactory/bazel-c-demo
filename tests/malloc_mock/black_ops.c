#include "tests/malloc_mock/black_ops.h"
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdbool.h>

#include "black_ops.h"

__attribute__((constructor))
void initMallockMock() {
  printf("[+] - initializing mallocMock!!!\n");
}

extern void * expectMallocFail(function_stub_t stubbed) {
  fail = true;
  void * data = stubbed();
  fail = false;
  return data;
}


void *malloc(size_t size) {
  if (fail) {
    return NULL;
  }
  void * (*original_malloc)(size_t) = dlsym(RTLD_NEXT, "malloc");
    return original_malloc(size);
}
