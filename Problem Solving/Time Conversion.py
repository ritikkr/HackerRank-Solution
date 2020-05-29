#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    last_two=s[-2:]
    if(last_two=='AM'):
        if(s[:2]=='12'):
            new_date="00"
        else:
            new_date=s[:2]
    else:
        if(s[:2]=='12'):
            new_date=s[:2]
        else:
            new_date=int(s[:2])+12
    new_date=str(new_date)+s[2:8]
   #print(new_date)
    return(new_date)
    

if __name__ == '__main__':
    s=input()
    
    print(timeConversion(s))
