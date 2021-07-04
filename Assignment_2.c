#include<stdio.h>
int main()

{
    int n1, n2, result=0;
    char ch;

    printf("Enter two numbers: \n");
    scanf("%d%d" , &n1, &n2);

    printf("Enter an operatpor: \n");
    scanf("%c", &ch);

    switch (ch)
    {
    case '+':
        result = n1 + n2;
        printf("The sum is: %d", result);
        break;

    case '-':
        result = n1 - n2;
        printf("The substraction is: %d", result);
        break;
    
    case '*':
        result = n1 * n2;
        printf("The multiplication is: %d", result);
        break;
    
    case '/':
        result = n1 / n2;
        printf("The division is: %d", result);
        break;
    
    case '%':
        result = n1 % n2;
        printf("The modulus is: %d", result);
        break;

    default:
        printf("The entered operator / character is out of range.");
        break;
    }

    do
    {
        switch (ch);
    } 
    
    while (ch != 'e');
    
}