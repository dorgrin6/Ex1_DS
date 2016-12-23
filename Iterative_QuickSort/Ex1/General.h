#include <stdlib.h>
#include <time.h>
#include <iostream>

#ifndef _GENERAL_H_
#define _GENERAL_H_
void chooseRandomPivot(int arr[], int size);
int partition(int arr[], int left, int right);
void recQuickSort(int arr[], int left, int right);
void swap(int &p1, int &p2);
void printArr(int arr[], int size);
#endif

