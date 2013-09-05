/*
 *  tool.h
 *
 *  some useful tool functions
 *
 *  Copyright (C) Joseph Pan
 *
 *  2013-09-05  First release
 */

#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdlib.h>


/* For input and output arrays. */
int print_array(int *array, const int LENGTH);
int input_array(int *array, const int LENGTH);

/* For sorting arrays. */
int insertion_sort(int *array, const int LENGTH);
	
#endif
