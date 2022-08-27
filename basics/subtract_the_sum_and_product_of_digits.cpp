class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        int temp = n;
        while (n != 0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return (product - sum);
    }
};