#include<stdio.h>
#include<conio.h>
int main()

{
    int n1, n2, num, result=0;

    printf("Enter two numbers: \n");
    scanf("%d%d" , &n1, &n2);

    do
    {
        printf("Enter an operatpor: \n");
    scanf("%d", &num);
    //printf("%d \n", num);

    switch (num)
    {
    case 1:
        result = n1 + n2;
        printf("The sum is: %d \n", result);
        break;

    case 2:
        result = n1 - n2;
        printf("The substraction is: %d \n", result);
        break;
    
    case 3:
        result = n1 * n2;
        printf("The multiplication is: %d \n", result);
        break;
    
    case 4:
        result = n1 / n2;
        printf("The division is: %d \n", result);
        break;
    
    case 5:
        result = n1 % n2;
        printf("The modulus is: %d \n", result);
        break;

    default:
        if (num != -1)
        {
            printf("The entered operator / character is out of range. Please enter a digit within 1-5 or -1 to exit. \n");
        }
        else
        {
            printf("Exiting the programme.");
        }
        break;
    }
    } 
    while (num != -1);
}