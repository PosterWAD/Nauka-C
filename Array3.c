#include <stdio.h>

int main() {

    int tablica[5];
    int max = tablica[0]; // Zakładam, że najwieksza liczba juz jest

    for (int i = 1; i <= 4; i++) // Zaczynam sprawdzanie od drugiego indeksu (indeks 1)
    {
        printf("Podaj liczby:");
        scanf("%i", &tablica[i]);
        
            if (tablica[i] > max)
            {
                max = tablica[i];
            }
        
    }
    
    printf("Największa liczba to: %i", max);
    return 0;
}