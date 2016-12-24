#include "General.h"
using namespace  std;



void chooseRandomPivot(int arr[],int size){ 
	int randIndex; // random index to choose
	srand((unsigned int) time(nullptr));

	randIndex = rand() % size;
	
	swap(arr[size], arr[randIndex]);
}


void printArr(int arr[],int size){
	for (int i = 0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void swap(int &p1, int&p2) {
	int tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int partition(int arr[], int left, int right){
	int pivot = left; // index of pivot
	int nonPivot = right; // index of comparision element
	int pVal; // pivot value

	chooseRandomPivot(arr + left, right - left);//switch pivot with random
	pVal = arr[left]; // pivot value

	while (pivot != nonPivot){
		//pivot is before nonPivot in array
		if (pivot < nonPivot){
			if (pVal > arr[nonPivot]){
				swap(arr[pivot], arr[nonPivot]); //swap value
				swap(pivot, nonPivot); // swap index
				nonPivot++;
			}
			else{  // pVal < arr[nonPivot]
				nonPivot--;
			}
		}

		//pivot is after nonPivot in array
		else{ 
			if (pVal > arr[nonPivot]){
				nonPivot++;
			}
			else{ // pVal < arr[nonPivot]
				swap(arr[pivot], arr[nonPivot]); //swap value
				swap(pivot, nonPivot); //swap index
				nonPivot--;
			}
		}
	}//while

	return pivot;
}

void recQuickSort(int arr[], int left, int right){
	int p;//pivot index
	if (left < right){
		//partition left and right of pivot
		p = partition(arr, left, right);

		//recursively sort each side
		recQuickSort(arr, left, p - 1);
		recQuickSort(arr, p + 1, right);
	}
}