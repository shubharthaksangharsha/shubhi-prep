from typing import List
def sumArray(arr: List[int])->int:
    '''
    return the sum of the given integer list using recursive call 
    input: List[int]
    output: int
    '''
    if len(arr) == 1:
        return arr[0]    
    return arr[0] + sumArray(arr[1:])
    
arr = [1, 2, 3, 4]
print(sumArray(arr))

