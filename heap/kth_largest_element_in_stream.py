from typing import List
import heapq
class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        self.heap = []
        self.k = k 
        for x in nums:
            self.add(x)
            
    def add(self, val: int) -> int:
        if self.k == len(self.heap):
            heapq.heappush(self.heap, val)
            heapq.heappop(self.heap) 
            return self.heap[0] 
        heapq.heappush(self.heap,val)
        return self.heap[0]            
        
obj = KthLargest(2, [1, 1, 1, 2, 2, 3])
print(obj.heap)
print(obj.add(3))
print(obj.heap)
print(obj.add(5))
print(obj.heap)
print(obj.add(10))
print(obj.heap)
print(obj.add(9))
print(obj.heap)
print(obj.add(4))

'''
["KthLargest","add","add","add","add","add"]
[[1,[]],[-3],[-2],[-4],[0],[4]]

'''        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)
