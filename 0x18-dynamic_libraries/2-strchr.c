#include "main.h"
/**
 * _strchr - entry pointg
 * @s: value
 * @c: value
 * Return: zero
 */
char *_strchr(char *s, char c)
{
	int numb;

	for (numb = 0; s[numb] >= '\0'; numb++)
	{
		if (s[numb] == c)
			return (&s[numb]);
	}
	return (0);
}
