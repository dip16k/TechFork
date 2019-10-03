#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mul(int x , int y)
{
	return x*y;
}

int mul_add(int x, int y)
{
	int sum = 0;
	for(;y> 0;y--)
		sum = x + sum;	
	return sum;
}

int main()
{
	printf("mul:%d\n",mul(2,3));
	printf("mul_add:%d\n",mul_add(2,3));
}
