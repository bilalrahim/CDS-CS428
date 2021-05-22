#include <omp.h>
#include <stdio.h>

int main()
{
	int tid ;
	int i;
	#pragma omp parallel num_threads(2) private(tid) reduction(+:i)
	{
		
		tid = omp_get_thread_num();
			
		#pragma omp for
			for(i=0; i < 20 ; i++){
				printf("%3d By %3d \n", i,tid);
			}
	}
}
