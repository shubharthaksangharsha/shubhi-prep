def findNumbers(nums):
    count = res = 0 #initalizing the variables
    for i in nums: #iterating the list 
        temp_str = str(i) #converting the number into string
        count = len(temp_str) #counting the number of digits 
        if count % 2 == 0: 
            res+=1 #if number of digits even then increasing the res value by 1 
    return res #returning the answer
nums = []
def input_list(nums):
    n = int(input())
    for i in range(n):
        nums.append(int(input()))    
input_list(nums)
print(nums)
print(findNumbers(nums))
