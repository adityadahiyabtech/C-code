//count the digits that divide a number
//https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
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
