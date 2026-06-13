/*Write a program to Find largest and smallest
element.*/
#include<stdio.h>
int main() {
	int n,s=0,l=0;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);   
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<n; j++) {
		int l1=0;
		l1=arr[j];
		if(l<l1) {
			l=l1;
			s=l;
		}
		if(s>l1)
			s=l1;



	}
	printf("\nthe largest element :%d",l);
	printf("\nthe smallest element :%d",s);
}

