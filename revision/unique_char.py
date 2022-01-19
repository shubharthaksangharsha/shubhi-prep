from typing import List
def firstUniqueChar(s:str)->int:
    '''
    Using HASHMAP
    s = "leetcode"
    l: 1
    e: 3
    t: 1
    c: 1
    o: 1
    d: 1
    '''
    # mydict = dict()
    # for x in s:
    #     mydict[x] = mydict.get(x, 0) + 1
    # for i, v in enumerate(s):
    #     if mydict[v] == 1:
    #         return i
    # return -1
    '''
    using fixed array
    s = "leetcode"
    count = bucket of 26 letters: [0 0 1 0 2 0 0 0 0 0 0 1 0 ] 
                                   a b c d e f g h i j k l       
    iterate through the string
    for i in range(len(nums)):
        c = ord(nums[i]) - ord('a')
        if count[c] == 1:
            return i
    return -1
    '''
    count = [0] * 26
    for x in s:
        count[ord(x) - ord('a')]+=1
    print(count)
    for i in range(len(s)):
        if count[ord(s[i]) - ord('a')] == 1:
            return i
    return -1      
    
print(firstUniqueChar(input()))
