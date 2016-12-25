/*
 * 
 *
 */
#include <iostream>
#include "QuickSort.h"
#include "GeneralFunctions.h"
using namespace  std;

void main(){
	int *arr1; // array1 to sort with recursion quickSort
	int *arr2; // array2 (same as array1) to sort with iteration quickSort
	int n; // size of arr

	cin >> n;
	arr1 = new int[n];
	arr2 = new int[n];

	//recieve array integers
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	cout << "Before sort:\n";
	printArr(arr1, n);
	printArr(arr2, n);
	cout << endl;

	recQuickSort(arr1, 0, n-1);
	itrQuickSort(arr2, 0, n - 1);

	cout << "After sort:\n";
	printArr(arr1, n);
	printArr(arr2, n);
	cout << endl;
	
	cout << "Ended\n";
	getchar();	getchar();	getchar();
	delete[] arr1;
	delete[] arr2;
	
}