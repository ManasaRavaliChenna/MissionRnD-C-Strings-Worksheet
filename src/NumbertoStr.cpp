/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal)
{	
	
	if (number == 0 && afterdecimal == 0)
		str = "0\0";
	int index = 0, len = 0;
	if (number < 0)
	{
		str[index++] = '-';
		number = -number;
		len = 1;
	}
	int num = int(number), dig, num1 = num;
	float dec = number - num;
	while (num > 0)
	{
		len++;
		num = num / 10;
	}
	index = len;
	while (num1 > 0)
	{
		dig = num1 % 10;
		str[--len] = dig + '0';
		num1 = num1 / 10;
	}
	if ((dec != 0) && (afterdecimal>0))
	{
		str[index++] = '.';
		while ((dec != 0) && (afterdecimal>0))
		{
			dec = dec * 10;
			printf("%d  ", dec);
			str[index++] = int(dec) + '0';
			dec = dec - int(dec);
			printf("%f\n", dec);
			afterdecimal--;
		}
	}
	else if ((afterdecimal>0))
	{
		str[index++] = '.';
		while (afterdecimal > 0)
		{
			str[index++] = '0';
			afterdecimal--;
		}
	}
	str[index++] = '\0';
}

