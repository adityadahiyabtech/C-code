#include <stdio.h>
int main (){
   
  int n;
   printf("Enter the number : ");
   scanf("%d", &n);
    if (n%2==0) {
         printf("even number\n");
     }
     else{
printf("odd number\n");
     }
     return 0;
}   

#include <stdio.h>

int main() {
    int A, B;
    char op;

    scanf("%d %d", &A, &B);
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d", A + B);
            break;

        case '-':
            printf("%d", A - B);
            break;

        case '*':
            printf("%d", A * B);
            break;

        case '/':
            printf("%d", A / B);
            break;

        case '%':
            printf("%d", A % B);
            break;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int A, B;
    char op;

    scanf("%d %d", &A, &B);
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d", A + B);
            break;

        case '-':
            printf("%d", A - B);
            break;

        case '*':
            printf("%d", A * B);
            break;

        case '/':
            printf("%d", A / B);
            break;

        case '%':
            printf("%d", A % B);
            break;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int A, B;
    char op;

    scanf("%d %d", &A, &B);
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d", A + B);
            break;

        case '-':
            printf("%d", A - B);
            break;

        case '*':
            printf("%d", A * B);
            break;

        case '/':
            printf("%d", A / B);
            break;

        case '%':
            printf("%d", A % B);
            break;
    }

    return 0;
}