/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len)
{
	char ch;
	int stpos1, edpos2, i=0, itr1, itr2, itr3, j=len-1;
	do
	{
		stpos1 = i;
		while (input[i] != ' ')
			i++;
		if (i > j)
			break;
		edpos2 = j;
		while (input[j] != ' ')
			j--;
		if (i > j)
			break;
		for (itr1 = stpos1, itr2 = j + 1; itr1 < i&&itr2 <= edpos2; itr1++, itr2++)
		{
			ch = input[itr1];
			input[itr1] = input[itr2];
			input[itr2] = ch;
		}
		while (itr1 < i)
		{
			ch = input[itr1];
			for (itr3 = itr1; itr3 < edpos2; itr3++)
				input[itr3] = input[itr3 + 1];
			input[edpos2] = ch;
			i--;
			j--;
		}
		while (itr2 <= edpos2)
		{
			ch = input[itr2];
			for (itr3 = itr2; itr3 > itr1; itr3--)
				input[itr3] = input[itr3 - 1];
			input[itr1++] = ch;
			itr2++;
			i++; j++;
		}
		i = i + 1;
		j = j - 1;
	} while (i < j);
}
