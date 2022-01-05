#https://leetcode.com/problems/max-consecutive-ones
def findMax(nums):
    res= count = 0   #declaring 2 variables 
    for i in nums: #iterating the list
        if i == 0: 
            count = 0 #reseting the  count to 0 if  encountered 0 
        else:
            count+=1 #increase the count
            res = max(count,res) #storing the maximum count to res  variable
            #another way to write the max function :
            #if  count >= res:
            #        res = count
    return res #returning the variables  
nums = []
n = int(input())
print(n)
for i in range(n):
    nums.append(int(input()))
    print(nums)

res = findMax(nums)
print(res)

    
