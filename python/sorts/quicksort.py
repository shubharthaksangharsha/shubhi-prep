from typing import List
def quickSort(arr:List[int])->List[int]:
    '''
    returns the sorted input list of integers in the ascending order
    input: List[int]
    output: List[int] : sorted in ascending order
    '''
    if len(arr)  < 2:
        return arr
    else:
        pivot = arr[0]
        less = [x for x in arr[1:] if x <= pivot]
        greater = [x for x in arr[1:] if x > pivot]
        return quickSort(less)+ [pivot] + quickSort(greater)
        
arr = [5, 4, 3, 2, 1, 0]
print(quickSort(arr))
