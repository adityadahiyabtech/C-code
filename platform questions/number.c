//Number Line Jumps
//https://www.hackerrank.com/challenges/kangaroo/problem
#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        return (x1 == x2) ? "YES" : "NO";
    }

    if ((x2 - x1) % (v1 - v2) == 0 &&
        (x2 - x1) / (v1 - v2) >= 0) {
        return "YES";
    }

    return "NO";
}

int main() {
    int x1, v1, x2, v2;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    printf("%s\n", kangaroo(x1, v1, x2, v2));

    return 0;
}
