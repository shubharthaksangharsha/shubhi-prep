class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        freq_dict = {}
        for x in words:
            freq_dict[x] = freq_dict.get(x, 0) + 1
        
        heap = [(-freq, word) for word, freq in freq_dict.items()]
        heapq.heapify(heap)
        
        return [heapq.heappop(heap)[1] for _ in range(k)]
            
        
