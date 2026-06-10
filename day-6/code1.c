// //Write a program to Convert binary to decimal
#include <stdio.h>
#include<math.h>
int main()
{
	int a,b=0,n,c,r=0,i;
	printf("enter the number in binary: ");
	scanf("%d",&n);
	c=n;
	while(c>0) {
		a=c%10;
		b++;
		c=c/10;
	}
	c=n;
	i=0;
	while(c>0) {
		a=c%10;
		r=r+(a*pow(2,i));
		c=c/10;
		if(i!=(b-1)) {
			i++;
		}
	}
	printf("the decimal number is:%d",r);



	return 0;
}