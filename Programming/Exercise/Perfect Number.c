#include <stdio.h>
int main()
{   //This code is written by Mustafa Sadiqi, 40131436.
    int a, b;
    int i , j;
    
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    for(i = a + 1; i < b; i++)
    {	
    	int x = 1;
        for(j=2; j < i; j++)
        {
            if(i%j==0)
            {
                x = x + j;
            }
        }
        if (x == i && x != 1)
        {
            printf("%d ",i);
        }
    }
return 0;
}
