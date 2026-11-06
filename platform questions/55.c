//find digits
//https://www.hackerrank.com/challenges/find-digits/problem
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, temp, count = 0;

        scanf("%d", &n);
        temp = n;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit != 0 && n % digit == 0) {
                count++;
            }

            temp = temp / 10;
        }

        printf("%d\n", count);
    }

    return 0;
}
