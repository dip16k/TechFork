#include<stdio.h>

int add(int x, int y)
{
	if(y == 0)
		return x;
	else
		add(x^y, (x&y)<<1);
}

int main()
{
	printf("add: %d\n", add(4,5));
}
