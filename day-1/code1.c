
#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        c=c+i;


    }
    printf("the sum of n nantural number %d",c);
    return 0;
}