/* A program that creates 10 threads and prints hello*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *hello()
{
    printf("Hello \n");
}

int main()
{
    pthread_t threads[10];
    int t;
    
    for(t=0; t < 10; t++)
    {
	pthread_create(&threads[t], NULL, hello, NULL);
     // pthread_join(threads[t], NULL);
     // uncomment the above line and everything will be in a sequential manner
     // no change with threads in execution time. :(
    }

    // To run all threads simultaneously join them in a different loop.
    for(t=0; t<10; t++){
	pthread_join(threads[t], NULL);
    }
}
