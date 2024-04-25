#include <omp.h>
#include <stdio.h>
 int main(){
    /**/
    omp_set_num_threads(64); 
    #pragma omp parallel
    {
      printf("hello world%d\n", omp_get_thread_num());
    }


    return 0;
 }

