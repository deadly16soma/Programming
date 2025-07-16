#include<stdio.h>

int main()
{
	float sub1, sub2, sub3, sub4, sub5, avg;
	printf("enetr the marks of each sub : ");
	scanf("%f %f %f %f %f",&sub1, &sub2, &sub3, &sub4, &sub5);
	avg = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	printf("The average marks is : %f",avg);
	return 0;
}

