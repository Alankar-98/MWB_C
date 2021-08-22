#include<stdio.h>
void main()

{
    int n = 15, i=1;

    while (i<=n)
    {
        if (i % 3 == 0)
        {
    //        i += 1;
            goto Incriment_I;
        }
        printf("%d \t", i);
        
        Incriment_I: i += 1;
    }
}
//Output: 1 2 4 5 7 8 10 11 13 14
//Output: 1 2 4 5 7 8 10 11 13 14