from typing import List
def binarySearch(arr:List[int], start:int, end:int, element:int)->int or None:
    '''
    returns the position of the search element if found recursively else return None
    input: an integer list: List[int], starting index: int, ending index: int, element to be searched:int
    output: return position of index if found: int or return None
    '''
    if end >= start:
        mid = (start + end) // 2
        guess = arr[mid]
        if guess == element:
            return mid          
        elif guess > element:
            return binarySearch(arr, start, mid -1 , element)
        else:
            return binarySearch(arr, mid+1, end, element)
    else:
        return None    
arr = [1, 2, 3, 4, 5, 6]
print(binarySearch(arr, 0, len(arr) - 1, 1))
