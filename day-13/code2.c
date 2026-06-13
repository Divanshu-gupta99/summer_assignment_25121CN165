/*Write a program to Find sum and average of 
array. */
#include<stdio.h>
int main(){
    int n,s=0;
    printf("enter the how many size you want: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){//input the number
        printf("enter the elemnt at index %d",i);
        scanf("%d",&arr[i]);}
    for(int j=0;j<n;j++){
        s=s+arr[j];
    }
    printf("the sum of elements of an array: %d",s);
    printf("\nthe average of elements of an array: %d",(s/n));
    
}