#include <stdio.h>

int main()
{
	int i;
	for(i = -50 ; i <= 50 ; i++)
	{
		//printf("~%d = %d\n", i, (~i));
		printf("%d & %d = %d\n", i, ~i, (i & ~i));
	}
	return 0;
}
	
