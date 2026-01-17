#include <stdio.h>

int main() {

    int tablica[5];

    for (int i = 0; i < 5; i++) // Tutaj tylko wpisuję liczby do tablica[5]
    {
        printf("Podaj liczby:");
        scanf("%i", &tablica[i]);
        
    }
    
    int min = tablica[0]; // Zakładam, że pierwsza podana wartość jest najmniejsza, ale kod zaraz sam sprawdzi, która tak na prawdę jest
    
    for (int i=1; i < 5; i++) // Zaczynałem wcześniej od i = 0 co oznaczało, że w pierwszym ruchu pętla sprawdza: "Czy tablica[0] jest mniejsza od tablicy[0]?
    {
            if (tablica[i] < min)
            {
                min = tablica[i];
            }
    }

    printf("Najmniejsza podana liczba to: %i", min);
    return 0;
}