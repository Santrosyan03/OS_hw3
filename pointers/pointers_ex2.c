#include <stdio.h>

int main() {
    int array_of_numbers[5] = {7, 14, 21, 28, 35};
    int *pointer = array_of_numbers;
    printf("---------------------------------------------------\n");
    printf("Array before updating...\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d is %d\n", i, *(pointer + i));
    }
    for (int i = 0; i < 5; i++) {
        *(pointer + i) += 7;
    }
    printf("---------------------------------------------------\n");
    printf("Array after updating...\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d is %d\n", i, array_of_numbers[i]);
    }
    return 0;
}