/*Write a program to Find row-wise sum. */
 #include <stdio.h>

int main() {
	int r1,c1;
	printf("enter the number of rows and columns of matrice 1: ");
	scanf("%d %d",&r1,&c1);
	int arr1[r1][c1];

	
		printf("elements of first matrice :\n");
		for(int i=0; i<r1; i++) {
			for(int j=0; j<c1; j++) {
				printf("enter the element in row %d column %d : ",i,j);
				scanf("%d",&arr1[i][j]);
			}
		}
        int rs;
        for(int i=0;i<r1;i++){
             rs=0;
            for(int j=0;j<c1;j++){
                rs=rs+arr1[i][j];
            }
            printf("the sum of row %d is : %d",i+1,rs);
            printf("\n");
        }


        return 0;
    }
