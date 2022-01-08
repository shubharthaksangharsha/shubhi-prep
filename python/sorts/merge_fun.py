from typing import List

#def merge(arr1:List[int], arr2:List[int])->List[int]: #1st flavour
#    n , m = len(arr1), len(arr2)
#    i,j,k = 0, 0, 0 
#    arr = [None for _ in range(n+m)]
#    while i != n and j != m:
#        if arr1[i] <= arr2[j]:
#            arr[k] = arr1[i]
#            k+=1
#            i+=1
#        else:
#            arr[k] = arr2[j]
#            k+=1
#            j+=1
#    while j < m:
#        arr[k] = arr2[j]
#        k+=1
#        j+=1
#    while i < n:
#        arr[k] = arr1[i]
#        k+=1
#        i+=1
#    return arr

def merge(arr:List[int], left:int, mid:int, right:int)->None: #2nd flavour
    arr1, arr2 = arr[left:mid], arr[mid:right+1]
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

#arr1, arr2 = [], []
#[arr1.append(int(input())) for _ in range(int(input()))]
#[arr2.append(int(input())) for _ in range(int(input()))]
#print(arr1, arr2)
#print(merge(arr1,arr2))
arr = [1,2,3,4,2,5,7,8]
print(merge(arr,1,4,6))

