def intersect(nums1, nums2):
    answer = []
    freq = {}    
    for x in nums1:
        freq[x] = freq.get(x,0) + 1        
    for x in nums2:
        if freq.get(x) != None and freq.get(x) > 0:
            answer.append(x)
            freq[x] = freq.get(x) - 1
    return answer

#nums1, nums2 = [] , []
#nums1 = [nums1.append(int(input())) for x in range(int(input()))]
#nums2 = [nums2.append(int(input())) for x in range(int(input()))]
nums1 = [1,2,2,1]
nums2 = [2]
nums3 = [4,9,5]
nums4 =  [9,4,9,8,4]
print(intersect(nums1,nums2))

         

