//subtract the product and sum of digits of integer
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n > 0) {
        int digit = n % 10;

        sum += digit;
        product *= digit;

        n /= 10;
    }

    return product - sum;
}
