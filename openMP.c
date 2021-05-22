#include <omp.h>
#include <stdio.h>
int main()
{
	int tid;
	printf("%d \n",omp_in_parallel());
	#pragma omp parallel num_threads(4)
	{
		tid = omp_get_thread_num();
		printf("Hello from %d \n", tid);
		printf("%d \n",omp_in_parallel());
	}
}
