#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// Passing Message to thread.
void *PrintHello(void *threadid){
	printf("\n %d: Hello world \n", threadid);
}


int main(){
	pthread_t threads[5];
	int t;

	for(t=0 ; t < 5 ; t++){
		printf("Creating thread %d\n", t);
		pthread_create(&threads[t], NULL, PrintHello, (void *)t);
	}
}


