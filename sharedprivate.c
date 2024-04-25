#include <omp.h>
#include <stdio.h>
int main(){
        int shared_var = 5; // shared variable
	printf("thread = %d : value of x before parallel region = %d, address = %p \n",omp_get_thread_num(), shared_var, &shared_var);

#pragma omp parallel firstprivate (shared_var)
       {       
	       shared_var += omp_get_thread_num(); // each thread increments its private copy
                printf("thread %d has private x = %d, address = %p \n", omp_get_thread_num(), shared_var, &shared_var);
        }
       printf("outside parallel region : shared_var = %d\n", shared_var);
       return 0;
}

