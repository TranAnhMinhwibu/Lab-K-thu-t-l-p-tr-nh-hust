#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    scanf("%d", &n);
    int mt[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &mt[i]);
    }

    for (int i = 0; i < n; i += 1){
        for (int j = i; j < n; j += 1){
            for (int k = i; k <= j; k++){
                printf("\t%d", mt[k]);
            }
            printf("\n");
        }
    }

    return 0;
}