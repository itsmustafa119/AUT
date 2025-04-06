#include <stdio.h>
#include <math.h>
int main()
{       //This code is written by Mustafa Sadiqi, 40131436
int n;
int p;
int y;
int m = 0, j, l = 0, e, s = 0, o =0;


    scanf("%d",&n);
    if(n >= 10 && n <= 2*pow(10,9))
    {
        for(p = 10; p > 0; p--)
        {
            y = pow(10,p);
            if(n/y!= 0)
            {
            break;
            }
        }
        for(j = y; j >= 1; j= j/10)
        {
            l = m;
            m = n;
            m = m/j;
            e = m - (l * 10);
            s = s + e*pow(10,o);
            o = o + 1;
        }
        if(s == n)
        printf("Yes\n");
        else
        printf("No\n");
    }
    if(n >= 1 && n < 10)
    {
        printf("Yes\n");
    }
    if(n < 1)
        printf("Invalid Number!\n");
return 0;
}