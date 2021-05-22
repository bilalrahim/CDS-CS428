#include <omp.h>
#include <stdio.h>

int main()
{
	int i;
	int sum= 0 ;
	int arr [] = {1,2,3,4};
	int arrTwo [] = {5,6,7,8};

	#pragma omp parallel num_threads(2) reduction(+: sum)
	{
		#pragma omp for
			for (i = 0 ; i < 8 ; i++)
			{
				sum += arr[i] + arrTwo[i];
				printf("%d %d %d\n", sum, i, omp_in_parallel());
			}
		return sum
	}
	printf("%d \n", sum);
}
