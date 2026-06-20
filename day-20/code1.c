/*Write a program to multiply the matrices */
#include <stdio.h>

int main() {
	int r1,c1,r2,c2;//for same dimensions
	printf("enter the number of rows and columns of matrice 1: ");
	scanf("%d %d",&r1,&c1);
	int arr1[r1][c1];
	printf("enter the number of rows and columns of matrice 2: ");
	scanf("%d %d",&r2,&c2);
	int arr2[r2][c2];
	if(c1==r2) {//condtion of matrix multiplication
		int arr3[r1][c2];
		printf("elements of first matrice :\n");
		for(int i=0; i<r1; i++) {
			for(int j=0; j<c1; j++) {
				printf("enter the element in row %d column %d",i,j);
				scanf("%d",&arr1[i][j]);

			}
		}
		printf("elements of second matrice :\n");
		for(int i=0; i<r2; i++) {
			for(int j=0; j<c2; j++) {
				printf("enter the element in row %d column %d",i,j);
				scanf("%d",&arr2[i][j]);

			}

		}
		for(int i=0;i<r1;i++){
		    for(int j=0;j<c2;j++){
		        arr3[i][j]=0;
		        for(int k=0;k<c1;k++){
		            arr3[i][j]+=arr1[i][k]*arr2[k][j];
		        }
		    }
		}
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",arr3[i][j]);

            }
            printf("\n");
        }
	}
	else {
		printf("enter valid dimensions");
	}
	return 0;
}