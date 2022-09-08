#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* Librarys */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bs(int *array, int l, int r, int x);


#endif
