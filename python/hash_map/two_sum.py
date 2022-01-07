def twoSum(nums, target):  
 #Approach 1 using  1 pass Hash Table
#    mydict = {}
#    for i in range(len(nums)):
#        complement = target - nums[i]
#        if complement in mydict:
#            return [i, mydict[complement]]
#        mydict[nums[i]] = i
 #Approach 2 using 2 pass Hash Table
    hashmap = {}
    for i in range(len(nums)):
        hashmap[nums[i]] = i
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in hashmap and hashmap[complement] !=i:
            return [i, hashmap[complement]]
 #Approach 3 using Brute Force
#    for i in range(len(nums)):
#        for j in range(i+1, len(nums)):
#            if nums[j] == target - nums[i]:
#                return [i,j]

nums = []
[nums.append(int(input())) for _ in range(int(input()))]
target = int(input())
print(twoSum(nums,target))
        
