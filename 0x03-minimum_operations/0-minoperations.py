#!/usr/bin/python3
"""
Module that calculates the fewest number of operations
needed to result in exactly n H characters in the file
"""


def minOperations(n):
    """
    checking minimun operations
    """

    min_number_operations = 0
    available_operations = 2
    while n > 1:
        if n % available_operations == 0:
            n = n / available_operations
            operations = min_number_operations + available_operations
        else:
            available_operations += 1
    return min_number_operations
