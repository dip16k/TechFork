#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
//member functions declaration
void insertionSort(int arr[], int length);
void printArray(int array[], int size);
 
// main function
int main() 
{
	int array[6] = {5, 1, 6, 2, 4, 3};
	// calling insertion sort function to sort the array
	insertionSort(array, 6);

        cout << "Sorted Array: ";
        // print the sorted array
        printArray(array, 6);

	return 0;
}
 
void insertionSort(int a[], int length) 
{
	int i,j;
	int key;

	for(i=1;i<length;i++)
	{
		j = i;
		while(j>0 && a[j-1] > a[j])
		{
			//swap
			key = a[j];
			a[j] = a[j-1];
			a[j-1] = key;
			j--;
		}
	}
}

// function to print the given array 
void printArray(int array[], int size)
{ 
 	int j;
	for (j = 0; j < size; j++)
	{
 		cout <<" "<< array[j];
 	}
 	cout << endl;
}
