#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input value
 * @needle: Input value
 * Return: if successfully zero
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *count = haystack;
		char *count2 = needle;

		while (*count == *count2 && *count2 != '\0')
		{
			count++;
			count2++;
		}
		if (*count2 == '\0')
			return (haystack);
	}
	return (0);
}
