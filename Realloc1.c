#include <stdio.h>
#include <stdlib.h>

int *parzyste(int *tabWE, int n, int *nowy_rozmiar) {
    
    int *tabWY = malloc(n * sizeof(int));
    
    if (tabWY == NULL) {
        return NULL; 
    }

    int licznik = 0; 

    for (int i = 0; i < n; i++) {
        if (tabWE[i] % 2 == 0) {
            tabWY[licznik] = tabWE[i];
            licznik++; 
        }
    }

    if (licznik > 0) {
        tabWY = realloc(tabWY, licznik * sizeof(int));
    } else {
        free(tabWY);
        tabWY = NULL;
    }

    *nowy_rozmiar = licznik;

    return tabWY;
}

int main() {
    int n = 6;
    int *tablica = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        tablica[i] = i + 1; // [1, 2, 3, 4, 5, 6]
    }
    
    int rozmiar_nowej;
    int *nowaTab = parzyste(tablica, n, &rozmiar_nowej);
    
    printf("Tab nowych liczb parzystych:\n", rozmiar_nowej);
    for (int i = 0; i < rozmiar_nowej; i++) {
        printf("%d ", nowaTab[i]);
    }
    
    free(tablica);
    free(nowaTab);
    
    return 0;
}