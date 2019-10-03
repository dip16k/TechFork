#include<stdio.h>

void f1()
{
	printf("in f1()\n");
	goto end;
	printf("hello\n");
	end:
	printf("end\n");
}

void f2()
{
	printf("f2\n");
	goto end;
	{
		int i = 20;
		end:
		i = 40;
		printf("%d\n",i);
	}
}

int main()
{
	f1();

	f2();
}
