#include <stdio.h>
/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
*/
void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}

        print_alphabet();
	return (0);


}
