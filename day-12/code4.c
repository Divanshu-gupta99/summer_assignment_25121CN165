/*Write a program to Write function for perfect
number.
6=1+2+3
28=1+2+4+7+14*/
#include<stdio.h>
#include<math.h>
int perfect_num(int a);
int main() {
	int n;
	printf("enter a numbera: ");
	scanf("%d",&n);
	printf("the factors of %d: ",n);
	perfect_num(n);
	return 0;

}
int perfect_num(int a) {
	int c,s=0;
	c=a;
	for(int i=1; i<=a; i++) {
		if(c%i==0) {
			printf("%d",i);
			printf(",");
			if(i!=a)
				s=s+i;
		}
	}
	if(s==a)
		printf("\nthe entered number is perfect..");
	else
		printf("the entered number is not perfect..");



	return 0;
}
