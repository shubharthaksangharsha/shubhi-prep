from typing import List
def sortArrayByParity(nums: List[int])->List[int]:
     #nums = [3,1,2,4]
     #Using TC: O(N) but O(N) space
    # even = [x for x in nums if x % 2 == 0]
    # odd = [x for x in nums if x % 2 != 0]
    # answer = [None for _ in range(len(odd + even))]
    # i = 0
    # while i < len(even):
    #     answer[i] = even[i]
    #     i+=1
    # for j in odd: 
    #     answer[i] = j
    #     i+=1

    # using TC: O(N) and O(1) space
    right, left = 0, 0
    while right < len(nums):
        if nums[right] % 2 !=0:
            right+=1
            continue
        nums[left], nums[right] = nums[right], nums[left]
        left+=1
        right+=1
    return nums
    



     
nums = list(map(int, input().split()))
print(sortArrayByParity(nums))