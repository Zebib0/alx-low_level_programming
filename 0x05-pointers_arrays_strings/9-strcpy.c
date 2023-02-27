#include "main.h"
/**
 *_strcpy - copy value.
 *@dest: copy of array src.
 *@src: String to be copied.
 *Return: return dest if success
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len))
	{
		len++;
	}
	for ( ; i < len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len) = '\0';
	return (dest);
}
