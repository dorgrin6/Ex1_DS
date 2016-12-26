/*
 * IterativeQuickSort
 * 
 * Enter the amount of integers to sort, then enter the integers to sort with spaces between them.
 * 
 * Made by Idan Goor and Dor Grinshpan 
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

	//check size validity
	if (n<0){
		cout << "Input size can't be negative\n";
		exit(1);
	}


	arr1 = new int[n];
	arr2 = new int[n];

	//recieve array of integers
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	//before sort
	printArr(arr1, n);
	printArr(arr2, n);
	cout << endl;

	recQuickSort(arr1, 0, n-1);
	itrQuickSort(arr2, 0, n - 1);

	//after sort
	printArr(arr1, n);
	printArr(arr2, n);
	cout << endl;
	
	//getchar(); getchar(); //only for testing

	delete[] arr1;
	delete[] arr2;
	
}