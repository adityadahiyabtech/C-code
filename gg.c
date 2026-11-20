#include <stdio.h>

float convertTemp(float celcius);

int main() {
    float far=convertTemp(36);
   printf("far : %f",far);
    return 0;
}

float convertTemp(float celcius){
    float far= (celcius*9.0/5)+32;
    return far;
}