#include<stdio.h>
int main(){
    int n,c=1;
    printf("enter a number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        c=c*i;
    }
    printf("the factorial of %d is : %d",n,c);
    return 0;

}