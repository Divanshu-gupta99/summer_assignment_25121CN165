/*
Write a program to Print character pyramid.
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA 
*/
#include<stdio.h>
int main(){
    int n,a=1,b=1;
    printf("enter the number of rows");//assume rows=5
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        
        for(int k=1;k<=(1+(a/2));k++){
        printf("%d",k);}
        for( int m=b-1;m>=0;m--){
            if(m==0)
            break;
            else
            printf("%d",m);
        }
        
    

    a=a+2;
    b+=1;        
    printf("\n");

}
return 0;
}