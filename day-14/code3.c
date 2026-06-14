/*Write a program to Find second largest
element.*/
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
	int s=arr[0],l=arr[0],l2=arr[0];
	for(int j=0; j<n; j++) {
		int l1=0;
		l1=arr[j];
		if(l<l1) {
			l=l1;
		}
		if(s>l1)
			s=l1;}
			l2=s;
	for(int k=1;k<n;k++){
	    int l1=arr[k];
	    if(l2<l1 &&l1<l)
	    l2=l1;
	}

	printf("\nthe second largest element :%d",l2);

}
