/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) 
{
	if (str=='\0'||K<0)
		return '\0';
	int len=0,i;
	while (str[len] != '\0')
		len++; 
	if (K - len + 1 > 0)
		return '\0';
	return (str[len - 1 - K]);
}