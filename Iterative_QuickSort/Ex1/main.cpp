/*
 * 
 *
 */
#include <iostream>
#include "General.h"
#include "Stack.h"
using namespace  std;

void main(){
	/*
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
	*/

	Stack s;
	ItemType item;
	item.setLine(1);
	item.setValue(2);
	s.push(&item);
	s.printStack();
	ItemType item2 = s.pop();
	cout << item2.getLine()<<","<<item2.getValue() << endl;
	getchar();
}