#include<stdio.h>

#define num(x) (sizeof(x)/sizeof(*x))

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};

	printf("size of num:%ld\n",num(arr));
	
}
