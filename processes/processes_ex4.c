#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;
    int status;
    pid1 = fork();
    if (pid1 == 0) {
        printf("First child. pid is: %d\n", getpid());
        exit(3);
    }
    pid2 = fork();
    if (pid2 == 0) {
        printf("Second child. pid is: %d\n", getpid());
        exit(4);
    }
    waitpid(pid1, &status, 0);
    printf("First child exited with status: %d\n", WEXITSTATUS(status));
    waitpid(pid2, &status, 0);
    printf("Second child exited with status: %d\n", WEXITSTATUS(status));
    return 0;
}
