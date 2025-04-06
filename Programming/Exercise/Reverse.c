#include <stdio.h>
void getline1(char str[])                   //Definition of getline function, I could not name-
{                                           //my function "getline" so I used the name "getline1".
    int i = 0;
    char character;
    do
    {
        character = getchar();
        str[i] = character;
        i++;
    }while(character != '\n');
    str[i] = '\n';							// Line 12, I intentionally added a '\n' to my string to use it as a terminating condition
}											// in line 18.

void reverse(char str[])                    //Definition of reverse function with one parameter.
{
    char num_char = 0, rev_str[1000],i ,j;
    while(str[num_char] != '\n')			// I used while loop to first calculate the number of characters that are to be reversed.
    {
        num_char++;
    }
    num_char--;
	for(i = 0;num_char >= 0; i++)			// I used for loop to put the characters from index max to index min into rev_str.
	{
	    rev_str[i] = str[num_char];
	    num_char--;
	}
	for(j = 0; j < i; j++)					// I used for loop to print the elements of rev_str.
		{
			printf("%c", rev_str[j]);
		}
}

int main()
{
char str[1000];
getline1(str);
reverse(str	);
}
//This code is written by Mustafa Sadiqi 40131436.
