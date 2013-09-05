#!/bin/python3


def input_array():
    array = []
    while True:
        try:
            array.append(int(input()))
        except ValueError as er:
            print(er)
        except EOFError:
            return array


def insertion_sort(array):
    """ insertion sort an array """
    for j in range(1, len(array)):
        key = array[j]
        i = j - 1
        while i >= 0 and array[i] > key:
            array[i+1] = array[i]
            i -= 1
        array[i+1] = key
    return array
