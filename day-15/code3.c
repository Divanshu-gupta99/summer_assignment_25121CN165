/*Write a program to Rotate array right
arr[5]={1,2,3,4,5},p=2
{4,5,1,2,3}*/

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
	printf("\nenter the position from which you want to rotate from right: ");
	scanf("%d",&p);
	int b=n;
	int b1=p;
	for(int j=0; j<p; j++) {
		int a = arr[n-1];

		for(int k=n-1; k>0; k--) {
			arr[k] = arr[k-1];
		}

		arr[0] = a;
	}
	for(int i=0; i<n; i++) { 
		printf("\nthe elemnt️ at index %d: ",i);
		printf("%d",arr[i]);
	}

	return 0;
}