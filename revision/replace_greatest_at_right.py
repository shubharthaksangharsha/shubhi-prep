from dataclasses import replace
from typing import List
def replaceElements(nums: List[int])->List[int]:
    i, mx, temp = len(nums) - 1, -1, nums[-1]
    while i >= 0:
        temp = nums[i]
        nums[i] = mx
        mx = max(mx, temp)
        i-=1
    return nums
nums = list(map(int, input().split()))
print(replaceElements(nums))