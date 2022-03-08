#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[100];
    int i, j, k;
    int s1, s2, s3;
	   
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d", &s1);
   
    printf("Input %d elements in the array :\n", s1);
    for(i=0; i<s1; i++)
    {
	    printf("Write element %d: ", i);
	    scanf("%d", &arr1[i]);
	}

    printf("Input the number of elements to be stored in the second array :");
    scanf("%d", &s2);
   
    printf("Input %d elements in the array :\n", s1);
    for(i=0; i<s2; i++)
    {
	    printf("Write element %d: ", i);
	    scanf("%d", &arr2[i]);
	}
    
    s3 = s2 + s1;
    //inserting in third array
    for(int i=0; i<s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(j=0; j<s2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    //sorting the array in decending order

    for(i=0; i<s3;  i++)
    {
        for(k=0; k<s3-1; k++)
        {
            if(arr3[k] <= arr3[k+1])
            {
                j = arr3[k+1];
                arr3[k+1] = arr3[k];
                arr3[k] = j;
            }
        }
    }
    printf("Merge array in descending order: \n");
    for (i=0; i<s3; i++)
    {
        printf("%d", arr3[i]);
    }
    printf("\n\n");
}