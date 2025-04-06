#include <stdio.h>
int main()
{
int i, j, c, number_arr = 0, number = 0, Bing;	
char array[2000];
c = getchar();
while(c != '\n')					//I used while loop to put my input in an array.
{
	array[number_arr] = c;
	number_arr++;
	c = getchar();
}
for(i = 1 ;i< 127; i++)					// I used for loop to check each ascii character from 1 to 126 in another loop.
{
	Bing = 0;
	number = 0;
	for (j = 0; j <= number_arr; j++)		// I used this loop to check how many times an ascii character is in the array.
	{
		if(i == array[j])
		{	
			number++;
			Bing = 1;			// Bing is a variable for manipulating the execution of if condition in line 30.
			continue;
		}
		else
		{
			continue;
		}
	}
if(Bing)						//line 30 to 39, for printing the character and its frequency.
{
	printf("\'%c\'|",i);
	while(number > 0)
	{
		number--;
		printf("X");
	}
	printf("\n");
} 
}
}
//This code is written by MUSTAFA SADIQI 40131436.
