//factorial
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
#include <stdio.h>

int main(){
	
	int l,r,k;
	int count=0;

	scanf("%d %d %d", &l,&r,&k);
	 
	 for (int i=1;i <=r;i++){
		if (i%k ==0){
			count++;
		}
	 }
	 printf("%d\n",count);
	 return 0;
}
