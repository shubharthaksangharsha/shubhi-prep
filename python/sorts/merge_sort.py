from typing import List
def merge(arr:List[int], left:int, mid:int, right:int)->None: #2nd flavour
    arr1, arr2 = arr[left:mid+1], arr[mid+1:right+1]
    n, m = len(arr1), len(arr2)
    i,j,k = 0, 0, left
    while i != n and j != m:
        if arr1[i] <= arr2[j]:
            arr[k] = arr1[i]
            k+=1
            i+=1
        else:
            arr[k] = arr2[j]
            k+=1
            j+=1
    while j < m:
        arr[k] = arr2[j]
        k+=1
        j+=1
    while i < n:
        arr[k] = arr1[i]
        k+=1
        i+=1

def mergeSort(arr:List[int], l:int, r:int)->None:
    if l >= r:
        return
    m = (l + r) // 2
    mergeSort(arr, l, m)
    mergeSort(arr, m+1, r)
    merge(arr, l, m , r)
        
arr = [12, 11, 13, 5, 6, 7] 
n = len(arr)
print(arr)
mergeSort(arr, 0, n-1)
print(arr)
