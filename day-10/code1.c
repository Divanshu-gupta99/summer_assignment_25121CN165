/*Write a program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
********* 

*/
#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number of rows");//assume rows=5
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("\n");
        for(int j=i-1;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
        printf("*");
        
    }
    a=a+2;//for [printing *]
        

}
}