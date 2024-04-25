#include <omp.h>
#include <stdio.h>
 int main(){
    /**/

    omp_set_num_threads(6);
    #pragma omp parallel
    {
      printf("hello worldghffg\n");
    }
   
    return 0;
 }
