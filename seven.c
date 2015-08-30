/* Fastest way to multiply a number by 7
   step 1. shift the bits 3 times to left
   step 2. subtract the number from this   */

#include <stdio.h>

int main()
{
	int i = 5, j;
	j=i;
	i=(i << 3) - j;
	printf("%d\n", i);
	
	scanf("%d%d",&i, &j);
	printf("%d\n", (i << j));
	return 0;
}
