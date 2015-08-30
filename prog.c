#include<stdio.h>

void add(int &a, int &b);

main()
{
	int a, b, s;
	a = 4;
	b = 5;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	add(a, b);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	printf("\n");
}

void add(int &a, int &b)
{
	a = 10;
	b = 15;
}

