from typing import List
def twoSum(nums: List[int], target:int)->List[int]:
    # Input: nums = [3,2,4], target = 6 => [(0, 3), (1, 2), (2, 4)]
    #Brute Force
    # x + y = target 
    # x = target - y 
    # for i in range(len(nums)):
    #     for j in range(i+1,len(nums)):
    #         if nums[j] == target - nums[i]:
    #             return i,j
    #Hash Table O(N) time and O(N) space
    myhashtable = dict()
    for i, v in enumerate(nums):
        if target - v in myhashtable.keys(): 
             return [i, myhashtable[target-v]]
        myhashtable[v] = i
    return -1            

nums = list(map(int, input().split()))
target = int(input())
print(twoSum(nums,target))