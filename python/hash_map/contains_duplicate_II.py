from typing import List
def containsNearbyDuplicate(nums: List[int], k: int) -> bool:
    #Brute Force Approach
#    if len(nums) == len(set(nums)):
#       return False
#    for i in range(len(nums)):
#        for j in range(i+1, len(nums)):
#            if nums[i] == nums[j] and j-i <= k and i !=j:
#                return True
#    return False

    #Using Dictionary
    duplicate = {}
    for i,v in enumerate(nums):
        if v in duplicate and i - duplicate[v] <= k:
            return True
        duplicate[v] = i
    return False

nums1 = [1,2,3,1]
nums2 = [1,0,1,1]
k = 1
print(containsNearbyDuplicate(nums2,k))
