//write a program to print factors of a number
#include <stdio.h>
int main()
{
	int n,s=0,b,c;
	printf("enter a number: ");//input a number
	scanf("%d",&n);
	printf("the factors of number: ");
	//to print factors of a number
	for(int i=1;i<=n;i++){
	    if(n%i==0){
	    printf("%d",i);
	    printf(",");
	        
	    }
	}

	return 0;

}
