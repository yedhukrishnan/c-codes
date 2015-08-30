#include <stdio.h>

int main()
{
	int a[] = {6, 3, 8, 2, 9, 7, 1, 5, 4, 0}, l = 10, i, j, n = 4;

	for(i = 0 ; i < l - n ; i++)
		for(j = 0 ; j < (n - i - 1) ; j++)
			if(a[j] > a[j+1])
			{
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}
	/*printf("%d\n", a[l - n]);*/
	for(i = 0 ; i < l ; i++)
		printf("%d  ", a[i]);
	return 0;
}
