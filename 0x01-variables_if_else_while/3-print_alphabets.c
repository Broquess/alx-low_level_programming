#include <stdio.h>

int main(void)
{
    char small_first_alphabet = 'a';
    char capital_first_alphabet = 'A';

    while (small_first_alphabet <= 'z') {
        putchar(small_first_alphabet++);
    }

    while (capital_first_alphabet <= 'Z') {
        putchar(capital_first_alphabet++);
    }

    putchar('\n');
    return 0;
}

