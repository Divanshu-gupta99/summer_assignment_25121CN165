//Write a program to Convert lowercase to 
//uppercase. 
#include <stdio.h>
#include <string.h>
#include <ctype.h> //for toupper functions

int main() {
    char str[100];
    
    printf("enter the string in lowercase: ");
    fgets(str, 100, stdin);
    
    int i = 0;
    while(str[i] != '\0') {
        str[i] = toupper(str[i]); 
        i++;
    }
    printf("Uppercase string: ");
    puts(str);
    
    return 0;
}