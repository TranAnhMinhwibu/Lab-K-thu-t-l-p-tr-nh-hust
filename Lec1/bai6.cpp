#include <stdio.h>

void reversearray(int arr[], int size){ 
    int l = 0, r = size - 1, tmp; 
    
    while(l < r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        ++l;
        --r;
    }

} 
 
void ptr_reversearray(int *arr, int size){ 
    int l = 0, r = size - 1, tmp; 
     
    while(l < r){
        tmp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = tmp;
        ++l;
        --r;
    }
    
} 

int main(){
    int arr[5] = {1, 2, 3, 4, 5}; 
    reversearray(arr, 5); 
    
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n"); 
    
    ptr_reversearray(arr, 5); 
    
    for (int i = 0; i < 5; i++){
        printf("%d ", *(arr + i));
    }
    
    return 0;
}