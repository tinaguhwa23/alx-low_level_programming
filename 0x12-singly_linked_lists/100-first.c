#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * print_first - prints a sentence before the main
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
