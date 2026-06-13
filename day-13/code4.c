/*Write a program to Input and display array. */
#include<stdio.h>
int main(){
    int n;
    printf("enter the how many size you want: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){//input the number
        printf("enter the elemnt at index %d",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){//printing the element
        printf("\nthe elemnet at index %d is: %d",j,arr[j]);
    }
    
}
