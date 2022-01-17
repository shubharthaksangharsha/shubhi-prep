from typing import List

def sortedSquares(nums:List[int])->List[int]:
    #O(N) Two pointer approach
    ans = [None for _ in nums]
    n, l, r = len(nums) -1 , 0, len(nums) - 1
    while n >= 0:
        if abs(nums[l]) > abs(nums[r]):
            ans[n] = nums[l] ** 2
            l+=1
            n-=1
        else:
            ans[n] = nums[r] ** 2
            r-=1
            n-=1
    return ans

nums = list(map(int, input().split()))
print(sortedSquares(nums))