# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        #Using heap: TC: O(NlogK), SC: O(k) where k is total number of lists and N is total number of elements in a list 
        heap = []
        for i, v in enumerate(lists):
            if v:
                heapq.heappush(heap, (v.val, i))
                
        dummy = ListNode(0)
        head = dummy
        while heap:
            v, i = heapq.heappop(heap)
            dummy.next = ListNode(v)
            if lists[i].next:
                 heapq.heappush(heap, (lists[i].next.val, i))
                 lists[i] = lists[i].next
            dummy = dummy.next
            
        return head.next
                
