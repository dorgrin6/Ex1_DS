#include "Recursive.h"
using namespace  std;


// this function should be included in a shared general header where both algorithm can use
void choosePivot(int arr[],int size){ 
	int randIndex; // random index to choose
	srand(time(nullptr));

	cout << "before p swap:" << endl;
	printArr(arr, size);

	randIndex = rand() % size;
	swap(arr[0], arr[randIndex]);

	cout << "after p swap:" << endl;
	printArr(arr, size);
}

void printArr(int arr[],int size){
	for (int i = 0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void swap(int *p1, int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void recQuickSort(int arr[], int left, int right){
	/* pi is partitioning index, arr[p] is now
	at right place */
	int pi = partition(arr, left, right);

	if (left < right){
		// Separately sort elements before
		// partition and after partition
		recQuickSort(arr, left, pi - 1);
		recQuickSort(arr, pi + 1, right);
	}
}


/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low  --> Starting index,
high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}