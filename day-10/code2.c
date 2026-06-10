/*
Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * 
*/

#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number of rows");//assume rows=5
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=-1;
        printf("\n");
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int m=i;m<=n;m++){
            a+=2;

        }
        for(int k=1;k<=a;k++){
        printf("*");
        
    }
        

}
}