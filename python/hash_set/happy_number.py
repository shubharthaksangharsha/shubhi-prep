def isHappy(n):
    #handling corner cases
    if n >= 0 and n <= 10:
        if n == 7 or n == 1 or n == 10:
            return True 
        return False
    #Using set
    myset = set()
    result = 0
    while True:
        while n > 0:
            remainder = n % 10            
            result += remainder ** 2
            n //= 10 
        if result == 1:
            return True
        if result in myset:
            return False
        myset.add(result)
        n , result = result, 0

#n = int(input())
for x in range (11):
    print(isHappy(x))
    

