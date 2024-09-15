#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child process done!!!. pid is %d\n", getpid());
    } else if (pid > 0) {
        printf("Parent process done!!!. pid is %d\n", getpid());
    } else {
        printf("Fork process failed!!!.\n");
    }
    return 0;
}
