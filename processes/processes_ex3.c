#include <stdio.h>
#include <stdlib.h>

void goodbye1() {
    printf("Goodbye from function 1!\n");
}

void goodbye2() {
    printf("Goodbye from function 2!\n");
}

int main() {
    atexit(goodbye1);
    atexit(goodbye2);
    printf("MAIN PROGRAM. Calling exit...\n");
    exit(0);
    return 0;
}
