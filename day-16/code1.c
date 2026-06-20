/*Write a program to Find missing number in
array.
{1,2,5,6}

3 and 4is missing*/

#include<stdio.h>
int main() {
	int n,b=0,f=0;
	printf("enter the how many size you want: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) { //input the number
		printf("enter the elemnt️ at index %d: ",i);
		scanf("%d",&arr[i]);

	}
	int max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("the missings number are: ");
//finding largest element  
//so that we can check number up to that number
	for(int j=1; j<=max; j++) {
		f=0;

		for(int k=0; k<n; k++) {
			if(arr[k]==j) {
				f++;
				break;
			}
		}
		if(f==0)
			printf("%d,",j);


	}

	return 0;
}

