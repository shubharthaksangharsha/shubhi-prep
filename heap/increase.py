from typing import List
from collections import Counter
import heapq
def frequencySort(nums: List[int]) -> List[int]:   
        counts = Counter(nums)        
        heap = []
        for key in counts:
            heapq.heappush(heap, (counts[key], (-1 *key)))
        print(heap)
        output = []
        while heap:
            count, val = heapq.heappop(heap)
            val *= -1            
            for _ in range(count):
                output.append(val)
        return output	

print(frequencySort([1, 1, 2, 2, 2, 3]))
