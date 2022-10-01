#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compare
 * d.
 * @s2: A pointer to the second string to be compar
 * ed.
 * Return: If str1 < str2, the negative difference
 * of the first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the f* irst unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
