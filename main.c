#include<stdio.h>
#include"Array.h"
void bubbleSort(int array[], int size);
void insertionSort(int array[], int size);

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right) ;

int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main(){
    int n;
    printf("enter size of array: ");
    scanf(" %d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n[%d]array: ", i+1);
        scanf(" %d", &array[i]);
    }
    int key;
    printf("1.array Bubble sort\n2.array Insretion sort\n3.array Merge Sort\n4.array Quick Sort");
    printf("\nEnter an key; ");
    scanf(" %d", &key);
    switch (key)
    {
    case 1:
        bubbleSort(array, n);
        printf("Bubble Sort complit");
        for (int i = 0; i < n; i++)
        {
            printf("\narray[%d]: %d ", i, array[i]);
        }
        break;
    case 2:
        insertionSort(array, n);
        printf("Insertion Sort complit");
        for (int i = 0; i < n; i++)
        {
            printf("\narray[%d]: %d ", i, array[i]);
        }
        break;
      case 3:
        mergeSort(array, 0, n - 1);
        printf("Merge Sort complit");
        for (int i = 0; i < n; i++)
        {
            printf("\narray[%d]: %d ", i, array[i]);
        }
        break;
      case 4:
        quickSort(array, 0, n - 1);
        printf("Quick Sort complit");
        for (int i = 0; i < n; i++)
        {
            printf("\narray[%d]: %d ", i, array[i]);
        }
        break;
    default:
        break;
    }
}