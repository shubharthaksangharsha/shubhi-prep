def duplicateZeros(arr):
    """
        Do not return anything, modify arr in-place instead.
        """
    n= len(arr)
    i=0
    #method 1
    while i < len(arr):
        if arr[i] == 0:
            arr[i+1:] = arr[i:len(arr)-1]
            i+=2
        else:
            i+=1
    #method 2
    while i < len(arr) -1:
        if arr[i] == 0:
            arr.insert(i+1,0)
            arr.pop()
            i += 2
        else:
            i += 1
arr = [1, 0, 2,3,0,4,5,0]
duplicateZeros(arr)
#output = arr  = [ 1,0,0,2,3,0,0,4,5,0,0] 


