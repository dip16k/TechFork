#include<stdio.h>
#include<unistd.h>

int main()
{
	char buf[] = "hello_world";
	int ret = 0;

	ret = write(1,buf,sizeof(buf));
	if(-1 == ret)
	{
		perror("write");
		return -1;
	}
	return ret;
}
