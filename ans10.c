// Write a program in C to copy the elements of one array into another array.Take array
// values from the user
#include<stdio.h>
int main(){
    int b[6];
    int a[6]={1,2,34,45,67,17};
    printf("Array of B contains :");
    for (int i = 0; i < 6; i++)
    {
        b[i]=a[i];
        printf(" %d",b[i]);
    }
 return 0;
}
