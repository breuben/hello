#include <stdio.h>

#define false 0
#define true 1

int main()
{
	char c[30];
	printf("Hello, world!\n");
	printf("Type 'q' to quit.\n\n");

	for (;;)
	{
		printf("> ");
		scanf("%s", (char *) &c);
		if (c[0] == 'q' || c[0] == 'Q')
			break;
	}
	
	return 0;
}

