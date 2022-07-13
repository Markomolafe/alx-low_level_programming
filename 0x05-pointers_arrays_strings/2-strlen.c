#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: string whose lenght is to be returned
 * Return: lenght of the string
 */
int _strlen(char *s)
{
int lenght = 0;
while (*s++)
{
lenght++;
}
return (lenght);
}
