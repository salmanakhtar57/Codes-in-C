//C program to find sum and average  of three number.

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    int sum, average;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    printf("Sum = %d", sum);

    average = sum/3;
    printf("Average = %d", average);

    return 0;

}