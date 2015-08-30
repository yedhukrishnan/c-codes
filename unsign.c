#include <stdio.h>
#include <string.h>

char* bin(int);
char b[200];

int main()
{
	unsigned int a, b;
	scanf("%d", &a);
	b = ~a;
	printf("%u\n", b);
	printf("%s >>>> %s\n", bin(a), bin(b));
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
