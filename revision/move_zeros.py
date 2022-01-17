from typing import List
def  moveZeros(nums:List[int])->None:
    #using O(N) TC and O(1)space :-
    left  =  0 
    for right in range(len(nums)):
        if nums[right] != 0:
            nums[left], nums[right] = nums[right], nums[left]
            left+=1
nums = list(map(int, input().split()))
print(moveZeros(nums), nums)