/* Recursive main function */

#include<stdio.h>

int main()
{
	static int i = 10;
	printf("Hello %d\n", i);
	i--;
	if(i > 0)
		main();
}
