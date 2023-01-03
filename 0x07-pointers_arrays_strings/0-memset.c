#include <main.h>
/**
 * main - The _memset function fills memory with a constant byte.
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int j = 0;
	while (j < n) 
	{
	s[j] = b;
	j++;
	}
	return s;

}
