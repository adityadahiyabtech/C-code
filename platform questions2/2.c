//beatiful days at movies
//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include <stdio.h>
#include <stdlib.h>

int reverse(int n)
{
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int day = i; day <= j; day++)
    {
        int rev = reverse(day);

        if (abs(day - rev) % k == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int i, j, k;

    scanf("%d %d %d", &i, &j, &k);

    int result = beautifulDays(i, j, k);

    printf("%d\n", result);

    return 0;
}
