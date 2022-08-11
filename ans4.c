//  Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter the value in a array:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 9; i++)
    {    int temp;
        if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
 printf(" The Biggest entry in a array is :%d",a[9]);
    return 0;
}