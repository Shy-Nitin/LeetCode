class Solution {
public:

    int mul(int n){
        int product = 1;
        while(n>0){
            int digit = n%10; 
            product *= digit;
            n /= 10;
        }
        return product;
    }

    int smallestNumber(int n, int t) {
        while (mul(n) % t) n++;
        return n;
    }
};
