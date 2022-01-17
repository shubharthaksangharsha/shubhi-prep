from re import search
from typing import List
def searchInsert(nums: List[int], target: int)->int:
    low, high = 0, len(nums) -1 
    while low <= high:
        mid = (low + high) // 2
        guess = nums[mid]
        if guess == target:
            return mid
        elif guess >= target:
            high = mid - 1
        else:
            low = mid + 1
    return low  

nums = list(map(int, input().split()))
target = int(input())
print(searchInsert(nums, target))
