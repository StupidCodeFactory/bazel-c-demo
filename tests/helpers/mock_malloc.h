#ifndef MOCK_MALLOC_H
#define MOCK_MALLOC_H

#include <stddef.h>
#include <stdbool.h>

void * fake_malloc(size_t size, bool fail);

#endif /* MOCK_MALLOC_H */
