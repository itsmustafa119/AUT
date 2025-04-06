#include <stdio.h>
int main()
{   //This code is written by Mustafa, 40131436.
    int i, j;
    int n;
    int pr;
    int fib_1, fib_2, fib_x;
    scanf("%d",&n);
    if(n > 0 && n < 100)
    {   for(i = 1; i <= n; i++)
        {
            fib_x = 0;
            fib_1 = 1;
            fib_2 = 2;
            pr = 0;
            for(j = 1; j <= i; j++)
            {
                if(i == fib_1 || i == fib_2 || i == fib_x)
                {   
                    pr = 1;
                    break;
                }
                else
                {
                    fib_x = fib_1 + fib_2;
                    fib_1 = fib_2;
                    fib_2 = fib_x;
                }  
            }
            if(pr)
            printf("+");
            else
            printf("-");
        }
    }
    else
    printf("Invalid Number");
    return 0;
}