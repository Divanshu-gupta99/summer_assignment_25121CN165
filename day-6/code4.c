//Write a program to Convert decimal to binary
#include <stdio.h>
int main()
{
	int a,b,n;
	printf("enter the number in decimal: ");
	scanf("%d",&n);
	int c=n;
	printf("the binary number :");
	while(c>0){
	    int a;
	    a=c%2;
	    printf("%d",a);
	    c=c/2;
	}
return 0;
}