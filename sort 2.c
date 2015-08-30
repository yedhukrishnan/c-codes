/* Program to sort an array that contains only 2 types of elements */

#include <stdio.h>

int main()
{
	int a[] = {1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1}, n = 15, tmp, i, j, flag;
	
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++)
		scanf("%d", &a[i]);
	
	printf("Before sorting\n");
	for(i = 0 ; i < n ; i++)
		printf("%d  ", a[i]);
	printf("\n");
	
	i = 0;
	j = n - 1;
	flag = 0;
	
	while(i < j)
	{
		if(flag == 1 && a[i] != a[j])
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			flag = 0;
		}		
		if(a[i] != a[j])
		{
			j--;
		}
		else
		{
			flag = 1;
			i++;
		}
	}
		
	printf("After sorting\n");
	for(i = 0 ; i < n ; i++)
		printf("%d  ", a[i]);
	printf("\n");
	return 0;
}
