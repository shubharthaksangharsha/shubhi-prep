from typing import List
def missingNumber(nums: List[int]) -> int:
    '''
    [3, 0 , 1]
    partial_sum = 4 
    actual sum = n * (n + 1) / 2 
    i.e   3 * 4 / 2
    i.e   6 
    actual - partial_sum = answer
    '''
    #using sum formula 
    #return (len(nums) * (len(nums) + 1) // 2 ) - sum(nums)
    #using bit manupulation 
    xor1, xor2 = 0, 0
    for x in nums:
        xor1 ^= x
    for y in range(len(nums) + 1):
        xor2 ^= y
    return xor1 ^ xor2
nums = list(map(int, input().split()))
print(missingNumber(nums))