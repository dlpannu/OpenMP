#include <omp.h>
#include <stdio.h>
int main(){
	//check if the main thread is in a parallel region
	if(omp_in_parallel()){
	    printf("main thread is in a parallel region.\n");
	}
	else
	{
		printf("main thread is not  in a parallel region.\n");
	}
	
#pragma omp parallel
	{
		//check if a worker thread is in a parallel region
		if(omp_in_parallel){

		printf("The thread %d is executing inside parallel region\n", omp_get_thread_num());
	}
		else {
			printf("Thread %d is Not in a parallel region.\n", omp_get_thread_num());
		}
	}

	return 0;
}

