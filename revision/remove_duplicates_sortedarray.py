from os import remove
from typing import List
def removeDuplicates(nums: List[int])->int:
    if len(nums) == 0:
        return 0
    i = 0
    for j in range(len(nums)):
        if nums[j] != nums[i]:
            i+=1
            nums[i] = nums[j]
    return i+1
nums = list(map(int, input().split()))
print(removeDuplicates(nums), nums)
