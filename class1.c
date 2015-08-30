/* C Tutorial Program */

#include<stdio.h>

int main()
{
	int i = 50, val1, val2;
	long int adr = 0x7fff33561fcf;
	char c = 'a';
	int *p;
	char *cp;
	
	printf("Return value of scanf function\n");
	printf("Enter 2 numbers : ");
	printf("%d\n", scanf("%d%d", &val1, &val2));
	/* scanf function returns the number of scanned values (input). In this case 2 (val1 & val2) */
	
	printf("Return value of printf function\n");
	printf("%d\n", printf("%d %c\n", i, c));
	/* printf function returns the number of characters printed on the screen. In this case, 5, 0, space, a, newline => 5 */
	
	p = &val1;
	printf("Address of val1 = %p\n", p);
	printf("Value of val1 = %d\n", *p);
	cp = &c;
	printf("Address of c = %p\n", cp);
	printf("Value of c = %c\n", *cp);
	/* %p is the format specifier of any pointer. It is of type (void*) */
	
	p = (void*)adr;
	*p = 5;
	printf("%p, %d\n", p, *p);
	
	return 0;
}
