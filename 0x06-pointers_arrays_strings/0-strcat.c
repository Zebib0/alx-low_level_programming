#include"main.h"
#include<string.h>
/**
 * _strcat - concatinates two strings
 *
 * @dest : The first String
 * @src : The String to be concatinated
 * Return: String dest
 */
char *_strcat(char *dest, char *src)
{
	/** strcat : function to concatinate two strings */
	strcat(dest, src);
	return (dest);
}
