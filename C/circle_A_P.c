#include<stdio.h>
int main()
{
	float radius,area,prem;
	printf("enter the radius : ");
	scanf("%f",&radius);
	area = 22.0/7.0 * radius * radius;
	prem = 22.0/7.0 * 2 * radius;
	printf("the area of circle is %f and Perimeter is %f ",area, prem);
	return 0;
}


