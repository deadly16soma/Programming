#include<stdio.h>
int main(int *argc,int *argv)
{
	int num;
	scanf("%d",&num);
	int sum = 0,mod;
	while(num > 0)
	{
	  mod = num % 10;
	  sum = sum + mod;
	  num = num/10;
	}
        printf("%d",sum);
   return 0;
}


