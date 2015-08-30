/* Program to print all possible combinations of letters of a word 
   using a Backtracking algorithm				    */

#include <stdio.h>
#include <string.h>

void permute(char*, int, int);
void swap(char*, char*);

int main()
{
	char s[100];
	scanf("%s", s);
	permute(s, 0, strlen(s) - 1);
	return 0;
}

void permute(char *s, int i, int n)
{
	int j;
	if(i == n)
		printf("%s\n", s);
	else
	{
		for(j = i ; j <= n ; j++)
		{
			swap((s + i), (s + j));
			permute(s, i + 1, n);
			swap((s + j), (s + i));
		}
	}
}

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
