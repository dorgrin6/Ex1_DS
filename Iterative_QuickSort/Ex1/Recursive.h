#include <stdlib.h>
#include <time.h>
#include <iostream>

#ifndef _RECURSIVE_H_
#define _RECURSIVE_H_
void choosePivot(int arr[], int size);
int partition(int arr[], int left, int right);
void recQuickSort(int arr[], int left, int right);
void swap(int *p1, int *p2);

void printArr(int arr[], int size);
#endif
