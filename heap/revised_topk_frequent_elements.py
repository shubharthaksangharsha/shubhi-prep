import heapq
from typing import List
class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        self.heap = []
        self.k = k
        for x in nums:
            self.add(x)
    def add(self, val: int) -> int:
        if (self.k == len(self.heap)):
            heapq.heappush(self.heap, val)
            heapq.heappop(self.heap)
            return self.heap[0]
        heapq.heappush(self.heap, val)
        return self.heap[0]
    def result(self):
        answer = []
        while self.heap:
            answer.append(heapq.heappop(self.heap)[1])
        return answer
def topKFrequent(nums: List[int], k: int) -> List[int]:
    #Bucket Sort
#TC: O(N), SC: O(N)
    # frequency_dict = {}
    # count = [[] for _ in range(len(nums) + 1)] #making empty lists from nums
       
    # for x in nums: #making frequency of each number
    #     frequency_dict[x] = frequency_dict.get(x, 0) + 1 
        
    # for i,v in frequency_dict.items(): #appending frequency of each number according to number
    #         count[v].append(i)
    # answer = [] 
    # for i in range(len(count) - 1, 0, -1): #iterating from last and appending the value to answer and returning it if answer length is equal to k.
    #     for val in count[i]:
    #         answer.append(val)
    #         if len(answer) == k:
    #             return answer   
    
    #Using Heap
    freq_dict = {}
    for x in nums:
        freq_dict[x] = freq_dict.get(x, 0) + 1
    answer = [(v,i) for i,v in freq_dict.items()]
    print(answer)
    heap = []
    for x in answer:
        if len(heap) == k:
            heapq.heappush(heap,x)
            heapq.heappop(heap)
            continue
        heapq.heappush(heap,x)
    answer = []
    while heap:
        answer.append(heapq.heappop(heap)[1])
    return answer    
    
#    obj = KthLargest(k,answer )
#    return obj.result()
    
    
                       
nums = list(map(int, input().split()))
print(topKFrequent(nums, 2))
