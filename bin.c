#include <stdio.h>

int main()
{
	unsigned int num, bit;
	printf("Enter num : ");
	scanf("%u", &num);
	printf("Num in binary (reverse) = ");
	
	while(num > 0)
	{
		bit = num & 1;
		printf("%u", bit);
		num = num >> 1;
	}
	printf("\n");
	return 0;
}

