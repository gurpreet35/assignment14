// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10], i;
    printf("Enter the value in a array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Sorted List is :");
    for (i = 9; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }

    return 0;
}
