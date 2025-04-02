#include <stdio.h>

int counteven(int* arr, int size){ 
    int count = 0; 
    
    for (int i = 0; i < size; i++){ 
        if (*(arr + i) % 2 == 0){ 
            count++; 
        } 
    }
    return count;     
} 

int main(){
    int n[] = {1, 2, 3, 4, 5, 6};
    counteven(n, 6);
    printf("%d", counteven(n, 6));
    return 0;
}