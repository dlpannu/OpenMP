#include <omp.h>
#include <stdio.h>
 int main(){
    /**/
    omp_set_num_threads(6); 
    #pragma omp parallel num_threads(8)
    {
      printf("hello world\n");
    }
   
    return 0;
 }
