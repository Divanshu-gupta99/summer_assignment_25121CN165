/*write a program to find column wise sum*/
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
        int cs;
        for(int j=0;j<c1;j++){
             cs=0;
            for(int i=0;i<r1;i++){
                cs=cs+arr1[i][j];
            }
            printf("the sum of column %d is : %d",j+1,cs);
            printf("\n");
        }


        return 0;
    }
