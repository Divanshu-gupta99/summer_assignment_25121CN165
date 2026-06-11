//Write a program to Recursive factorial.
#include <stdio.h>
int fact(int b);
int main() {
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	printf("the factorial of entered number: %d",fact(n));


	return 0;
}

int fact(int b) {
	int a;
	if(b<=1)
		return 1;
	else
		return b*fact(b-1);

}

