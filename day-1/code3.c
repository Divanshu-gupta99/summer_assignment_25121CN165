
#include<stdio.h>
int main(){
    int n,c,r=0;
    printf("enter a number");
    scanf("%d",&n);
    c=n;
    while(c>0)
    {int a;
        a=c%10;
        r=r+1;
        c=c/10;
        }
        printf("\nthe number of entered digits : %d",r);
        return 0;
}