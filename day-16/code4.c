/*Write a program to Remove duplicates from
array.*/

#include<stdio.h>//for positive element only
int main () {
	int n,n1,c=0;
	printf("how many elements you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //take the element from user
		printf("enter the element at index %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<n; j++) {
		if(arr[j]==0)
			continue;
		for(int k=j+1; k<n; k++) {
			if(arr[j]==arr[k]) {
				arr[k]=0;
			}

		}
	}
	for(int k=0; k<n; k++) {
		if(arr[k]!=0)
			c++;
	}
	int tv=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==0)
			continue;
			arr[tv]=arr[i];// to create new array without duplicates
			tv++;
		}
		
	for(int z=0;z<c;z++){
	    printf("\nthe element at index %d is : %d",z,arr[z]);
	}
	return 0;
}
