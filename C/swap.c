#include<stdio.h>

void ter_op(int a, int b);
void xor_op(int a, int b);
void add_op(int a, int b);

int main()
{
	int a, b;
	printf("enter the numebr ");
	scanf("%d %d", &a, &b);
	ter_op(a,b);
	xor_op(a,b);
	add_op(a,b);
	return 0;
}	

void ter_op(int a, int b)
{
	 int c = a;
	a = b;
	b = c;
	printf("%d %d \n",a,b);
}

void xor_op(int a, int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d \n",a,b);
}

void add_op(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d",a,b);
}


