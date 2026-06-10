//write a program to check wheteher a number is prime or not
#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }

    }if(c<=2){
    printf("the entered number is prime");}
    else
    printf("enterd number is  not prime");
    return 0;
    


}