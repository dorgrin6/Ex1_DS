#include "QuickSort.h"
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

void itrQuickSort(int arr[], int left, int right) {

	Stack S;
	ItemType Curr (left, right,0, START);
	bool returnFromRecursion = false; //holds 'true' if we suppose to go to the previous recursion call, 'false' else
	int p; //holds the index of partition

	do {
		if (returnFromRecursion) //if we suppose to go to the previous recursion call, it pops the last data from stack
			Curr = S.pop();
		if (Curr.getLine() == START) {
			if (Curr.getLeft() >= Curr.getRight()) //the recursion call has reached to its stopping condition
				returnFromRecursion = true;
			else {
				p = partition(arr, Curr.getLeft(), Curr.getRight());
				Curr.setPivot(p);
				//saving the data of the current recursion call:
				Curr.setLine(AFTER_FIRST);
				S.push(Curr);
				//getting ready for the next recursion call:
				Curr.setRight(p - 1);
				Curr.setLine(START);
				returnFromRecursion = false;
			}
		}//if

		else if (Curr.getLine() == AFTER_FIRST) {
			p = Curr.getPivot();
			//saving the data of the current recursion call:
			Curr.setLine(AFTER_SECOND);
			S.push(Curr);
			//getting ready for the next recursion call:
			Curr.setLeft(p + 1);
			Curr.setLine(START);
			returnFromRecursion = false;
		}//if

		else if (Curr.getLine() == AFTER_SECOND) {
			returnFromRecursion = true;
		}//if
	}
	while (!S.isEmpty());
}