#include <stdio.h>

void printArray(int arr[], int size) {
	int *arrr[size];
    for (int i = 0; i < size; i++) {
    	arrr[i] = &arr[i];
        printf("%p ",arrr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // The function receives the array using array notation
    printArray(numbers, size);

    // The function receives the array using pointer notation
    printArray(&numbers[0], size);

    return 0;
}

