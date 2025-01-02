#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_ITERATIONS 5

sem_t semX; 
sem_t semY; 
sem_t semZ; 

void* printX(void* arg) {
    for (int i = 0; i < NUM_ITERATIONS; i++) {
        sem_wait(&semX);
        printf("X");
        printf("X");
        sem_post(&semY); 
    }
    return NULL;
}

void* printY(void* arg) {
    for (int i = 0; i < NUM_ITERATIONS; i++) {
        sem_wait(&semY); 
        printf("Y");
        sem_post(&semZ); 
    }
    return NULL;
}

void* printZ(void* arg) {
    for (int i = 0; i < NUM_ITERATIONS; i++) {
        sem_wait(&semZ); 
        printf("Z");
        printf("Z");
        sem_post(&semX); 
    }
    return NULL;
}

int main() {
    pthread_t threadX, threadY, threadZ;

    sem_init(&semX, 0, 1); 
    sem_init(&semY, 0, 0);
    sem_init(&semZ, 0, 0); 

    pthread_create(&threadX, NULL, printX, NULL);
    pthread_create(&threadY, NULL, printY, NULL);
    pthread_create(&threadZ, NULL, printZ, NULL);

    pthread_join(threadX, NULL);
    pthread_join(threadY, NULL);
    pthread_join(threadZ, NULL);

    sem_destroy(&semX);
    sem_destroy(&semY);
    sem_destroy(&semZ);

    return 0;
}
