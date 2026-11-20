#include <stdio.h>

void printHello();

int main() {
    printHello();
    return 0;
}

void printHello() {
    printf("Hello, World!\n");
}

#include<stdio.h>

int sum(int a, int b);
printf("Enter first number: ");
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = sum(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}