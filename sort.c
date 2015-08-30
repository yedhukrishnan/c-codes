/* Simple sorting algorithm */

#include <stdio.h>

int main()
{
	int a[100], n, i, j;
	scanf("%d", &n);
	for(i = 0 ; i < n ; i++)
		scanf("%d", &a[i]);
	for(i = 0 ; i < n - 1 ; i++)
			for(j = i + 1 ; j < n ; j++)
				if(a[i] > a[j])
				{
					a[i] = a[i] + a[j];
					a[j] = a[i] - a[j];
					a[i] = a[i] - a[j];
				}
	for(i = 0 ; i < n ; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}	
					
