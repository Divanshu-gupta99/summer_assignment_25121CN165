/*Write a program to Move zeroes to end.
Input: [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]*/

#include<stdio.h>
int main() {
	int n,b=0;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);
		scanf("%d",&arr[i]);

	}
	b=n;
	for(int j=0; j<b; j++) {
		int a;
		if(arr[j]==0) {
			for(int k=j; k<n-1; k++) {
				arr[k]=arr[k+1];
				
			}
			arr[n-1]=0;
			b--;
			j--;


		}

	}

	for(int i=0; i<n; i++) {
		printf("\nthe elemnt️ at index %d: ",i);
		printf("%d",arr[i]);
	}

	return 0;
}