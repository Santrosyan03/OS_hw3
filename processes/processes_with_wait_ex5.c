#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child, pid is %d\n", getpid());
        exit(0);
    } else if (pid > 0) {
        printf("Parent, pid is %d\n", getpid());
        wait(NULL);
    }
    return 0;
}
