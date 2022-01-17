from typing import List
def plusOne(nums: List[int]) -> List[int]:
        i = len(nums) - 1 
        while i >= 0:
            if nums[i] < 9:
                nums[i]+=1
                return nums
            nums[i] = 0
            i-=1
        answer  = [1]
        return (answer + nums.copy())     
nums = list(map(int, input().split()))
print(plusOne(nums))