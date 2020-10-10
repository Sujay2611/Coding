#!/bin/python3

import math
import os
import random
import re
import sys
import copy

#
# Complete the 'mixColors' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. 2D_INTEGER_ARRAY colors
#  2. 2D_INTEGER_ARRAY queries
#

def mixColors(colors, queries):
    # Write your code here
    a=[]
    min1=100001
    max1=-1
    min2=100001
    max2=-1
    min3=100001
    max3=-1
    for l in colors:
        if(l[0]<min1):
            min1=l[0]
        if(l[0]>max1):
            max1=l[0]
        if(l[1]<min2):
            min2=l[1]
        if(l[1]>max2):
            max2=l[1]
        if(l[2]<min3):
            min3=l[2]
        if(l[2]>max3):
            max3=l[2]
    for i in queries:
        if(i in colors):
            a.append("YES")
        else:
            print(i[0],i[1],i[2],min1,min2,min3,max1,max2,max3)
            if(i[0]>max1 or i[0]<min1 or i[1]>max2 or i[1]<min2 or i[2]>max3 or i[2]<max3):
                a.append("NO")
            else:
                b=copy.deepcopy(colors)
                print(b)
                j=0
                while(j<len(b)):
                    if(b[j][0]>i[0]):
                        b.pop(j)
                    else:
                        j=j+1
                j=0
                while(j<len(b)):
                    if(b[j][1]>i[1]):
                        b.pop(j)
                    else:
                        j=j+1
                j=0
                while(j<len(b)):
                    if(b[j][2]>i[2]):
                        b.pop(j)
                    else:
                        j=j+1

                if(b==[]):
                    a.append("NO")
                else:
                    x=[]
                    y=[]
                    z=[]
                    for k in b:
                        x.append(k[0])
                        y.append(k[1])
                        z.append(k[2])
                    if(i[0] in x and i[1] in y and i[2] in z):
                        a.append("YES")
                    else:
                        a.append("NO")
    return a

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    colors = []

    for _ in range(n):
        colors.append(list(map(int, input().rstrip().split())))

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = mixColors(colors, queries)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()

