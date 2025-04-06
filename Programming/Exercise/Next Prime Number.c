#include <stdio.h>
int main()
{   //This code is written by Mustafa Sadiqi, 40131436.
    int a, j, pr;
    scanf("\n%d",&a);
    if(a <= 1000 && a >= 0) 
    {   
        while(1)
        {
            pr = 1;
            a = a + 1;
            for(j = 2; j < a; j++)
            {
                if(a%j == 0)
                {
                    pr = 0;
                    break;
                }
            }
        if(pr)
        break;
        else
        continue;
        }
    printf("%d\n",a);
    }
    if(a >= -1000 && a < 0)
    printf("%d\n",2);
    if(a > 1000 || a < -1000)
    {
    printf("Invalid Number\n");}
return 0;
}
