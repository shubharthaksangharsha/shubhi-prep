def firstUniqChar(s):
    freq = dict()
    for x in s:
        freq[x] = freq.get(x,0) + 1
    for i,v in enumerate(s):
        if freq[v] == 1:
            return i  
    return -1            
s = input()
print(firstUniqChar(s))
