from typing import List
def happyNumber(n: int)->bool:
    sum,digit,myhashset = 0,0,set()
    while True:
        while n > 0:
            digit= n%10
            sum+=digit**2
            n //=10
        if sum == 1:
            return True
        if sum in myhashset:
            return False
        myhashset.add(sum)
        n = sum 
        sum = 0
n = int(input())
print(happyNumber(n))