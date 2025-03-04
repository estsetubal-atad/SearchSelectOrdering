#include <stdio.h>
#include "arrays.h"

void arrayPrint(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}


int sequentialSearch(int val, int arr[], int arrLength) {
    /* TODO */
    return -1;
}

int maximumIndex(int arr[], int arrLength) {
    /* TODO */
    return -1;
}

int minimumIndex(int arr[], int arrLength) {
    /* TODO */
    return -1;
}

void bubbleSortAscending(int arr[], int arrLength) {
    /* TODO */
}


void selectionSortDescending(int arr[], int arrLength) {
    /* TODO */
}
