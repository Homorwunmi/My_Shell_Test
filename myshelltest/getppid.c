#include <stdio.h>
#include <unistd.h>

int main (void)
{
	int a = 4;
	int b = 5;
	int minus = b-a;
	pid_t ppid;

	ppid = getppid();
	printf("minus is %d\n", minus);
	printf("ppid is %u\n", ppid);

	return 0;
}
