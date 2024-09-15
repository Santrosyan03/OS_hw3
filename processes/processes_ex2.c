#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;
    int status;
    pid1 = fork();
    if (pid1 == 0) {
        printf("First child. pid is: %d\n", getpid());
        exit(1);
    } else if (pid1 < 0) {
        perror("fork failed for first child");
        return 1;
    }
    pid2 = fork();
    if (pid2 == 0) {
        printf("Second child. pid is: %d\n", getpid());
        exit(2);
    } else if (pid2 < 0) {
        perror("fork failed for second child");
        return 1;
    }
    waitpid(pid2, &status, 0);
    if (WIFEXITED(status)) {
        printf("Second child exited with status: %d\n", WEXITSTATUS(status));
    }
    wait(&status);
    if (WIFEXITED(status)) {
        printf("First child exited with status: %d\n", WEXITSTATUS(status));
    }
    return 0;
}
