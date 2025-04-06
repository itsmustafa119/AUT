#include <stdio.h>
int main()
{
int letter, lower;				//This Code is written by MUSTAFA SADIQI 40131436.
while((letter = getchar())!= '\n')
{
	lower = (letter >= 65 && letter <= 90)?(letter + 32):(letter);
	putchar(lower);
}
}
