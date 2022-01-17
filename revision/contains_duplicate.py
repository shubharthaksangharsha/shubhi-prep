from typing import List
def containsDuplicate(nums: List[int])->bool:
    #using hashset
    # myhashset = set()
    # for x in nums:
    #     if x in myhashset:
    #         return False
    #     myhashset.add(x)
    # return True
    
    # using sort 
    nums.sort()
    for x in range(1, len(nums)):
        if nums[x] == nums[x-1]:
            return True
    return False

nums = list(map(int, input().split()))
print(containsDuplicate(nums))