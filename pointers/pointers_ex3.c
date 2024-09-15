#include <stdio.h>

int swap(int *first_number, int *second_number) {
    int temporary_number = *first_number;
    *first_number = *second_number;
    *second_number = temporary_number;
}

int main() {
    int first_number = 7, second_number = 9;
    printf("---------------------------------------------------\n");
    printf("Numbers before swapping are %d and %d\n", first_number, second_number);
    swap(&first_number, &second_number);
    printf("---------------------------------------------------\n");
    printf("Numbers before swapping are %d and %d\n", first_number, second_number);
    return 0;
}