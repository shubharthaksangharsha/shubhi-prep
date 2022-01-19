from operator import xor
from re import X
from typing import List
def singleNumber(nums:List[int])->int:
    '''
    Approach 1: TC: O(N), SC: O(N)
    Input: nums = [4,1,2,1,2]
    Output: 4
    return 2*sum(set(nums))- sum(nums) 
    2 *(7) -   (10)
    14 - 10 = 4
    '''
    # return 2 * sum(set(nums)) - sum(nums)
    '''
    Approach 2 : Using XOR 
    Input: nums = [4,1,2,1,2]
    Output: 4
    4 ^ 1 ^ 2 ^ 1 ^ 2
    4 ^ 1 ^ 1 ^ 2 ^ 2
    4 ^ 0 ^ 0 
    4 ^ 0 = 4
    '''
    res = 0
    for x in nums:
        res ^= x
    return res
    
nums = list(map(int, input().split()))
print(singleNumber(nums))