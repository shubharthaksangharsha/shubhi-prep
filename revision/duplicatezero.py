from typing import List
def duplicateZeros(nums: List[int])->None:
    newLen = len(nums) + nums.count(0)
    i, j, n = len(nums) -1 , newLen -1, len(nums)
    while j >= 0:
        if j < n:
            nums[j] = nums[i]
        j -= 1
        if nums[i] == 0: #again copy if nums[i] = 0
            if j < n:
                nums[j] = nums[i]
            j -= 1
        i -= 1
        
nums = list(map(int, input().split()))
duplicateZeros(nums)
print(nums)