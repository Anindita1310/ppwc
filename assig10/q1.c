#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int shrd = 5; // Shared variable
    pid_t pid1, pid2;

    // Create first child process
    pid1 = fork();
    if (pid1 == 0) {
        // P1 executes
        int x = shrd; // Read shared variable
        x = x + 1;    // Increment
        sleep(1);     // Simulate processing
        shrd = x;     // Write back
        printf("P1: Final value of shrd = %d\n", shrd);
        exit(0);
    }

    // Create second child process
    pid2 = fork();
    if (pid2 == 0) {
        // P2 executes
        int y = shrd; // Read shared variable
        y = y - 1;    // Decrement
        sleep(1);     // Simulate processing
        shrd = y;     // Write back
        printf("P2: Final value of shrd = %d\n", shrd);
        exit(0);
    }

    // Wait for both child processes to finish
    wait(NULL);
    wait(NULL);

    // Print final value of shared variable
    printf("Main: Final value of shrd = %d\n", shrd);
    return 0;
}
