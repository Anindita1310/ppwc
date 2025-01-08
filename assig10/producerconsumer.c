
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFERSIZE 5
#define NUMITERATIONS 10
int in,out=0;
sem_t empty,full;
pthread_mutex_t mutex;
int buffer[BUFFERSIZE];
void *producer(void *args){
    for(int i=0;i<NUMITERATIONS;i++){
        int item=rand()%100;
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in]=item;
        printf("Produced %d at index %d",item,in);
        in=(in+1)%BUFFERSIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
        
        sleep(rand()%2);
        
    }
    return NULL;
}
void *consumer(void *args){
    for(int i=0;i<NUMITERATIONS;i++){
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        int item=buffer[out];
        printf("Consumed %d at index %d",item,out);
        out=(out+1)%BUFFERSIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
        
        sleep(rand()%2);
    }
    return NULL;
}
int main(){
    sem_init(&empty,0,BUFFERSIZE);
    sem_init(&full,0,0);
    pthread_mutex_init(&mutex,NULL);
    
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,producer,NULL);
    pthread_create(&thread2,NULL,consumer,NULL); 
    
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    
    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);
    
    return 0;
}

