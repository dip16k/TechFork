#include<stdio.h>

int main()
{
	int a=10, b=20;

	a = a ^ b;
	a = a ^ b;
	a = a ^ b;

	printf("a:%d b:%d\n",a,b);

	a ^= b ^= a ^=b;

	printf("a:%d b:%d\n",a,b);
}
