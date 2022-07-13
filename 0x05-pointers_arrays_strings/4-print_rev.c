#include "main.h"
/**
 * print_rev - prints a string in a reverse followed by a newline
 * @s: string to be printed in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
int lenght = 0;
while (s[lenght] != '\0')
{
lenght++;
}
while (lenght)
{
_putchar(s[--lenght]);
}
_putchar('\n');
}
