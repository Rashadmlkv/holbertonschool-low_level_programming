#include "main.h"
#include <stdlib.h>
/**
 * leng - length of str
 * @s: string
 * Return: Length
 */
unsigned int leng(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++; }
	return (leng - 1); }
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
	unsigned int j, strlen1, strlen2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strlen1 = leng(s1);
	strlen2 = leng(s2);
	if (n >= strlen2)
	{
		ptr = malloc(sizeof(char) * (strlen1 + strlen2) + 1);
		if (ptr == NULL)
			return (NULL);
		for (j = 0; j <= strlen1 + strlen2 + 1; j++)
		{
			if (*s1 != '\0')
			{
				ptr[j] = *s1;
				s1++; }
			else
			{
				ptr[j] = *s2;
				s2++; } }
		return (ptr); }
	ptr = malloc((strlen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= (strlen1 + n); j++)
	{
		if (*s1 != '\0')
		{
			ptr[j] = *s1;
			s1++; }
		else
		{
			ptr[j] = *s2;
			s2++; } }
	return (ptr); }
