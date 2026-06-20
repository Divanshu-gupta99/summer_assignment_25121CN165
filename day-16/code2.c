/*Write a program to find maximum frequency element.
{1,1,2,3,4,5,5,5,6,5}*/
#include<stdio.h>

int main () {
	int n,check=0,max=0,elem=0;
	printf("how many elements you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		printf("enter the element at index %d: ",i);
		scanf("%d",&arr[i]);
}
	int dupli=0;
	//for duplicate rows
	for(int j=0; j<n; j++) {
		int f=0;
		dupli=0;
		for(int m=0; m<j; m++) {
			if(arr[j]==arr[m]) {
				dupli++;
				break;
			}
		}
		if(dupli==1) {
			continue;
		}
		for(int k=0; k<n; k++) {
			if(arr[j]==arr[k]) {
				f++;
			}
		}
		printf("\nthe frequency of %d is: %d",arr[j],f);
		check=f;
		if(check>max){
		    max=check;
		    elem=arr[j];
		}
	}
	printf("\nthe maximum frequncy %d is: %d",elem,max);
	return 0;
}