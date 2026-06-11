//Write a program to Recursive sum of digits.
#include<stdio.h>
int digit_sum(int z);

int main() {
	int n;
	printf("enter the digits :");
	scanf("%d",&n);
	printf("the sum of digits: %d",digit_sum(n));


	return 0;

}

int digit_sum(int z) {
	static int s=0;
	int a;
	if(z<=0) {
		return s;
	}
	else {


		a=z%10;
		s=s+a;

	}
	return digit_sum(z/10);

}