#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
//#include <unistd.h>

sem_t sync; 

void* process1(void* arg) {
   
    printf("Process 1: Executing statement a\n");
    sleep(1); 
    sem_post(&sync);
    return NULL;
}

void* process2(void* arg) {
 
    sem_wait(&sync);

    printf("Process 2: Executing statement b\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

   
    sem_init(&sync, 0, 0);

    
    pthread_create(&thread1, NULL, process1, NULL);
    pthread_create(&thread2, NULL, process2, NULL);

   
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

   
    sem_destroy(&sync);

    return 0;
}
