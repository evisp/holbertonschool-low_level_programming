#include "main.h"
#include <stdio.h>

int main(void)
{
	long int factor, number = 612852475143;

	for (factor = 2; factor <= (number / 2); factor++)
		if (number % factor == 0)
			number = number / factor;

        printf("%ld\n", factor);

        return (0);
}