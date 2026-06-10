//write a program to check wheteher a given range is prime or not
#include<stdio.h>
int main(){
    int n,n1,c=0;
    printf("enter a range");
    scanf("%d %d",&n,&n1);
    for(int i=n;i<=n1;i++){
        c=0;//to make the count zero for each iteration
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
    printf("\nNumber  %d is prime ",i);}
    
    
    

    }


}