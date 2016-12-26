
#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_


#include <stdlib.h>
#include <time.h>
#include "Stack.h"

const int notFound = -1;//signals value wasn't found

//chooseRandomPivot: chooses random pivot in array and switches it with arr[0]
void chooseRandomPivot(int arr[], int size);
//partition: partitions array around pivot
int partition(int arr[], int left, int right);
//swap: swaps p1 and p2 values
void swap(int &p1, int &p2);
//recQuickSort: recursive version of quicksort
void recQuickSort(int arr[], int left, int right);
//itrQuickSort: iterative version of quicksort
void itrQuickSort(int arr[], int left, int right);
#endif

