#include<stdio.h>

void main()
{
    int arr[10], i, num;

    printf("Enter number of elements to store in array: \n", num);
    scanf("%d", &num);

    printf("Input %d elements in an array: \n", num);
    for(i=0; i<num; i++)
    {
        printf("Elements are: %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements stored in an array are: \n");
    for(i=0; i<num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Elemnts in reverse order are: \n");
    for ( i = num-1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    
    
    return 0;
}