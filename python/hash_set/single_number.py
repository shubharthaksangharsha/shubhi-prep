def singleNumber(nums):
    #method1 With extra space: return 2*sum(set(nums))- sum(nums)
    
    #method2 : Without Extra space
    res=0
    for x in nums:
        res^=x
    return res
nums =[]
[nums.append(int(input())) for x in range(int(input()))]
print(singleNumber(nums))
#[4,1,1,2,2,3,3]
#Some Important Properties of XOR function :-
'''
XOR is a binary operation, it stands for "exclusive or", that is to say the resulting bit evaluates to one if only exactly one of the bits is set.

This is its function table:

a | b | a ^ b
--|---|------
0 | 0 | 0
0 | 1 | 1
1 | 0 | 1
1 | 1 | 0

This operation is performed between every two corresponding bits of a number.

Example: 7 ^ 10
In binary: 0111 ^ 1010

  0111
^ 1010
======
  1101 = 13
if you XOR any same number together, you cancel it out (=0).
For example:
nums = [2,4,5,4,3,5,2]
XORing everything together
= 2 ^ 4 ^ 5 ^ 4 ^ 3 ^ 5 ^ 2
= (2^2) ^ (4^4) ^ (5^5) ^ 3
= 0 ^ 0 ^0 ^ 3
= 3
and XOR any number with 0 will give that number itself 
for example :-
3 ^ 0 = 3
