def findNumbers(nums):
    #using str.len()
    #Time Complexity : O(N^2)
    #Space Complexity : O(N)
    #    count = res = 0 #initalizing the variables
    #    for i in nums: #iterating the list
    #        temp_str = str(i) #converting the number into string
    #        count = len(temp_str) #counting the number of digits
    #        if count % 2 == 0:
    #            res+=1 #if number of digits even then increasing the res value by 1
    #    return res #returning the answer

    #Without using str.len()
    #Time Complexity : O(N^2)
    #Space Complexity : O(1)
    count = res = 0  # initalizing the variables
    for i in nums:  # iterating the list
        while i != 0:
            i //= 10
            count += 1            
        if count % 2 == 0:
            res += 1  # if number of digits even then increasing the res value by 1
        count = 0
    return res  # returning the answer


nums = []
def input_list(nums):
    n = int(input())
    for i in range(n):
        nums.append(int(input()))
input_list(nums)
print(nums)
print(findNumbers(nums))
