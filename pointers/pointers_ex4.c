#include <stdio.h>

int main() {
    int number = 7;
    int *pointer = &number; 
    int **pointer_to_pointer = &pointer;
    printf("---------------------------------------------------\n");
    printf("Value of number is %d\n", number);
    printf("Value of pointer is %d\n", *pointer);
    printf("Value of pointer_to_pointer is %d\n", **pointer_to_pointer);
    return 0;
}