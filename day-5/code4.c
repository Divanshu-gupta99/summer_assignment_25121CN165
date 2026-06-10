//write a program ro check wheter a number is perfect or not
//6=1+2+3, 28=1,2,4,7,14
#include <stdio.h>

int main()
{
	int n,s=0;
	printf("enter a number: ");//input a number
	scanf("%d",&n);
	//to check perfect number
	printf("the factors of enterd number:");
	for(int i=1; i<=n; i++) {
		int a;
		if(n%i==0) {
			a=i;
			printf("%d ",a);
			if(n!=i) {
				s+=a;
			}
		}
	}
	if(s==n) {
		printf("\nentered number is perfect");
	}
	else {
		printf("\nentered number is not perfect");
	}
	return 0;
}