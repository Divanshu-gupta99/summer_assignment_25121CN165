/*Write a program to Write function to find
maximum. */
#include<stdio.h>
int max(int a,int b);
int main() {
	int x,y;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	max(x,y);
	return 0;

}
int max(int a,int b) {
	if(a>b)
		printf("the maximum number :%d",a);
	else if(b>a)
		printf("the maximum number: %d",b);
	else
		printf("\nthe numbers are same");

	return 0;
}