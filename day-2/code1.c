 //program 1
//Write a program to Find sum of digits of a number. 
#include<stdio.h>
#include<math.h>
int main(){
    int n,c,r=0,a,r1=0;
    printf("enter the number");
    scanf("%d",&n);

    c=n;
    while(c>0){
        int b;
        b=c/10;
        r=r+1;
        c=b;

    }
    printf("the entered number is:-%d",n);
    printf("\nthe number of digits are :- %d",r);
    a=r;
    c=n;
    for (int i = a; i > 0; i--) {
        int b = (int)pow(10, i - 1);  // 10^(i-1)
        int b1 = c / b;            // leftmost digit
        r1 = r1 + b1;                    // add digit to sum
        c = c % b;                    // remove that digit
    
    }
printf("\nthe sum of enter digits are :-%d",r1);
return 0;

}

