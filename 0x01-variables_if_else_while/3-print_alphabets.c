#include <stdio.h>

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*OUTPUT IS lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*OUTPUT IS uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
