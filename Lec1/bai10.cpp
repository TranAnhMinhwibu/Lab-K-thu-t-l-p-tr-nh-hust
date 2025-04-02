#include <stdio.h> 
#include <stdlib.h>
 
void allocate_mem(int ***mt, int n){ 
    //#Allocate memory for the matrix 
     
    *mt = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) { 
        (*mt)[i] = (int *)malloc(n * sizeof(int)); 
    }

} 
 
 
void input(int **mt, int n){ 
    //#Input elements of the matrix 
     
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mt[i][j]);
        }
    }

} 
 
 
int process(int **mt, int n){ 
    int tong = 0; 
    //# Calculate the sum of all even elements in the matrix 
     
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            tong += mt[i][j];
        }
    }
     
    return tong; 
} 

int process2(int **mt, int n){ 
    int tich = 1; 
    //# Calculate the tich of all even elements in the matrix 
     
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            tich *= mt[i][j];
        }
    }
     
    return tich; 
}
 
void free_mem(int **mt, int n){ 
    //# Free memory 
     
    for (int i = 0; i < n; i++){
        free(mt[i]);
    }
    free(mt);
} 
 
int main(){ 
    int n, **mt, **mt2; 
    scanf("%d", &n); 

    allocate_mem(&mt, n); 
    allocate_mem(&mt2, n);

    input(mt, n); 
    input(mt2, n);

    printf("%d\t", process(mt, n)); 
    printf("%d", process2(mt, n)); 
    printf("\n");

    printf("%d\t", process(mt2, n));
    printf("%d", process2(mt2, n));

    free_mem(mt, n); 
    free_mem(mt2, n);
    
    return 0; 
} 