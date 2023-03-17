#include <stdio.h>

int main(void)
{
	char first_alphabet = 'a';
	
	while(first_alphabet <= 'z')
	{
		putchar(first_alphabet++);
	}
	
	putchar('\n');
	return 0;
}
