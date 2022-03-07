#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[100];
    int i, j, num;
    int mm = 1, count = 0;
	   
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &num);
   
    printf("Input %d elements in the array :\n",num);
    for(i=0; i<num; i++)
    {
	    printf("element: %d : ", i);
	    scanf("%d", &arr1[i]);
	} 
    //Copy elements to other array
    for(i=0; i<num; i++)
    {
        arr2[i] = arr1[i];
        arr3[i] = 0;
    }
    //mark the duplicate elements
    for(i=0; i<num; i++)
    {
        for (j=0; j<num; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr3[j] = mm;
                mm++;
            }
        }
        mm = 1;
    }
    //printint the elements
    
    for(i=0; i<num; i++)
    {
        if(arr3[i] == 2)
        {
            count++;
        }
    }
     printf("Duplicates elements in an array are: %d\n", count);

     printf("\n\n");

}