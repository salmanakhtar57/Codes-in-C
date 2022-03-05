/*#include<stdio.h>
#define N 3

int main()
{
    int arr[N];
    int i, sum = 0;
    float average;
    
    printf("Enter %d integer number: \n", N);
    for(int i=0; i<N; i++);
    scanf("%d", &arr[i]);

    for(int i=0; i<N; i++)
    {
        sum = sum + arr[i];
    }

    average = sum / (float)N;

    printf("\nSum of %d numbers: %d\n", N, sum);
    printf("\nAverage of %d numbers:  %d\n", N, average);

    return 0;   
}
 */
#include<stdio.h>  

void main ()  
{  
    int x = 10, y = 2;  
    while(x+y-1)  
    {  
        printf("%d %d",x--,y--);  
    }  
}  