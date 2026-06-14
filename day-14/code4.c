/*Write a program to Find duplicates in array.
arr[5]={1,2,3,2,3}
duplicate s elements 2,3*/

#include<stdio.h>
int main() {
	int n;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);   
		scanf("%d",&arr[i]);
	}
	printf("the duplicate elemnets: ");
	for(int j=0;j<n;j++){
	    int dupli=0;
	    for(int m=0;m<j;m++){
	        if(arr[j]==arr[m]){
	        dupli++;
	        break;}}
	   if(dupli >=1){
	       printf(",");
	       printf("%d",arr[j]);
	       
	   }
	    }
	    return 0;
	}

