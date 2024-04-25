#include <omp.h>
#include <stdio.h>
 int main(){
    /**/
    int x =100;
    omp_set_num_threads(300); 
    #pragma omp parallel
    {
      #pragma omp critical
    {
      int sum; 
      sum = x(X+1)/2
     printf("x=%d \n ", x);   
    }
     
    }
    printf("x=%d \n ", x);

    return 0;
 }

