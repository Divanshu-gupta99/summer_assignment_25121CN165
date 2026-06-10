//write a program to find the GCD of a number
#include<stdio.h>
int main(){
    int n,n1,c,c1,gcd;
    printf("enter the two number");
    scanf("%d %d", &n,&n1);
    for(int i=1;i<=n;i++){
        int a,b;
        c=n;
        if(c%i==0){
            a=i;
            for(int j=1;j<=n1;j++){
                c1=n1;
                if(c1%j==0){
                    b=j;
                    if(a==b)
                    gcd=a;

                }
            }

        }
    }
printf("the gcd of two number is: %d",gcd);
return 0;


}
