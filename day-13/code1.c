/*Write a program to Count even and odd 
elements.*/
#include<stdio.h>
int main() {
	int n,even=0,odd=0;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);   
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<n; j++) {
	    if(arr[j]%2==0)
	    even++;
	    else
	    odd++;
	    
	}
	printf("\neven elements: %d",even);
	printf("\nodd elements :%d",odd);
}
