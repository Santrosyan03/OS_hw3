#include <stdio.h>

int main() {
    int number = 7;
    int *pointer = &number;
    printf("---------------------------------------------------\n");
    printf("Address of written number is %p\n", &number);
    printf("Address of written number with pointer is %p\n", pointer);
    *pointer += 14;
    printf("---------------------------------------------------\n");
    printf("New value of number is %d\n", number);
    return 0;
}
