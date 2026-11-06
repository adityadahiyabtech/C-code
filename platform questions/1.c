//Read from STDIN,write to stdout
//https://www.hackerearth.com/submission/132669854/
#include <stdio.h>

int main() {
    int N;
    char S[1000];

    scanf("%d", &N);
    scanf("%999s", S);

    printf("%d\n", N * 2);
    printf("%s\n", S);

    return 0;
}
