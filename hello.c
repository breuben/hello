#include <stdio.h>

// Program entry point
int main()
{
	char c[30];
	printf("Hello, world!\n");
	printf("Type 'q' to quit.\n\n");

	while (1)
	{
		printf("> ");
		scanf("%s", (char *) &c);
		if (c[0] == 'q')
			break;
	}
	
	return 0;
}

