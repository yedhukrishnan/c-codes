#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1, *p2;
	int n1, n2, i;
	printf("Enter the limits : ");
	scanf("%d%d", &n1, &n2);
	
	p1 = calloc(n1, sizeof(int));
	
	p1[0] = 3; p1[1] = 0; p1[2] = 9;
	
	if(p1 != NULL)
	{
		for(i = 0 ; i < 5 ; i++)
		{
			printf("%d  ", p1[i]);
		}
		printf("\n");
	}
	
	free(p1);
	
	if(p1 != NULL)
	{
		for(i = 0 ; i < n1 ; i++)
		{
			printf("%d  ", p1[i]);
		}
		printf("\n");
	}
	
	/*
	p2 = malloc(n2 * sizeof(int));
	
	if(p2 != NULL)
	{
		for(i = 0 ; i < n2 ; i++)
		{
			printf("%d  ", p2[i]);
		}
		printf("\n");
	}
	*/
	return 0;
}
