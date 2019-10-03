#include<stdio.h>
#include<string.h>
#define SIZE 8

void sort(int a[])
{
	int i,j,temp;
	for(i=1; i<SIZE; i++)
	{
		temp = a[i];
		for(j=i-1; j>0; j--)
		{
			if( a[j] > temp )
				a[j+1] = a[j];
			else
				break;
		}
		a[j+1] = temp;
	}
}		
int main()
{
	int a[SIZE]={1,10,5,7,3,8,2,55};
	int i,j;
	for(i=0; i<SIZE; i++) 
		printf("%d ",a[i]);
puts("sorted array");
	sort(a);
	for(i=0; i<SIZE; i++)
		printf("%d ",a[i]);
puts("__>>");
}
