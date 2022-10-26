#!/usr/bin/python3
"""
contains the MyList class
"""


class MyList(list):
    """a subclass of list"""
    def __init__(self):
        """initializes the object"""
        super().__init__()

    def print_sorted(self):
        """method to print the sorted list"""
        print(sorted(self))
