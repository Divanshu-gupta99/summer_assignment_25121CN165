//write a progeram to check armstrong number
#include<stdio.h>
int main(){
    int n,c1=0,r=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int c=n;
    while(c>0){
        int a;
        a=c%10;
        c1++;
        c=c/10;
    }
    printf("the total no. of digits %d",c1);
    c=n;
    while(c>0){
        int a;
        a=c%10;
        r=r+(pow(a,c1));
        c=c/10;
    }
    if(r==n){
        printf("\nthe entered number is armstrong number");
    }
    else{
        printf("\nthe entered number is not armstrong");
    }

    return 0;
}