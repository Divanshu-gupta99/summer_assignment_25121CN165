//program 2
//Write a program to Reverse a number. 
#include<stdio.h>
int main(){
    int n,r1=0;
    printf("enter a number:- ");
    scanf("%d",&n);
    int c=n;
    while(c>0){
        int a ,b;
        b=c/10 ;
        a=c%10;
        r1=(r1*10)+a;
        c=b;   }
        printf("the reversed number is :-%d",r1);//for reversing the digits
        return 0;
}
