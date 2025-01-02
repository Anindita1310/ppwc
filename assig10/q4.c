#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t S; 
sem_t Q;

void* process1(void* arg) {
    for (;;) {
        sem_wait(&Q); 
        sem_wait(&S); 
      
        printf("Process 1: Executing critical section a\n");
        sleep(1); 
        sem_post(&S); 
        sem_post(&Q); 
    }
    return NULL;
}

void* process2(void* arg) {
    for (;;) {
        sem_wait(&S); 
        sem_wait(&Q);
        printf("Process 2: Executing critical section b\n");
        sleep(1); 
        sem_post(&Q); 
        sem_post(&S); 
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;


    sem_init(&S, 0, 1); 
    sem_init(&Q, 0, 1);


    pthread_create(&thread1, NULL, process1, NULL);
    pthread_create(&thread2, NULL, process2, NULL);

   
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

  
    sem_destroy(&S);
    sem_destroy(&Q);

    return 0;
}
