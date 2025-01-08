#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char *sem_name = "sema"; // Name of the semaphore
    sem_t *sem; // Semaphore pointer
    int value = 1; // Initial value of the semaphore

    // Create and initialize the named semaphore
    sem = sem_open(sem_name, O_CREAT | O_EXCL, 0644, value);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(EXIT_FAILURE);
    }

    // Simulate some work by waiting on the semaphore
    printf("Waiting to enter critical section...\n");
    sem_wait(sem); // Decrement the semaphore

    // Critical section
    printf("Entered critical section.\n");
    sleep(2); // Simulate work in the critical section
    printf("Exiting critical section.\n");

    // Signal the semaphore
    sem_post(sem); // Increment the semaphore

    // Close the semaphore
    if (sem_close(sem) < 0) {
        perror("sem_close");
        exit(EXIT_FAILURE);
    }

    // Unlink the semaphore to remove it from the system
    if (sem_unlink(sem_name) < 0) {
        perror("sem_unlink");
        exit(EXIT_FAILURE);
    }

    return 0;
}
