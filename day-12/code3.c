/*Write a program to Write function for 
Fibonacci.   */
#include<stdio.h>
#include<math.h>
int fibonacci(int a);
int main() {
	int m;
	printf("enter a numbera: ");
	scanf("%d",&m);
	printf("\nthe fibonacci series: ");
	fibonacci(m);
	return 0;

}
int fibonacci(int a) {
	int x=0,y=1,z=0;
	printf("%d",x);
	printf("%d",y);
	for(int i=1;i<=a;i++){
	z=x+y;
	x=y;
	y=z;
	    printf("%d",z);
	}

	return 0;
}
