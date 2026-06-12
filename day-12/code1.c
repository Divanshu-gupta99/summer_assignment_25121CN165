/*Write a program to Write function for
palindrome.  */
#include<stdio.h>
#include<math.h>
int palindrome(int a);
int main() {
	int x;
	printf("enter a numbera: ");
	scanf("%d",&x);
	palindrome(x);
	return 0;

}
int palindrome(int a) {
	int c=a,r=0,p=0;
	while(c>0) {
		int b=c%10;
		r++;
		c=c/10;
	}
	c=a;
	while(c>0){
	    int b=c%10;
	    p=p+(b*pow(10,r-1));
	    r--;
	    c=c/10;
	}
	if(a==p)
	printf("number is palindrome");
	else
	printf("number is not palindrome");
	
	return 0;
}

