/* C Program to create a directory */

#include <stdio.h>
#include <sys/types.h>
#include <sys/dir.h>

int main(int argc, char **argv)
{
	printf("%s\n", argv[1]);
	if(mkdir(argv[1]))
	{
		printf("Folder created successfully!\n");
	}
	else
	{
		printf("Folder creation failed!\n");
	}
	return 0;
}
