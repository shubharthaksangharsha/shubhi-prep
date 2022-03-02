class Node:
    def __init__(self,val):
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.size = 0
    
    def addAtHead(self, val):
        new_node = Node(val)        
        if(not self.head):
            self.head = new_node
            self.size += 1
            return
        new_node.next = self.head
        self.head = new_node
        self.size += 1
    
    def addAtTail(self,val):
        new_node = Node(val)
        if(not self.head):
            self.head = new_node
            self.size += 1
            return
        temp = self.head
        while(temp.next):
            temp = temp.next
        temp.next = new_node
        self.size += 1 
    def addAtIndex(self, index, val):
        if index < 0 or index > self.size:
            return 
        if index == 0:
            self.addAtHead(val)
            return
        if index == self.size:
            self.addAtTail(val)
            return
        new_node = Node(val)
        temp = self.head
        prev = temp
        for i in range(index):
            prev = temp
            temp = temp.next 
        prev.next = new_node
        new_node.next = temp
        self.size += 1

    def get(self, index):
        if index < 0 or index >= self.size:
            return -1   
        temp = self.head
        for i in range(index):
            temp = temp.next
        return temp.val
    
    def deleteAtIndex(self,index):
        if index < 0 or index >= self.size:
            return
        temp = self.head
        if index == 0:
            if (not self.head):
                return
            if (not self.head.next):
                self.head = None
                self.size -= 1
                return
            delete_node = self.head
            self.head = self.head.next
            del(delete_node)
            self.size -= 1
            return
        for i in range(index - 1):
            temp = temp.next
        delete_node = temp.next
        temp.next = temp.next.next
        del(delete_node)
        self.size -= 1            
                
    def print_list(self):
        temp = self.head
        while(temp):
            print(temp.val, "-->", end=" ")
            temp = temp.next
        print()
        
if __name__ == "__main__":
    obj = LinkedList()
    obj.addAtHead(2)
    obj.deleteAtIndex(1)  
    obj.addAtHead(2)
    obj.addAtHead(7)
    obj.addAtHead(3)
    obj.addAtHead(2)
    obj.addAtHead(5)
    obj.addAtTail(5)
    obj.print_list()
    print(obj.get(5))
    '''
["MyLinkedList","addAtHead","deleteAtIndex","addAtHead",
"addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","get",
"deleteAtIndex","deleteAtIndex"]
[[],[2],[1],[2],[7],[3],[2],[5],[5],[5],[6],[4]]
'''
    
    
    
'''
["MyLinkedList","addAtHead","deleteAtIndex","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","get","deleteAtIndex","deleteAtIndex"]
[[],[2],[1],[2],[7],[3],[2],[5],[5],[5],[6],[4]]
'''