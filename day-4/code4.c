//write a program to generate fibonacci series
#include<stdio.h>
int main(){
int n=4,a=0,b=1,c=0;

printf("%d %d",a,b);
for(int i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
}
return 0;

}