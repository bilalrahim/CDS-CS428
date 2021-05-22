#define SIZE 10 			// delete this line when testing is complete

double A[SIZE][SIZE];
double B[SIZE][SIZE];
double C[SIZE][SIZE];

int main()
{
	int t, u;
	/* Input Data */
	for (t = 0; t < SIZE; t++) {
		for (u = 0; u < SIZE; u++) {
			A[t][u] = B[u][t] = 1;
		}
	}

	struct timespec start, finish;
	double elapsed;

	clock_gettime(CLOCK_MONOTONIC, &start);

	// threaded stuff here

	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed  = (finish.tv_sec - start.tv_sec);
	elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0; 

	for (t = 0; t < SIZE; t++) {
		for (u = 0; u < SIZE; u++) {
			printf("%.0f ", C[t][u]);
		}
		printf("\n");
	}

	fprintf(stderr, "Time: %f s\n", elapsed);	// Do not modify this line
}

