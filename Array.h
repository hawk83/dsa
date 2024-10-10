#ifndef ARRAY_H
#define ARRAY_H

void bubbleSort(int array[], int size);
void insertionSort(int array[], int size);

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right) ;

int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

#endif