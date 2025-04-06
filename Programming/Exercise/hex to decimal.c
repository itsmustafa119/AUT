#include <stdio.h>
#include <math.h>
void getliner(char str[])                       //Getliner function is used to fill in
{                                               //the array's empty places with hex digits.
    int c;		
    int i= 0;
    do{
    c = getchar();
    if(c == '0'|| c =='x' || c == 'X')          //Condition for Optional "0x", "0X".
 	    continue;
 	else
    {    
        str[i] = c;
        i++;
    }
    }while(c != '\n');
    str[i] = '\n';                              //Intentionally add newline character for
}                                               // making a terminating condition in line 22.
void htoi(char str[])               
{
    int num_digits = -1, i = 0, sum = 0, st[2000];
    while(str[i] != '\n')
    {
        num_digits++;                           //Calculated the number of digits to use it-
        i++;                                    //as the descending power of 16.
    }
    int multiplier = pow(16,num_digits);        //Used pow function defined in math.h for
    for(int i = 0; i <= num_digits; i++)        //multiplying the powers of 16s to their corresponding digits.
    {

        if(str[i] >= '0' && str[i] <= '9')      // line 28 to 45 is the conversion process.
        {
            st[i] = ((str[i]-48) * multiplier);
        }
        if(str[i] >= 'A' && str[i] <= 'F')
        {
			st[i] = (str[i]-55) * multiplier; 
        }
        if (str[i] >= 'a' && str[i] <= 'f')
        {
			st[i] = (str[i]-87) * multiplier;
        }
        multiplier/=16;
    }
    for(int j = 0; j <= num_digits; j++)        //calculating the results of each multiplication.
    {
        sum = sum + st[j];
    }
    printf("%d",sum);
}
int main()
{
char str[2000];
getliner(str);
htoi(str);
}
