/*WAP to implement delete-Front, any position in between & end in an array. Print
the array before delete & after delete.*/

#include <stdio.h>

void deleteFront(int arr[], int *size) {
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int position) {
    if (position < *size) {
        for (int i = position; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
}

void deleteEnd(int arr[], int *size) {
    (*size)--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original Array: ");
    printArray(arr, size);

    deleteFront(arr, &size);
    printf("After deleting front: ");
    printArray(arr, size);

    deleteAtPosition(arr, &size, 2);  // Delete element at position 2
    printf("After deleting at position 2: ");
    printArray(arr, size);

    deleteEnd(arr, &size);
    printf("After deleting end: ");
    printArray(arr, size);

    return 0;
}
