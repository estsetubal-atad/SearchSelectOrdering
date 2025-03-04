#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

#define LEN 10

int main() {

    int v[LEN] = {26, 49, 1, 12, 2, 14, 29, 34, 44, 35};
    arrayPrint(v, LEN);

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



