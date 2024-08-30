#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int rev = 0;
    int mod;
    while(num > 0)
    {
	mod = num % 10;
	rev = rev * 10 + mod;
	num = num / 10;
    }
    printf("%d",rev);
    return 0;
}
