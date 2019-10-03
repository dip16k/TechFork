#include<stdio.h>

void sort(int a[], int n)
{
	int temp, i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]> a[j+1])
			{
				//swp
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


int main()
{
	int a []= {1,5,6,0,3,2,8};

	sort(a,7);
	
	int i;
	for(i=0;i<7;i++)
		printf("%d ",a[i]);

	puts("");
}
