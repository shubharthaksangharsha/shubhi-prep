def findNumbers(nums):
    count = res = 0
    for i in nums:
        temp_str = str(i)
        count = len(temp_str)            
        if count % 2 == 0:
            res+=1
    return res
nums = []
def input_list(nums):
    n = int(input())
    for i in range(n):
        nums.append(int(input()))    
input_list(nums)
print(nums)
print(findNumbers(nums))
