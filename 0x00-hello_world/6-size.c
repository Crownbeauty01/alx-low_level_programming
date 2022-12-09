#include <stdio.h>
/**
 * main - print various sizes in c
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d 1byte \n", sizeof(a));
	printf("size of an int: %d 4bytes \n", sizeof(b));
	printf("size of a long int: %d 4bytes\n", sizeof(c));
	printf("size of a long long int: %d 8bytes\n", sizeof(d));
	printf("size of a float: %d 4bytes \n", sizeof(f));
}
