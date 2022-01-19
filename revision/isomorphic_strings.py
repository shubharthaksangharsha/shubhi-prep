from typing import List
def isIsomorphic(s:str, t:str)->bool:
    '''
    Input: s = "foo", t = "bar"
    Output: false
    '''
    h1 , h2 = dict(), dict()
    if len(s) > len(t):
        return False
    
    for x in range(len(s)):
        if s[x] in h1:
            if h1[s[x]] != t[x]:
                return False
        elif t[x] in h2:
            return False
        h1[s[x]] = t[x]
        h2[t[x]] = True
    return True
print(isIsomorphic(input(), input()))