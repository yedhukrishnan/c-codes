/* Dynamic allocation of integer array using malloc (included in header file stdlib.h) */

#include<stdio.h>
#include<stdlib.h>	

int main()
{
	int n, i;
	int *a;
	
	printf("Enter limit: ");
	scanf("%d", &n);
	
	a = malloc(n * sizeof(int));
	
	printf("Enter numbers\n");
	for(i = 0 ; i < n ; i++)
		scanf("%d", &a[i]);
		
	printf("The numbers are ");
	for(i = 0 ; i < n ; i++)
		printf("%d ", a[i]);
		
	printf("\n");
	return 0;
}
