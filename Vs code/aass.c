#include <stdio.h> 

int main() {
   int marks;
   printf("Enter the number(0-100) : ");
   scanf("%d", &marks);
    if (marks>=0 &&marks <= 30) {
         printf("You are fail\n");
     }
     else if (marks>30 && marks <= 100) {
         printf("You are pass\n");
     }
      else {
      printf("Invalid marks\n");
     }
     return 0;
}   
 