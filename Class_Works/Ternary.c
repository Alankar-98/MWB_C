//Write a programme to take a number from user and print if that number is odd or even using ternary operater.

#include<stdio.h>

void main()
{
    int a;

    printf("Please input a number: \n");
    scanf("%d", &a);

    /*if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is odd number.", a);
    }*/

    (a % 2 == 0) ? printf("%d is even number", a) : printf("%d is odd number.", a);
}