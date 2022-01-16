from typing import List
def maxConsecutiveOnes(nums:List[int])->int:
    check, result = 0, 0 
    for i in nums:
        if i == 0:
            check = 0
        else:
            check+=1
            result = max(result, check)
    return result
    #One line Solution:
    return len(max(''.join(map(str,nums)).split('0'),key = len))
nums = list(map(int, input().split()))
print(maxConsecutiveOnes(nums))

