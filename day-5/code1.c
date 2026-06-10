//write a program ro check wheter a number is strong or not
//145=1!+4!+5!
#include <stdio.h>
int main()
{
	int n,s=0,b,c;
	printf("enter a number: ");//input a number
	scanf("%d",&n);
	c=n;
	while(c>0) {
		int a;
		a=c%10;//extract every digit
		b=1;
		for(int i=1; i<=a; i++) {          //for factorial
			b=b*i;
		}
		s+=b; //add factorial of each digit
		c=c/10;
	}
	if(s==n) {
		printf("\nentered number is strong");
	}
	else
		printf("\nentered number is not strong");
	return 0;

}


