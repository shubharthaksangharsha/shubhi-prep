from typing import List
def intersection(nums1:List[int], nums2:List[int])->List[int]:
    return list(set(nums1).intersection(set(nums2)))
nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
print(intersection(nums1, nums2))