#include <stdio.h>

int main(void)
{
	char first_alphabet = 'a';

	while(first_alphabet <= 'z')
	{
		if(first_alphabet != 'e' && first_alphabet != 'q')
		{
			putchar(first_alphabet);
		}
		
		first_alphabet++;
	}
	
	putchar('\n');
	return 0;
}
