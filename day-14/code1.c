/*Write a program to Linear search. */
#include<stdio.h>
int main() {
	int n,s;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter the element to be serached: ");
	scanf("%d",&s);
	for(int j=0; j<n; j++) {
		if(arr[j]==s) {
			printf("element found..");
			printf("\nthe searched element found at index : %d",j);
			break;
			
		}
		else if(n-1==j)
		printf("\nenter valid element..");

	}
	return 0;

}

