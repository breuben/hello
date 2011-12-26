#include <stdio.h>

int main()
{
	char c[30];
	printf("Hello, world!\n");
	scanf("Please don't enter more than 30 characters: %s", &c);
	return 0;
}

