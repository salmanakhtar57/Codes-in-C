#include <stdio.h>

void main()
{
    int arr[100];
    int num, max, min, i;
	   
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &num);
   
    printf("Input %d elements in the array :\n",num);
    for(i=0; i<num; i++)
    {
	    printf("Write element %d: ", i);
	    scanf("%d", &arr[i]);
	} 
    max = arr[0];
    min = arr[0];
    for(i=1; i<num; i++) 
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
           min = arr[i];
        }
    }
     printf("Maximum element is: %d\n", max);
     printf("Minimum element is: %d\n", min);

     printf("\n\n");

}