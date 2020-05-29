#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    if(n<1 or n>100):
        sys.exit()
    for i in range(0,len(ar)):
        if(ar[i]<1 or ar[i]>100):
            sys.exit()

    count=[x for x in range(0,101)]
    #print("len of count=",len(count))
    #print("len of ar=",len(ar))
    #print(count)
    for k in count:
        count[k]=0
    #print(count)
    for i in range(0,101):     #finding occurence of number
        for j in range(0,len(ar)):            #comparing that number with array
            if(ar[j]==i):                
                count[i]=count[i]+1  #if found
    #print("counting list==")
    #print(count)
    pair=0
    for i in range(0,len(count)):
        if(count[i]!=0):
            value=int(count[i]/2)
            pair=pair+value
    #print("total pair is: ",pair)
    return(pair)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
