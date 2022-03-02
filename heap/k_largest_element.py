from typing import List
from heapq import nlargest
def findKthlargest(nums: List[int], k: int)-> int:
    # Native Approach using sort 
    #TC: O(NlogN), SC: O(N)
    # ans = sorted(nums, reverse=True)
    # return ans[k-1]
    # Min heap using heapq
    #TC: O(NlogN), SC: O(1)
    ans = nlargest(k, nums)
    return ans[-1]
nums = list(map(int,input().split()))
k = int(input())
print(findKthlargest(nums, k))

