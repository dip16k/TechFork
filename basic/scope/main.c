#include<stdio.h>
#include "f1.h"
//#include "f2.h"

static int i=5 ;
int j=10;

int add(int j)
{
	
	printf("%d\n",j);
}
int main()
{
	printf("Main\n");
	printf("%d\n",i);
	print();

	add(20);
}
