#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define FIFO_NAME "my_fifo"
#define BUFFER_SIZE 100

// Function for CASE-I: Parent and Child Process Communication
void case_one() {
    int fd;
    char buffer[BUFFER_SIZE];

    // Create the FIFO (named pipe)
    mkfifo(FIFO_NAME, 0666);

    // Fork to create a child process
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) { // Child process
        // Open the FIFO for writing
        fd = open(FIFO_NAME, O_WRONLY);
        const char *message = "Hello from the child process!";
        write(fd, message, strlen(message) + 1); // +1 for null terminator
        close(fd);
    } else { // Parent process
        // Open the FIFO for reading
        fd = open(FIFO_NAME, O_RDONLY);
        read(fd, buffer, sizeof(buffer));
        printf("Parent received: %s\n", buffer);
        close(fd);

        // Wait for the child process to finish
        wait(NULL);
    }

    // Remove the FIFO
    unlink(FIFO_NAME);
}

// Function for CASE-II: Independent Process Communication
void case_two() {
    int fd;
    char buffer[BUFFER_SIZE];

    // Create the FIFO (named pipe)
    mkfifo(FIFO_NAME, 0666);

    // Fork to create a child process
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) { // Child process
        // Open the FIFO for writing
        fd = open(FIFO_NAME, O_WRONLY);
        const char *message = "Hello from the independent child process!";
        write(fd, message, strlen(message) + 1); // +1 for null terminator
        close(fd);
        exit(0);
    } else { // Parent process
        // Wait for the child process to finish
        wait(NULL);

        // Open the FIFO for reading
        fd = open(FIFO_NAME, O_RDONLY);
        read(fd, buffer, sizeof(buffer));
        printf("Independent process received: %s\n", buffer);
        close(fd);
    }

    // Remove the FIFO
    unlink(FIFO_NAME);
}

int main() {
    printf("CASE-I: Parent and Child Process Communication\n");
    case_one();

    printf("\nCASE-II: Independent Process Communication\n");
    case_two();

    return 0;
}
