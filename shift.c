#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	printf("Left shift by 1 : %d\n", (n>>1));
	printf("~%d : %d\n", n, (~n));
	
	return 0;
}
