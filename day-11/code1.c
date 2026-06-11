/*Write a program to Write function to find sum 
of two numbers.*/
#include<stdio.h>
int sum(int a,int b);
int main(){
    int x,y;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("the sum of two numbers :%d",sum(x,y));
    return 0;
    
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}