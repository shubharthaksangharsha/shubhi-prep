from typing import List
def minFunc(arr:List[int], start:int, stop:int)->tuple:
    '''
    input : takes a integer list and any integer starting, stopping index  from the list
    output: return min_element and min_index as tuple
    '''
    min_element = arr[start]
    min_index = start
    while start != stop:
        if arr[start] <= min_element:
            min_element = arr[start]
            min_index = start
        start += 1
    return min_element,min_index

def selectionSort(arr:List[int])->List[int]:
    '''
    return a sorted array in ascending order 
    input : integer list
    output : sorted integer list 
    '''
    result = []
    for i in range(len(arr)):
        _, min_index = minFunc(arr,0,len(arr))
        result.append(arr.pop(min_index))
    return result
arr = [6,5,5,3,2,1,1,0]
print(selectionSort(arr))
