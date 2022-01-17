from typing import List
from math import log10, floor
def findNumbers(nums:List[int])->int:
    #O(Nlog(N)) approach 
    # result = 0
    # for i in nums:
    #     temp = floor(log10(i)) + 1
    #     if temp % 2 == 0:
    #         result+=1
    #     temp = 0
    # return result
    #Second approach using str function:
    #TC: O(N) 
    #SC: O(NK)
    result = 0
    for i in nums:
        temp = len(str(i))
        if temp % 2 == 0:
            result +=1 
    return result


nums = list(map(int,input().split()))
print(nums)
print(findNumbers(nums))
