#include <stdio.h>

int main(void)
{
	char buffer[10];

	puts("Enter your name:");
	scanf("%s", buffer);

	printf("Hello %s\n", buffer);
	return 0;
}

