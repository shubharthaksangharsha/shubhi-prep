from typing import List
def binarySearch(arr:List[int], element:int)->int:
    low , high = 0 , len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        guess = arr[mid]

        if guess == element:
            return mid
        elif guess > element:
            high = mid - 1
        else:
            low = mid + 1
            
    return -1

#arr = [9, 6, 1, 4, 5]
arr = [1, 3, 4, 2, 9, 11]
print(binarySearch(arr,2))
