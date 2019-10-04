#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *p= NULL;

	 p = calloc(1,10);
	if(NULL == p){
		perror("malloc");
		return -1;
	}

	printf("memory allocated\n");

}
