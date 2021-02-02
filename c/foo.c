c// Compile with `gcc foo.c -std=c99 -lpthread`, or use the makefile

#include <pthread.h>
#include <stdio.h>

int i = 0;
int number_of_executions = 1000000;

// Note the return type: void*
void* incrementingThreadFunction(){
    // TODO: increment i 1_000_000 times
    for (int inc = 0; inc<number_of_executions; ++inc) {
        ++i;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int inc = 0; inc<number_of_executions; ++inc) {
        --i;
    }
    return NULL;
}


int main(){
    pthread_t incrementingThread;
    pthread_t decrementingThread;
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    printf("%lu\n", sizeof(int));
    return 0;
}
