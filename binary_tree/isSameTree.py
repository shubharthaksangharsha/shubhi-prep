from typing import List, Optional
class BinaryTree:
    def __init__(self, val = 0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def helper(root: BinaryTree) -> List[int]:
    answer = []
    if root:
        answer.append(root.val)
        answer += helper(root.left)
        answer += helper(root.right)
    else:
        answer.append(None)
    return answer
def isSameTree(p: Optional[BinaryTree], q: Optional[BinaryTree]) -> bool:
    answer1, answer2 = helper(p), helper(q)
    print(answer1, answer2)
    return answer1 == answer2
def isSameTree2(p: Optional[BinaryTree], q: Optional[BinaryTree]) -> bool:
    if p is None and q is None: 
        return True
    if p is None or q is None or p.val != q.val:
        return False
    return (isSameTree2(p.left, q.left) and isSameTree2(p.right, q.right))

if __name__ == '__main__':
   p = BinaryTree(1, left=BinaryTree(2))
   q = BinaryTree(1, right=BinaryTree(2))
   print(isSameTree2(p, q))