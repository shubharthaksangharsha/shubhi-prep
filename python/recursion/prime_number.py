def isPrimeUsingRecursion(x:int,i=2)->bool:
    #Base Case
    if x <= 2:
        return x == 2
    if x % i == 0:
        print('Inside second if')
        return False
    if i * i  > x:
        return True
    #Recursive call
    return isPrimeUsingRecursion(x, i+1)

def isPrime(x:int)->bool:
    for i in range(2,x):
        if x % i == 0:
            return False
    return True
x = int(input('Enter the number: '))
print(isPrimeUsingRecursion(x))
