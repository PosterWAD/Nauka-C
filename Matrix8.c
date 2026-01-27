#include <stdio.h>

#define N 11 // Stała

int main() {
    int tablica[N][N];

    for (int i = 0; i < N; i++) {  
        for (int j = 0; j < N; j++) {  
            
            // 1 przekątna: i jest równe j
            // 2 przekątna (prawy-góra -> lewy-dół): suma indeksów to  N-1 (czyli dla N = 11 będzie to 10)
            if (i == j || (i + j == N - 1)) {
                tablica[i][j] = 1;
            } else {
                tablica[i][j] = 0;
            }
            
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (tablica[i][j] == 1) {
                printf("0 "); 
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}