from typing import List
def removeElement(nums: List[int], val: int)->int:
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i+=1
    return i    
nums = list(map(int, input().split()))
val = int(input())
print(removeElement(nums, val))