#include<stdio.h>

void merge(int a[],int l,int m,int r)
{
	int b[5];
	int k= 0;
	int i = l;
	int j = m+1;

	while(i <= m && j <= r)
	{
		if(a[i] < a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while(i <= m)
	{
		b[k++] = a[i++];
	}
	while(j <=r )
	{
		b[k++] = a[j++];
	}
	for(i = r; i >= l; i--)
		a[i]=b[--k];
} 

void mergeSort(int a[], int l, int r)
{
	int mid;

	if(l < r)
	{
		mid = (l+r)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		merge(a,l,mid,r);
	}	
}

// function to print the array
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {32, 45, 67, 2, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array: \n");
    printArray(arr, len);
    
    // calling merge sort
    mergeSort(arr, 0, len - 1);
 
    printf("\nSorted array: \n");
    printArray(arr, len);
    return 0;
}
