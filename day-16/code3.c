/*Write a program to Find pair with given sum
{2, 4, 7, 9, 1}
targeted =11
pair =(1,9)*/

#include<stdio.h>//for positive element only
int main () {
	int n,n1;
	printf("how many elements you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //take the element from user
		printf("enter the element at index %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\ntell me the targeted element : ");
	scanf("%d",&n1);
	printf("\nthe pairs are : ");
	for(int j=0; j<n; j++) {
	    for(int k=j+1;k<n;k++){// j=k+1 is to remove dupliacte pairs like (1,2)and (2,1)
	        if((arr[j]+arr[k])==n1){
	            printf(",(%d,%d)",arr[j],arr[k]);//for each and every pair
	        }
	        
	    }
	}
	return 0;
}

