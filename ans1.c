// Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the value in a array:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of numbers stored in a array is :%d",sum);
    return 0;
}