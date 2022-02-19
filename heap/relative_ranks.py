from typing import List
from heapq import heapify, heappop, heappush
def findRelativeRanks(score: List[int])->List[int]:
    #Hashmap Approach , TC: O(Nlog(N)), SC: O(N)
    # dict = {}
    # new_score = sorted(score, reverse=True)
    # for i,v in enumerate(new_score):
    #     if i == 0:
    #         dict[v] = 'Gold Medal'
    #     elif i == 1:
    #         dict[v] = 'Silver Medal'
    #     elif i == 2:
    #         dict[v] = 'Bronze Medal'
    #     else:
    #         dict[v] = str(i+1)
    # print(dict)
    # return [dict[x] for x in score]

    #Heap Approach , TC: O(Nlog(N)), SC: O(N)
    ans = [None for _ in range(len(score))]
    heap, flag = [], 1
    heapify(heap)
    for i in range(len(score)):
        heappush(heap, (-1 * score[i], i))
    
    while heap:
        val = heappop(heap)
        if flag == 1:
            ans[val[1]] = 'Gold Medal'
        elif flag == 2:
            ans[val[1]] = 'Silver Medal'
        elif flag == 3:
            ans[val[1]] = 'Bronze Medal'
        else:
            ans[val[1]] = str(flag)
        flag += 1
    return ans
    
nums = list(map(int, input().split()))
print(findRelativeRanks(nums))

