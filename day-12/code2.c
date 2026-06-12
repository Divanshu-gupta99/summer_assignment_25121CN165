/*Write a program to Write function for 
Armstrong.  */
#include<stdio.h>
#include<math.h>
int armstrong(int a);
int main() {
	int x;
	printf("enter a numbera: ");
	scanf("%d",&x);
	armstrong(x);
	return 0;
}
int armstrong(int a) {
	int c=a,r=0,arm=0;
	while(c>0) {
		int b=c%10;
		r++;
		c=c/10;
	}
	c=a;
	while(c>0){
	    int b=c%10;
	    arm=arm+pow(b,r);
	    c=c/10;
	}
	if(a==arm)
	printf("entered number is armstrong");
	else
	printf("entered number is not armstrong");
	
	return 0;
}