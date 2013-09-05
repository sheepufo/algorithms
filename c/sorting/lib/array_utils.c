#include "array_utils.h"

/*
 *  tool.c
 *
 *  some useful tool functions
 *
 *  Copyright (C) Joseph Pan
 *
 *  2013-09-05  First release
 */

/**
 * input_array - input an array
 * @array:	the array to be printed
 * @length:	the length of the array
 *
 * Input an integers array.
 * Return the address of the array's first element.
 */

int input_array(int *array, const int LENGTH)
{
    int i = 0, j = 0;
    const int SIZE = 5;
    char input[SIZE];
    int tmp = 0, sum = 0;    
    while (i < LENGTH){
	sum = 0;
	scanf("%s", input);
	for (j = 0; input[j] != '\0'; j++){
	    if (input[j] < '0' || input[j] > '9') {
		printf("Invalid input!\n");
		sum = -1;
		break;
	    }
	    sum = sum*10 + input[j] - '0';
	}
	*(array + i) = sum;
	i++;
    }
    return 0;
}


/**
 * print_array - print all the elements from an array
 * @array:	the array to be printed
 * @length:	the length of the array
 */
int print_array(int *array, const int LENGTH)
{
    int i = 0;
    for (i = 0; i < LENGTH; i++){
	printf("%d ", array[i]);	
    }
    printf("\n");
    return 0;
}


/**
 * insertion_sort - insertion sorting the array
 * @array:	the array to be sorted
 * @length:	the length of the array
 *
 * Sorting the array by using the insertion sorting algorithms.
 * Return 0 after sorting.
 *
 */
int insertion_sort(int *array, const int LENGTH)
{
    int i, j, key;
    for (j = 1; j < LENGTH; j++){
	key = array[j];
	i = j - 1;
	while (i >= 0 && array[i] > key){
	    array[i+1] = array[i];
	    i--;
	}
	array[i+1] = key;
    }
    return 0;
}
