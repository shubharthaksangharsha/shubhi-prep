def isIsomorphic(s,t):
    #Handling Corner Case
    if len(s) != len(t):
        return False
    h1 ,h2 = {}, {}
    for i in range(len(s)):
        if s[i] in h1:
            if h1[s[i]] != t[i]:
                return False
        elif t[i] in h2:
            return False
        h1[s[i]] = t[i]
        h2[t[i]] = True
    return True
s = input()
t = input()
print(isIsomorphic(s,t))
