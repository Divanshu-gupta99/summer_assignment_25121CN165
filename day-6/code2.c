//Count set bits in a number. 
#include <stdio.h>
int main()
{
	int a=0,b=0,n,c;
	printf("enter the number in decimal: ");
	scanf("%d",&n);
	c=n;
	while(c>0){
	    if(c%2==1){
	        a++;
	    }
	    else if(c%2==0){
	        b++;
	    }
	    c=c/2;
	}
printf("the total number of bit of 1: %d",a);
printf("\nthe total number of bit of 0: %d",b);
	return 0;
}