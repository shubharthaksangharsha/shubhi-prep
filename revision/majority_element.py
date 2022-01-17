from typing import List
def majorityElement(nums: List[int]) -> int:
    #Brute Force gives TLE
    #count = 1
    #for i in range(len(nums)):
    #    for j in range(1,len(nums)):
    #        if nums[i] == nums[j]:
    #            count+=1
    #    if count > len(nums)// 2:
    #        return nums[i]
    #    count = 0
    #Using Hash Map
    #myhashmap = dict()
    #for x in nums:
    #    myhashmap[x] = myhashmap.get(x, 0) + 1
    #for x in nums:l
    #    if myhashmap[x] > len(nums) // 2:
    #        return x
    #Moores Voting Algo
    candidate = count = 0
    for x in nums:
        if count == 0:
            candidate = x
        if x == candidate:
            count+=1
        else:
            count-=1
    return candidate
nums = list(map(int, input().split()))
print(majorityElement(nums)) 
        