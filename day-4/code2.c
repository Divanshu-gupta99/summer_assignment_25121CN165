//write a program to find nth fibonacci series
#include<stdio.h>
int main(){
    int n,a=0,b=1,c=0;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    printf(" %d ",c);
}


    return 0;
}