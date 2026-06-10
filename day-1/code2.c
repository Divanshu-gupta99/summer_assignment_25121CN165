#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the multiplication table of %d is:",n);
    for (int i=1;i<=10;i++){
        printf("\n%d * %d = %d",n,i,n*i);
    }
    printf("\nthe table is printed");
    return 0;
}