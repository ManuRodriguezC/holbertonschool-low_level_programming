#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* Librarys */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int inter_search(int *array, int low, int high, int value);


#endif
