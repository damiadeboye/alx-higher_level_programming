#!/usr/bin/python3
"""
This module contains the function is_same_class
"""


def is_same_class(obj, a_class):
    """return true if obj is the exactly an instance of
    a_class, otherwise false"""
    return (type(obj) == a_class)
