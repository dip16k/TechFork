#include<stdio.h>
#include<stdlib.h>

void foo(void)
{
	printf("good bye foo\n");
}

void bar(void)
{
	printf("good bye bar\n");
	atexit(foo);
}

int main()
{
	printf("main\n");
	bar();
}
