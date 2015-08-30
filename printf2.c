#include <stdio.h>

int main()
{
	char *p = "Hello, World!";
	printf("|%s|\n", p);
	printf("|%10s|\n", p);
	printf("|%.10s|\n", p);
	printf("|%-10s|\n", p);
	printf("|%.15s|\n", p);
	printf("|%-15s|\n", p);
	printf("|%15.10s|\n", p);
	printf("|%-15.10s|\n", p);
	return 0;
}
