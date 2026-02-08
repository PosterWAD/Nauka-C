#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n = 5;
    
    int **tab = malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++){
        int x = n - i;
        
        tab[i] = malloc(x * sizeof(int));
        
        for (int j = 0; j < x; j++){
        tab[i][j] = x;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        int x = n - i;
        for (int j = 0; j < x; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++){
        free(tab[i]);
        tab[i] = NULL;
    }
    
    free(tab);
    tab = NULL;
    
    return 0;
}