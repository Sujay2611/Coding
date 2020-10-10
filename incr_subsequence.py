#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'whoIsTheWinner' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def whoIsTheWinner(arr):
    # WRITE DOWN YOUR CODE HERE
    if(len(arr)==len(set(arr))):
        return "First"
    else:
        k=len(arr)
        if(k%2==0):
            return "Second"
        else:
            return "First"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = whoIsTheWinner(arr)

        fptr.write(result + '\n')

    fptr.close()

