#include <stdio.h>

unsigned char rightrot(unsigned char x, unsigned char n)
{                                                //This code is written by MUSTAFA SADIQI 40131436.
    x = (x << (8 - n)) | (x >> n);
    return x;
}
int main()
{
    int n = 1;
    unsigned char x;
    scanf("%hhu", &x);
    printf("%hhu",rightrot(x, n));
}
