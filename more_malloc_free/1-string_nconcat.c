#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * leng - length of str
 * @s: string
 * Return: Length
 */
unsigned int leng(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++; }
	return (i); }
/**
 * string_nconcat - concatenate two strings n bytes
 * @s1: string1
 * @s2: string2
 * @n: nmem
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, str1, str2;

	if (s1 == NULL)
		s1 = "";
	str1 = leng(s1);
	if (s2 == NULL)
		s2 = "";
	str2 = leng(s2);
	if (n > str2)
		n = str2;

	ptr = malloc((str1 + n)  * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
