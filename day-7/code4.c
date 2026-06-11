//Write a program to Recursive reverse number.
#include<stdio.h>
#include<math.h>
int digit_rev(int z,int y);

int main() {
	int n,co,c=0;
	printf("enter the digits :");
	scanf("%d",&n);
	co=n;
	while(co>0){
	    int d=0;
	    d=d%10;
	    c++;
	    co=co/10;
	}
	printf("the reverse of digits: %d",digit_rev(n,c));
	return 0;
}

int digit_rev(int z,int y) {
    static int r=0;
    int a;
	if(z<=0) {
		return r;
	}
	else if(y<=0){
	    return r;
	}
	else {
	    a=z%10;
	    r=r+(a*(pow(10,y-1)));
		return digit_rev(z/10,y-1);

	}

}