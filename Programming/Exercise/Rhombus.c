#include <stdio.h>
int main()
{
    //This code is written by Mustafa Sadiqi,40131436.
int m, n;
scanf("%d\n",&m);
scanf("%d",&n);
int i, j, k;
int p, q;
int l, nb = ((n-1)/2), ns = 1;
int nb1 = n, ns1 = 1;
if((m >= 1 && m <= 4) && (n >= 1 && n <= 15))
{
    for (l = 0; l < n; l++)
    {   
        for(i = 0; i < nb; i++)
        {
            printf(" ");
        }
        for(j = 0; j < ns; j++)
        {
            printf("*");
        }
            for(k = 1; k < m; k++)
            {

                for ( q = 0; q < nb1; q++)
                {
                    printf(" ");
                }
                for(p = 0; p < ns1; p++)
                {
                    printf("*");
                }
            }
        

        printf("\n");
        if(l < ((n-1)/2))
        {    
            nb = nb - 1;
            ns = ns + 2;
            nb1 = nb1 - 2;
            ns1 = ns1 + 2;
        }
        else
        {
            nb = nb + 1;
            ns = ns - 2;
            nb1 = nb1 + 2;
            ns1 = ns1 -2;
        }

    }
}
else
printf("Invalid Number!\n");
return 0;
}
