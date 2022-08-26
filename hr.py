#!/bin/python3

import math
import os
import random
import re
import sys
from typing import final



#
# Complete the 'reverse_words_order_and_swap_cases' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING sentence as parameter.
#

def reverse_words_order_and_swap_cases(sentence):
    # Write your code here
    words=sentence.split(" ")
    string=[]
    finalstring=""
    for i in range(len(words)-1,-1,-1):
        convertedsentence=""
        for j in words[i]:
            if j.isupper():
                convertedsentence+=j.lower()
            else:
                convertedsentence+=j.upper()
        string.append(convertedsentence)
    finalstring=' '.join(string)
    return finalstring
        
                

reverse_words_order_and_swap_cases(input())