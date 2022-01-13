def numJewelsInStones(jewels: str, stones: str) -> int:
    #Brute Force Approach, TC: O(N^2), SC: O(1)
#    i = 0
#    for x in stones:
#        for y in jewels:
#            if y in x:
#                i+=1
#    return i
    #HashMap Approach 
    i=0
    myhashmap = {v:i for i,v in enumerate(jewels)}
    for x in stones:
        if x in myhashmap:
            i+=1
    return i
jewels ,stones = "aA", "aAAbbbb"
print(numJewelsInStones(jewels,stones))
