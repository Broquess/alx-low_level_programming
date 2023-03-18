#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_alphabet = 'a';

	while (first_alphabet <= 'z')
	{
		putchar(first_alphabet++);
	}

	putchar('\n');
	return (0);
}

