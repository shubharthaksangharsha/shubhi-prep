from typing import Optional
from isSameTree import BinaryTree
def helper(root: Optional[BinaryTree], currentSum: int, targetSum: int) -> bool:
    if root is None:
        return False
    currentSum += root.val
    if root.left is None and root.right is None:
        return currentSum == targetSum
    return helper(root.left, currentSum, targetSum) or helper(root.right, currentSum, targetSum)

def hasPathSum(root: Optional[BinaryTree], targetSum: int) -> bool:
    return helper(root, 0, 22)

root = BinaryTree(5, left=BinaryTree(4,left=BinaryTree(11, left=BinaryTree(7), right=BinaryTree(2)), right=BinaryTree(8,left=BinaryTree(13), right=BinaryTree(4,right=BinaryTree(1)))))
print(hasPathSum(root, 22))