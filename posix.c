/* Using Pthreads in C*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *foo()
{
    sleep(1);
    printf("this is by thread 1 \n");
}

void *fee()
{
    sleep(1);
    printf("this is by thread 2 \n");
}

int main()
{
    pthread_t t1, t2;
    printf("In main function \n");
    pthread_create(&t1, NULL, foo, NULL);
    pthread_create(&t2, NULL, fee, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    
    return 0;    
}
