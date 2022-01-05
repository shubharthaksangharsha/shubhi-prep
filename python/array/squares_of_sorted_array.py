def sortedSquares(nums):
            for i in range(len(nums)):
                nums[i] = int(pow(nums[i],2))
            nums = sorted(nums)
            return nums
nums = [-4,-1,0,3,10]
print(sortedSquares(nums))
