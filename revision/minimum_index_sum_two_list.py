from typing import List
def findRestaurant(list1:List[int], list2:List[int])->List[int]:
    '''
    Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["KFC","Shogun","Burger King"]
    Output: ["Shogun"]
    Explanation: The restaurant they both like and have the least index sum is "Shogun" with index sum 1 (0+1).
    '''
    dict1,dict2,dict3 = {}, {}, {}
    dict1 = {v:i for i,v in enumerate(list1)}
    dict2 = {v:i for i,v in enumerate(list2)}
    print(dict1)
    print(dict2)
    for v,i in dict2.items():
        if v in dict1:
            dict3[v] = dict1[v] + dict2[v]
    print(dict3)
    return [i for i,v in dict3.items() if v == min(dict3.values())]
    
# list1 = list(map(int, input().split()))
# list2 = list(map(int, input().split()))
list1 = ["Shogun","Tapioca Express","Burger King","KFC"]
list2 = ["KFC","Shogun","Burger King"]
print(findRestaurant(list1,list2))