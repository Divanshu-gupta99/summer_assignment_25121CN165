/*Write a program to Reverse array.*/

#include<stdio.h>
int main() {
	int n;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemntt at index %d: ",i);   
		scanf("%d",&arr[i]);
	}
	int b=n;
	for(int j=0;j<n-1;j++){
	    for(int k=0;k<b-1;k++){
	    int a=arr[k];
	        arr[k]=arr[k+1];
	        arr[k+1]=a;
	    }
	    b--;
	    
	}
	for(int i=0; i<n; i++) { 
		printf("\nthe elemnt️ at index %d: ",i);   
		printf("%d",arr[i]);}

	    return 0;
	}