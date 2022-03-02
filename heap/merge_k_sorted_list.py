from main import LinkedList, Node
# def print_list(head):
#     while head:
#         print(head.val, "-->", end=" ")
#         head = head.next
#     print()
# def merge(l1, l2):
#     if not l1:
#         return l2
#     if not l2:
#         return l1
#     new_node = Node(0) 
#     head = new_node    
#     while l1 and l2:
#         if l1.val < l2.val:
#             new_node.next = l1            
#             l1 = l1.next      
#         else:
#             new_node.next = l2
#             l2 = l2.next
#         new_node = new_node.next

#     if l1:
#         new_node.next = l1 
#     if l2:
#         new_node.next = l2     
#     return head.next
# obj1 , obj2 =  LinkedList(), LinkedList()
# obj1.addAtHead(5)
# obj1.addAtHead(4)
# obj1.addAtHead(3)
# obj1.addAtHead(2)
# obj1.print_list()
# obj2.addAtHead(7)
# obj2.addAtHead(6)
# obj2.addAtHead(3)
# obj2.print_list()
# print_list(merge(obj1.head, obj2.head))
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        '''
        Native Approach using Merge() function
        
        '''
        if not lists:
            return None
        if len(lists) == 1:
            return lists[0]
        def merge(l1, l2):
            if not l1:
                return l2
            if not l2:
                return l1
            dummy = ListNode(0)
            head = dummy
            while l1 and l2:
                if l1.val <= l2.val:
                    dummy.next = l1
                    l1 = l1.next
                else:
                    dummy.next = l2
                    l2 = l2.next
                dummy = dummy.next
            if l1: 
                dummy.next = l1
            if l2: 
                dummy.next = l2
            return head.next
        
        output = lists[0]
        for l in lists[1:]:
            output = merge(output,l)
        return output
        


