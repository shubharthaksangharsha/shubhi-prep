from optparse import Option
from typing import Optional
from isSameTree import BinaryTree

def helper(left: Optional[BinaryTree], right: Optional[BinaryTree]) -> bool:
    if left is None or right is None:
        return left == right
    if left.val != right.val:
        return False
    return helper(left.left, right.right) and helper(left.right, right.left)
     
def isSymmetric(root: Optional[BinaryTree]) -> bool:
    return root and helper(root.left, root.right)

root = BinaryTree(1, left=BinaryTree(2, right=BinaryTree(3)), right=BinaryTree(2, right=BinaryTree(3)))
print(isSymmetric(root))