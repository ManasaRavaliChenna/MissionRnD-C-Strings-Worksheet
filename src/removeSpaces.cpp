/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str)
{
	if (str=='\0')
		return '\0';
	else
	{
		int i = 0, i1 = 0;
		char ch;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
				i++;
			else
			{
				str[i1] = str[i];
				i1++;
				i++;
			}
		}
		str[i1] = '\0';
	}
}