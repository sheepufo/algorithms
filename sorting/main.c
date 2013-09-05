#include <stdio.h>
#include "libs/tools.h"

int main(int argc, char *argv[])
{

    const int LENGTH = 5;
    int array[LENGTH];

    printf("Please input %d numbers:\n", LENGTH);
    input_array(array, LENGTH);
    
    printf("Numbers you input:\n");
    print_array(array, LENGTH);

    // Sorting the array
    // You can change to other sorting functions
    insertion_sort(array, LENGTH);

    printf("Array after sorting:\n");
    print_array(array, LENGTH);

    return 0;
}
