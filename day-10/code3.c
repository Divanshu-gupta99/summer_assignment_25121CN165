/*
Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321 
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
        printf("%c",'A'+k-1);}
        for( int m=b-1;m>=0;m--){
            if(m==0)
            break;
            else
            printf("%c",'A'+m-1);
        }
        
    

    a=a+2;
    b+=1;        
    printf("\n");

}
return 0;
}