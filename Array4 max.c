#include <stdio.h>

int main() {

    int tablica[5];

    for (int i = 0; i < 5; i++) // Tutaj tylko wpisuję liczby do tablica[5]
    {
        printf("Podaj liczby:");
        scanf("%i", &tablica[i]);
        
    }
    
    int max = tablica[0]; // Zakładam, że pierwsza podana wartość jest największa, ale kod zaraz sam sprawdzi, która tak na prawdę jest
    
    for (int i=0; i < 5; i++)
    {
            if (tablica[i] > max)
            {
                max = tablica[i];
            }
    }

    printf("Największa liczba to: %i", max);
    return 0;
}