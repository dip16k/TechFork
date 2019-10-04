#include<stdio.h>

int main()
{
	int a = 10;

	// always put constant first 
	// defensive coding to avoid a=10 type of mistakes 
	// u cannot asign anything to constant it helpto avoid type mistakes 
	if( 10 == a)
		printf("a is 10");
	else
		printf("a is not 10");
}
