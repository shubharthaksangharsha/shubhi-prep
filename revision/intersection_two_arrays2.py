from typing import List
def intersect(nums1:List[int], nums2:List[int])->List[int]:
    freq1 , freq2, res = dict(), dict(), []
    for x in nums1:
        freq1[x]  = freq1.get(x, 0) + 1
    for y in nums2:
        freq2[y]  = freq2.get(y, 0) + 1
    print(freq1, freq2)
    for k , v in freq1.items():
        if k in freq2:
            s = min(freq1.get(k), freq2.get(k))
            for i in range(s):
                res.append(k)
    return res
nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
print(intersect(nums1, nums2))