/*Write a program to check symmetric matrix.  */
#include <stdio.h>

int main() {
	int r1,c1,s=0;//for same dimensions
	printf("enter the number of rows and columns of matrice 1: ");
	scanf("%d %d",&r1,&c1);
	int arr1[r1][c1];
	int arr2[c1][r1];

	printf("elements of first matrice :\n"); 
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			printf("enter the element in row %d column %d",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	// to find the Transpose
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++){
			arr2[j][i]=arr1[i][j];

		}
	}
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++){
			if(arr2[i][j]==arr1[i][j]){
			    s++;
			}

		}
	}
	if(s==(c1*r1))
	printf("the matrix is symmetric");
	else
	printf("the matrix is not symmetric");


	
	return 0;
}