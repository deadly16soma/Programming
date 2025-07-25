#include <stdio.h>
#include <time.h>

int main()
{

       time_t ret_value, my_time;
       ret_value = time(&my_time);
       if(ret_value == -1)
       {
	       printf("error");
	       return 1;
       }
       printf("Time is epcock %ld \n",ret_value);
       printf("%ld",my_time);
       my_time = localtime(&ret_value);
       printf("%ld",my_time);
       return 0;
}

