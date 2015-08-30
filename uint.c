#include <stdio.h>

int main()
{
	int i, n;// = ~0;
	scanf("%d", &n);
	i = ~n;
	unsigned j = (unsigned)i;
	printf("j = %d\n", j);
	j++;
	printf("i = %d\nj++ = %d\n", i, j);
	return 0;
}
