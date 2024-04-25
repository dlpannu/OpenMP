#include <stdio.h>
 int main(){
    /**/
    omp_set_num_threads(6); 
    #pragma omp parallel num_threads(4)
    {
      printf("hello world\n");
    }

    #pragma omp parallel
    {
      printf("hello openMP\n");
    }

    return 0;
 }

