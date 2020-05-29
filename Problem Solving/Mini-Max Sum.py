#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    maximum=sum(arr)-min(arr)
    minimum=sum(arr)-max(arr)
    print(minimum,end=" ")
    print(maximum)
    

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
