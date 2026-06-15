/*Write a program to Rotate array left. */

#include<stdio.h>
int main() {
	int n,p;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter the position from which you want to rotate from left: ");
	scanf("%d",&p);
	int b=n;
	for(int k=0; k<p; k++) {
		int a;
		a=arr[0];
		for(int j=0; j<n-1; j++) {
			arr[j]=arr[j+1];
		}
		arr[n-1]=a;
		b--;
	}
	for(int i=0; i<n; i++) { 
		printf("\nthe elemnt️ at index %d: ",i);
		printf("%d",arr[i]);
	}
	return 0;
}