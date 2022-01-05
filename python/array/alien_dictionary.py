def isAlienSorted(words, order):
    #Approach 1 : Time complexity : O(nk), Space complexity : O(1)        
    mydict = {x:i for i,x in enumerate(order)}
    '''
        0:make  alien dictionary
        1:def alien_ord
        2:def gt_alien
    '''
    print(mydict)
    def alien_ord(c: str) -> int:
        return mydict[c]
    
    def gt_alien(s1: str, s2: str) -> bool:
        i, j = 0, 0
        while i < len(s1) and j < len(s2):
            if alien_ord(s1[i]) > alien_ord(s2[j]):
                return True
            if alien_ord(s1[i]) < alien_ord(s2[j]):
                return False
            i += 1
            j += 1
            return len(s1) > len(s2)
    i = 0
    while i < len(words) - 1:
        if gt_alien(words[i], words[i+1]):
            return False
        i += 1            
    return True
order='abcdefghijklmnopqrstuvwxyz'
words =[]
[words.append(input()) for i in range(int(input()))]
print(isAlienSorted(words, order))
 
