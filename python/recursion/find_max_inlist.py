from typing import List
def Max(arr: List[int])->int:
    '''
    returns the maximum element in the given integer list
    input : List[int]
    output: int    
    '''
    if len(arr) == 0:
        return None
    if len(arr) == 1:
        return arr[0]
    
    return arr[0] if arr[0] > Max(arr[1:]) else Max(arr[1:])
arr = [8, 3, 4, 2]

print(Max(arr))
