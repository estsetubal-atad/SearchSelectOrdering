#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

#define LEN 10

int sequentialSearch(int val, int arr[], int arrLength);
int maximumIndex(int arr[], int arrLength);
int minimumIndex(int arr[], int arrLength);
void bubbleSortAscending(int arr[], int arrLength);
void selectionSortDescending(int arr[], int arrLength);
void printArray(int arr[], int arrLength);

int main() {

    int v[LEN] = {26, 49, 1, 12, 2, 14, 29, 34, 44, 35};
    printArray(v, LEN);

    int val;
    printf("Lets search a number?: ");
    readInteger(&val);

    int index = sequentialSearch(val, v, LEN);

    if(index != -1) {
        printf("The number %d exists at position %d of the array!\n", val, index);
    } else {
        printf("The number %d does not exist in the array!\n", val);
    }

    /* TODO: test other functions */

    return EXIT_SUCCESS;
}

/* TODO: missing function definitions */ 

int sequentialSearch(int val, int arr[], int arrLength) {
    /* TODO */
    return -1;
}

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

