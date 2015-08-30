#include <stdio.h>
#include <string.h>

char* binary(int);
char b[200];

int main()
{
	int i, l;
	for(i = 0 ; i <= 10 ; i++)
	{
		l = i << 30;
		printf("%d << 10 = %d, (%s, ", i,  l, binary(i));
		printf("%s)\n", binary(l));
	}
	return 0;
}

char* binary(int n)
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
