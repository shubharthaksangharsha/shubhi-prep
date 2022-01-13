#using recursion
def factorial(x:int)->int:
    '''
    input: take int
    output: returns factorial of the given input
    '''
    if x == 1:
        return 1
    return x * factorial(x-1)
def factorial_loop(x:int)->int:
    '''
    input: take int
    output: returns factorial of the given input
    '''
    fact = 1
    for i in range(1,x+1):
        fact *= i
    return fact
n = int(input('Enter the integer till you want to find factorial: '))
for i in range(1,n):
    print(factorial(i))
    
