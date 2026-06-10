//write a program to print armstrong nmber in a range
#include <stdio.h>
#include<math.h>
int main()
{ int n,n1,r=0,r1=0,c;
    printf("enter range");
    scanf("%d %d",&n,&n1);
    for(int i=n;i<=n1;i++){
        c=i;
        r=0,r1=0;
        while(c>0){
            int a;
            a=c%10;
            r++;
            c=c/10;
        }
        c=i;
        while(c>0){
            int a;
            a=c%10;
            r1=r1+pow(a,r);
            c=c/10;
            
        }
        if(r1==i)
        printf("\nthe armstrong numbers:%d",i);
    }

    return 0;
}