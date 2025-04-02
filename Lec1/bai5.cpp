#include <stdio.h>

double* maximum(double* a, int size){ 
    double *max; 
    max = a; 
    if (a==NULL) return NULL; 

    for (int i = 0; i < size; i++){
        if((a + i) > max){
            max = (a + i);
        }
    }
    
    return max; 
}

int main(){
    double a[5] = {1.0, 2.0, 3.0, 4.0, 5.0}; 
    double *max = maximum(a, 5); 
    printf("Max: %f", *max); 
    return 0;
}