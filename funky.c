#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size);
double avgArray(int *arr, int size);
void copyArray(int *arr1, int *arr2, int size);

int main() {
    int x[] = {6,2,22};
    int y[3];
    printArray(x, 3);
    printf("%d\n", avgArray(x,3));
    copyArray(x, y, 3);
    printArray(y, 3);

    return 0;
}

void printArray(int *arr, int size) {
    int i;
    printf("[ ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

double avgArray(int *arr, int size) {
    int i = 0, total = 0;
    for(i; i < size; i++) {
        total += arr[i];
    }
    return (double)total/size;
}

void copyArray(int *arr1, int *arr2, int size) {
    int i;
    int *p1 = arr1, *p2 = arr2;
    for(i = 0; i < size; i++) {
        *p2++ = *p1++;
    }
}
