//array rotation
//https://www.hackerearth.com/problem/algorithm/array-rotation-c21f93eb/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    k = k % n;

    for (int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
