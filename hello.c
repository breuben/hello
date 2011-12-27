#include <stdio.h>

int main()
{
	char c[30];
	printf("Hello, world!\n");
	scanf("%s", (char *) &c);
	printf("You typed: %s\n", c);
	return 0;
}

