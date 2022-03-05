//program in C to store elements in an array and print it.
#include<stdio.h>

int main()
{
    int arr[10], i;

    printf("Enter 10 elements: \n");
    for(i=0; i<10; i++)
    {
        printf("Elements are: %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in an array are: \n");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}