#include <stdio.h>
void greater (int a, int b);

int main() {
    int A, B;
    printf("Enter the 1st number: ");

    scanf("%d", &A);
    printf("Enter the 2nd number: ");
    scanf("%d", &B);
    greater(A, B);
}


    void greater (int a, int b) {
        if (a > b) {
            printf("a is bigger ." );
        } if(b<a){
            printf("b is bigger ." );

        
    }
    if (a==b) {
        printf("both are equal");
    }
}
