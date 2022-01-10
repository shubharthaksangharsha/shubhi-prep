def isHappy(n):
    #handling corner cases
    if n == 1:
            return True 
    #Using set
    mydict = dict()
    result = 0
    while True:
        while n > 0:
            remainder = n % 10            
            result += remainder ** 2
            n //= 10 
        if result == 1:
            return True
        if result in mydict:
            return False
        mydict[result] = True
        n , result = result, 0
        #print(mydict)
n = int(input())
print(isHappy(n))
    

