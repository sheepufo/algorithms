#!/bin/python3

from lib.sort_utils import *


# input an array
print("Input some numbers to sort:")
array = input_array()

# print the array
print("The numbers you input:")
print(array)

# sort the array
# you can change to other methods as you like
array = insertion_sort(array)

# print the array again
print("The numbers after sorting:")
print(array)
