#include <stdio.h>

void main()
{
    int arr1[100];
    int i, j, k;
    int count = 0, num;
	   
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &num);
   
    printf("Input %d elements in the array :\n",num);
    for(i=0; i<num; i++)
    {
	    printf("element: %d : ", i);
	    scanf("%d", &arr1[i]);
	} 

    printf("The unique elements in the array are: \n");
    for(i=0; i<num; i++)
    {
        count = 0;
        for (j=0, k=num; j<k+1; j++)
        {
            if(i != j)
            {
                arr1[i] = arr1[j];
                {
                    count++;
                }
            }
        }
        if(count == 0)
        {
            printf("%d", arr1[i]);
        }
    }
    printf("\n\n");
}