#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bsearch(int *array, int start, int size, int value);

#endif
