#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    s='#'
    for i in range(1,n+1):
        f='>'+str(n)
        print(format(i*s,f))
if __name__ == '__main__':
    n = int(input())
    staircase(n)
