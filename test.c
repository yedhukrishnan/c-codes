#include <unistd.h>

int main()
{
	execlp("/bin/ls", "date", NULL);
	return 0;
}
