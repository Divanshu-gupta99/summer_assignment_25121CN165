//program 3
//Write a program to Find product of digits.
#include<stdio.h>
int main(){
     int n,p1=1;
    printf("enter a number:- ");
    scanf("%d",&n);
    int c=n;
    while(c>0){
        int b;
        b=c%10;
        p1=p1*b;
        c=c/10;

}
printf("the products of digits are :-%d",p1);
return 0;

}