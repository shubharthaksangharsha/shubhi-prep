from typing import List
def isValidSudoku(board: List[List[str]]) -> bool:
    myhashset = set()
    for i in range(len(board)):
        for j in range(len(board)):
            if board[i][j] != '.':
                cur = board[i][j]
                if (i,cur) in myhashset or (cur,j) in myhashset or (i//3,j//3,cur) in myhashset:
                    return False
                myhashset.add((i,cur))
                myhashset.add((cur,j))
                myhashset.add((i//3, j//3, cur))
    return True    
                
mylist= [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
print(isValidSudoku(mylist))
