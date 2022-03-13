from typing import List, Optional
class BinaryTree:
    '''Create a object of Binary Tree'''
    def __init__(self, val: int, left = None, right = None) -> None:
        '''
        Create object using this Constructor with val and left and right as Left Child 
        and Right Child respectively.
        input: val: int, left: BinaryTree, right: BinaryTree [declared None as default]
        output: None
        '''
        self.val = val
        self.left = left
        self.right = right
        
def in_order(root: BinaryTree) -> None:
    '''
    Print Each Node in In-Order Traversal
    input: root: BinaryTree 
    output: None
    '''
    if root is None: 
        return 
    in_order(root.left)
    print(root.val)
    in_order(root.right)

def post_order(root: BinaryTree) -> None:
    '''
    Print Each Node in Post-Order Traversal
    input: root: BinaryTree 
    output: None
    '''
    if root is None:
        return 
    post_order(root.left)
    post_order(root.right)
    print(root.val)

def pre_order(root: BinaryTree) -> None:
    '''
    Print Each Node in Pre-Order Traversal
    input: root: BinaryTree 
    output: None
    '''
    if root is None:
        return
    print(root.val)
    pre_order(root.left)
    pre_order(root.right)

def find(root: BinaryTree, val: int) -> bool:
    '''
    Returns True if the binary tree contains value else False
    input: root: BinaryTree, val: int
    output: bool
    '''
    if root is None:
        return False
    if root.val == val:
        return True
    return find(root.left, val) or find(root.right, val) 

def count_nodes(root: BinaryTree) -> int:
    '''
    Given a binary tree, find the number of nodes in it
    input: root: BinaryTree
    output: int
    '''
    count = 0
    if root is None:
        return 0
    count += 1
    count += count_nodes(root.left)
    count += count_nodes(root.right)
    return count
def count_leaf_nodes(root: BinaryTree) -> int:
   '''
   Given a binary tree, find how many leaf nodes exists
   input: root: BinaryTree
   output: int
   ''' 
   return ( count_nodes(root) + 1) // 2

def find_node(root: BinaryTree, val: int) -> Optional[BinaryTree]:
    '''
    Returns the node with given value if given value node exists else Returns None if not found
    input: root: BinaryTree, val: int
    output: None or BinaryTree
    '''
    if root is None:
        return 
    if root.val == val:
        return root
    return find_node(root.left, val) or find_node(root.right, val)


'''
            15 
           /  \ 
          12     27
        /   \   /  \ 
       7    14  20   88
                 \ 
                  23
'''
if __name__ == '__main__':
    root = BinaryTree(15, BinaryTree(12, BinaryTree(7), BinaryTree(14)), BinaryTree(27, BinaryTree(20,right=BinaryTree(23)), BinaryTree(88)))
    # in_order(root)
    print(count_nodes(root))
    print(count_leaf_nodes(root))
    


