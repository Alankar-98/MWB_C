#include<stdio.h>
int main()

{
    int a, b, c, d, e, f, g;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);

    c = a + b;
    d = a - b;
    e = a / b;
    f = a * b;
    g = a % b;

    printf("The sum of two numbers is: %d \n", c);
    printf("The abstraction of two numbers is: %d \n", d);
    printf("The division of two numbers is: %d \n", e);
    printf("The multiplication of two numbers is: %d \n", f);
    printf("The modulus of two numbers is: %d", g);

    return 0;
}