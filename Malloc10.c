#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N;
    
    printf("Podaj liczbę: ");
    scanf("%i", &N);
    
    int **tab = malloc(N * sizeof(int*));
    
    for (int i = 0; i < N; i++){
        int x = N - i;
            
        tab[i] = malloc(x * sizeof(int));
            
        for (int j = 0; j < x; j++){
            tab[i][j] = 7;
            
            printf("%i ", tab[i][j]);
        }
            
        printf("\n");
    }
    
    for (int i = 0; i < N; i++){
        free(tab[i]);
    }
    
    free(tab);
    tab = NULL;
    
    return 0;
}