#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("%c\n", **++argv);
	return 0;
}
