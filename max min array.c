#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100];
    int max, min, num, i;

    printf("Enter size of array: ");
    scanf("%d", &num);

    printf("Enter elements of array: ");
    for(int i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];

    for (int i=0; i<num; i++)
    {
        if (min > arr[i])
            min = arr[i];
        else if (max < arr[i])
            max = arr[i];
        
    }
        printf("Minimim no is: %d\n", min);
            printf("Maximim no is: %d", max);
    
    return 0;
}