#include<stdio.h>

int main()
{
	float temp;
	printf("enter the temperature : ");
	scanf("%f",&temp);
	float far = (temp *(9.0/5.0))+ 32 ;
	printf("the fahrenheit : %f ",far);
	return 0;
}

