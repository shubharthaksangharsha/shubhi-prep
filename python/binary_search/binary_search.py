from typing import List
def search_iteratively(arr: List[int], element: int) -> int:
    '''
    search element iteratively and returns the index of searched element, if element not present returns -1
    input: list of integers, integer element to be searched
    output: index of element if present else -1
    '''
    low , high = 0 , len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        guess = arr[mid]

        if guess == element:
            return mid
        if guess > element:
            high = mid - 1
        else:
            low = mid + 1            
    return -1

def search_recursively(arr: List[int],low: int, high: int, element: int) -> int:
    '''
    search element recursively and returns the index of searched element, if element not present returns -1
    input: list of integer, low integer, high integer, element to be serached
    output: index of element if present else -1
    '''
    if high >= low:
        mid = (low + high) // 2
        guess = arr[mid]
        if guess == element:
            return mid
        if guess > element:
            return search_recursively(arr, low, mid -1, element)
        return search_recursively(arr, mid+1, high, element)
    else:
        return -1
    
arr = list(map(int, input().split()))
ele = int(input())
print(search_recursively(arr,0, len(arr) -1, ele))
print(search_iteratively(arr, ele))
