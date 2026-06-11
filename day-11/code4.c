/*Write a program to Write function to find 
factorial */
#include<stdio.h>
int fac(int a);
int main() {
	int x;
	printf("enter a numbera: ");
	scanf("%d",&x);
	fac(x);
	return 0;

}
int fac(int a) {
	int c=1;
	for(int i=1; i<=a; i++) {
		c=c*i;}
		printf("the factorial of %d is:%d",a,c);
	return 0;
}
