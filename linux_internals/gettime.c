#include <sys/time.h>
#include <stdio.h>

int main()
{
	struct timeval mytime;
	int val = gettimeofday(&mytime,NULL);
	if(val == -1)
	{
		perror("not");
		return 1;
	}
	printf("%ld ",mytime.tv_sec);
	return 0;
}


