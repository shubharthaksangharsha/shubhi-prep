from typing import Optional
from collections import defaultdict, deque
from isSameTree import BinaryTree
def maxDepth1(root: Optional[BinaryTree]) -> int:
    '''Using DFS-Recursively'''
    if root is None:
        return 0
    return 1 + max(maxDepth1(root.left), maxDepth1(root.right))
def maxDepth2(root: Optional[BinaryTree]) -> int:
    '''Using BFS(deque)'''
    result = defaultdict(list)
    q = deque([(root, 0)])
    while q:
        node, level = q.popleft()
        if node is None: continue
        result[level].append(node.val)
        q.append((node.left, level + 1))
        q.append((node.right, level + 1))
    return len(result)
def maxDepth3(root: Optional[BinaryTree]) -> int:
    '''Using DFS Non-Recursively(stack)'''
    level = 0
    stack = [(root, 1)]
    while stack:
        node, depth = stack.pop()
        if node:
            level = max(level, depth)
            stack.append((node.left, depth + 1))
            stack.append((node.right, depth + 1)) 
                   
    return level 

p = BinaryTree(1, left=BinaryTree(3, left=BinaryTree(9)), right=BinaryTree(20, left=BinaryTree(15), right=BinaryTree(7)))
print(maxDepth1(p))
print(maxDepth2(p))
print(maxDepth3(p))