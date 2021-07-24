#include<stdio.h>

void main()
{
    int n, i;

    do
    {
        i = 1;
         printf("Enter a number: \n");
         scanf("%d", &n);
         if (n == -1)
         {
             printf("Exiting the programme.");
         }
         else
         {

        do
         {
            printf("%d * %d = %d \n" , n, i, n*i);
            i += 1;
         } 
    
         while (i<=10);
         }
    } 
         
    while (n!= -1);
    

    /*do
    {
        printf("%d * %d = %d \n" , n, i, n*i);
        i += 1;
    } 
    
    while (i<=10);*/
}