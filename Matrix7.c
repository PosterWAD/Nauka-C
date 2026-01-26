#include <stdio.h>

int main() {
    int tablica[14][11];
    int licznik = 1; 
    
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 11; j++) {
            tablica[i][j] = licznik;
            licznik++;
        }
    }

    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 11; j++) {
            int liczba = tablica[i][j];

            if ((liczba % 2 == 0 || liczba % 3 == 0) && (liczba % 6 != 0)) 
            {
                tablica[i][j] = -5;
            }
        }
    }

    int suma = 0;
    
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 11; j++) {
            suma = suma + tablica[i][j];
        }
    }

    float srednia = suma / (14.0 * 11.0); 

    printf("Wymiary macierzy: %i x %i\n", 14, 11);
    printf("Suma: %i\n", suma);
    printf("Średnia arytmetyczna: %.2f\n", srednia);

    return 0;
}