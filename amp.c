#include <stdio.h>

int main()
{
	int i = 5;
	int j = i & (i - 1);
	printf("%d\n", j);
	return 0;
}



