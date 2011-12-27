#include <stdio.h>

// Program entry point
int main()
{
	char c[30];
	printf("Hello, world!\n");
	scanf("%s", (char *) &c);
	printf("You typed: %s\n", c);
	return 0;
}

