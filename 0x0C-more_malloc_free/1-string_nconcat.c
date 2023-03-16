#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size_1, size_2, size_T, i;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	size_1 = strlen(s1);
	size_2 = strlen(s2);
	size_T = size_1 + n;
	str = (char *)malloc(sizeof(char) * size_T + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size_1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < size_2; i++)
	{
		str[size_1 + i] = s2[i];
		if (n >= size_2)
			str[size_1 + i] = s2[i];
	}
	str[size_T] = '\0';
	return (str);
}
