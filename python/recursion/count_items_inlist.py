from typing import List

def countList(arr:List[int])->int:
    '''
    return the number of items in the list 
    input: List of ints
    output: int
    '''
    if not arr:
        return 0
    return 1 + countList(arr[1: ])
    
arr = [1, 2, 3, 4]
print(countList(arr))
