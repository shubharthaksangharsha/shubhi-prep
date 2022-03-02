import heapq
from typing import List
def mergeKArrays(lists: List[List[int]]) -> List[int]:
    heap = []
    for i, v in enumerate(lists):
        if len(v):
            heapq.heappush(heap, (lists[i][0], i, 0)) 
    result = []
    while heap:
        val, i, col = heapq.heappop(heap)
        result.append(val)
        if col != len(lists[i]) - 1:
            heapq.heappush(heap, (lists[i][col+1], i, col+1))    
    return result 

n = int(input())
answer = []
while n:
    nums = list(map(int, input().split()))
    answer.append(nums)
    n -= 1
print(mergeKArrays(answer))
