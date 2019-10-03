#include<stdio.h>

void left(int a[], int n, int d)
{
	int i,j;
	int temp;
	
	for(i=0;i<n;i++)
		a[i] = i+1;

	for(i=0; i < d ; i++)
	{
		temp = a[0];
		for(j=0; j <n-1; j++)
			a[j] = a[j+1];
		a[j] = temp;
	}
}

void print(int a[], int n)
{
	int i=0;
	for(; i< n ;i++ )
		printf(" %d",a[i]);
	puts("");
}
int main()
{
	int a [5];
	left(a,5,4);
	print(a,5);
}
