#!/bin/python3

#
# Complete the 'minTime' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY files
#  2. INTEGER numCores
#  3. INTEGER limit
#

from unittest import result


def minTime(files, numCores, limit):
    # Write your code here
    s=0
    b=[]
    if numCores==1:
        for i in files:
            s+=i
    else:
        
        for i in range(len(files)):
            if files[i]>=numCores and limit>1:
                if files[i] not in b:
                    b.append(files[i])
                    files[i]=files[i]//numCores
                    limit-=1
            s+=files[i]
    return s
            
            
    


result = minTime([130291875,474356040,1,8], 5, 3)

print(result)

