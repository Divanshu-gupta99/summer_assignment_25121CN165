/*Write a program to Reverse a string. */

#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str2[100];
    printf("enter the string: ");
    fgets(str,100,stdin);
    puts(str);
    int c=0,i=0;
    while(str[i]>'\0'){
        c++;
        i++;
    }
    for(int j=0;j<c;j++){
        str2[j]=str[c-1-j];
        ;
    }
    puts(str2);
    c=0,i=0;
    while(str[i]>'\0'){
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}
