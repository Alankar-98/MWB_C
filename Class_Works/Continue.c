#include<stdio.h>
void main()

{
    int n = 15, i=1;

    while (i<=n)
    {
        if (i % 3 == 0)
        {
            i += 1;
            continue;
        }
        printf("%d \n", i);
        
        i += 1;
    }
}