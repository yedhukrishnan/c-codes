/* A Program to accept a directory name as commandline argument and to print all the subdirectories and files in it */

#include <stdio.h>
#include <dirent.h>

int main(int argc, char **argv)
{
	DIR *dirp;
	struct dirent *dp;
	printf("Subdirectories and files in %s:\n", argv[1]);
   	dirp = opendir(argv[1]);
	while ((dp = readdir(dirp)) != NULL)
		printf("%s\n", dp->d_name);
	(void)closedir(dirp);
	return 0;
}
