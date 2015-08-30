#include <stdio.h>
#include <string.h>

char* bin(int);
char b[200];

int main()
{
	unsigned int num, pos, bit;
	printf("Enter num & pos : ");
	scanf("%u%u", &num, &pos);
	
	bit = ((num&(1<<pos))>>pos);
	
	printf("bit = %u\n", bit);
	printf("Num in binary = %s\n", bin(num));
	
	return 0;
}

char* bin(int n)
{
	int i = 0, j;
	char tmp;
	for(; n > 0 ; n = n / 2)
	{
		j = n % 2;
		b[i] = (j == 0)? '0' : '1';
		i++;
	}
	b[i] ='\0';
	for(i = 0, j = strlen(b) - 1 ; i < j ; i++, j--)
	{
		 tmp = b[i];
		 b[i] = b[j];
		 b[j] = tmp;
	}
	return b;
}
