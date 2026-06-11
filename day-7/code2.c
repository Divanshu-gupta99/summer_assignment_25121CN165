//Write a program to Recursive Fibonacci.
#include<stdio.h>
int fib(int z);


int main() {
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("the recursive Fibonacci series : ");
    fib(n);
	return 0;
}

int fib(int z) {

	static int a=0, b=1,c=0;// static is storage class which is used
	if(z<0) {               //to remeber value for long terms
		return 1;
	}
	else {
	    printf("%d",a);
        printf(",");
		c=a+b;
		a=b;
		b=c;
		return fib(z-1);

	}

}

