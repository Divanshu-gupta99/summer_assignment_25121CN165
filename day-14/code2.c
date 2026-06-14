/*Write a program to Frequency of an element*/
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
	for(int j=0;j<n;j++){
	    int is_duplicate = 0;
	    for(int m=0; m<j; m++) {
	        if(arr[j] == arr[m]) { 
	            is_duplicate = 1; break; }
	    }
	     if(is_duplicate == 1) continue; 
	    int f=0;
	    for(int k=0;k<n;k++){
	        if(arr[j]==arr[k])
	        f++;
	   
	    }
	    printf("\nthe frequency of %d is : %d",arr[j],f);
	}

	
	return 0;

}