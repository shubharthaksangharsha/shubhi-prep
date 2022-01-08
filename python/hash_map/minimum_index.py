def findRestraunt(list1, list2):
    #By Shubharthak
    dic1 = {v: i for i,v in enumerate(list1)}
    dic2 = {v: i for i,v in enumerate(list2)}
    dic3 = {}
    for v,i in dic2.items():
        if v in dic1:           
            dic3[v] = dic1[v] + dic2[v]
    return [i for i,v in dic3.items() if v == min(dic3.values())]
#list1 = []
#[list1.append(input()) for _ in range(int(input()))]
#list2 = []
#[list2.append(input()) for _ in range(int(input()))]
list1= ["Shogun","Tapioca Express","Burger King","KFC"]
list2=["KFC","Burger King","Tapioca Express","Shogun"]
print(findRestraunt(list1,list2))
