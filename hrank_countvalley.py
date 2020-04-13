#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    k=list(s)
    t=0
    u=0
    v=0
    for i in k:
        if(i=='U'):
            if(t==-1):
                u+=1
            t+=1
        else:
            if(t==0):
                v+=1
            t-=1
    return min(u,v)


    
    p="".join(a)
    #print(p)
    return p.count("DUD")

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
