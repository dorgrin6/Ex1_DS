/*
 * 
 *
 */
#include <iostream>
#include "Recursive.h"
using namespace  std;

void main(){
	int *arr; // array to sort
	int n; // size of arr

	
	cin >> n;
	arr = new int[n];

	//recieve array integers
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Before sort\n";
	printArr(arr, n);

	recQuickSort(arr, 0, n-1);


	cout << "After sort\n";
	printArr(arr, n);
	
	cout << "Ended\n";
	getchar();	getchar();	getchar();
	delete[] arr;
}