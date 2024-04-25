#include <omp.h>
#include <stdio.h>
int main(){
        int x = 2;
	printf("thread = %d : value of x before parallel region = %d, address = %p \n",omp_get_thread_num(), x, &x);

#pragma omp parallel private (x)
       {     printf("thread = %d : value of x inside parallel region = %d, address = %p \n",omp_get_thread_num(), x, &x);
	       x = omp_get_thread_num();
                printf("thread %d has private x = %d, address = %p \n", omp_get_thread_num(), x, &x);
        }

       printf("thread = %d : value of x outside parallel region = %d, address = %p  \n", omp_get_thread_num(), x, &x);
       return 0;

}

