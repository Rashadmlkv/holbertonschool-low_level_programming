#include "main.h"
#include <stdio.h>

/**
 * strleng - calculate lengths of string
 * @s: string
 * @leng: lengths
 * Return: lengts of string
 */
int strleng(char *s, int leng)
{
	if (*s != '\0')
		leng = strleng(s + 1, leng + 1);
	return (leng); }

/**
 * palindrome_helper - is palindrome or not
 * @s: string
 * @leng: lengths
 * @base: 0
 * @odd: string is odd lengts or not
 * Return: 1 if pol, 0 if not
 */
int palindrome_helper(char *s, int leng, int base, int odd)
{
	if (odd == 1)
	{
		if (base == leng)
			return (1);
		else if (s[base] == s[leng])
			return (palindrome_helper(s, leng - 1, base + 1, odd));
		return (0); }
	if (base == (odd / 2) + 1)
		return (1);
	else if (s[base] == s[leng])
		return (palindrome_helper(s, leng - 1, base + 1, odd));
	return (0); }

/**
 * is_palindrome - palindrome or not
 * @s: string
 * Return: 1 if pol or 0 if not
 */
int is_palindrome(char *s)
{
	int leng = 0, base = 0, odd = 1;

	leng = strleng(s, leng) - 1;
	if (leng % 2 != 0)
		odd = leng;
	return (palindrome_helper(s, leng, base, odd)); }
