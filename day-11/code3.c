/*Write a program to Write function to check
prime. */
#include<stdio.h>
int prime(int a);
int main() {
	int x;
	printf("enter a numbera: ");
	scanf("%d",&x);
	prime(x);
	return 0;

}
int prime(int a) {
	int c=0;
	for(int i=1; i<=a; i++) {
		if(a%i==0)
			c++;

	}
	if(c<=2)
		printf("the entered number is prime");
	else
		printf("the entered number is not prime");
	return 0;
}