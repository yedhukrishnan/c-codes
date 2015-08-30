#include <stdio.h>

int main()
{
	char *p = "Hello, World!\n";
	char *s = "%d";
	printf(p);
	printf(s, 2);
	return 0;
}
