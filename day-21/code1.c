/*Write a program to Find string length 
without strlen(). */

#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string: ");
    fgets(str,100,stdin);
    puts(str);
    int c=0,i=0;
    while(str[i]>'\0'){
        c++;
        i++;
    }
    printf("%d",c-1);
    return 0;
}
