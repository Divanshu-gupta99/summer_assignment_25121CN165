//write a program to print largest prime factor

//write a program to print largest prime factor
#include <stdio.h>
int main()
{
	int n,a,b,c,s=0;
	printf("enter a number: ");//input a number
	scanf("%d",&n);
	printf("\nthe primefactors of number:");
	c=n;
	for(int i=2; i<=n; i++) {
		b=0;
		//for checking prime number5
		for(int j=1; j<=i;) {
			if(i%j==0) {
				b++;
			}
			//prime factors
			if(b==2) {
				while(c%i==0) {
					s=i;
					printf("%d",s);
					printf(",");
					c=c/i;
					continue;
				}
			}
			j++;


		}
	}
	printf("\nthe largest primefactor of enterd number : %d",s);
	return 0;

}

