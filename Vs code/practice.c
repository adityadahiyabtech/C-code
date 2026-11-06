#include <stdio.h>

int main() {
    int age = 25, salary = 50000;

    if (age >= 21) {
        if (salary >= 30000) {
            if (age < 30)
                printf("young professional");
            else
                printf("experienced professional");
        } else {
            printf("low salary");
        }
    } else {
        printf("too young");
    }

    return 0;
}
