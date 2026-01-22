#include <stdio.h>

// Definicja struktury
typedef struct {
    char marka[50];
    int rok, przebieg, cena;
} Samochod; // <--- WAŻNE: Średnik na końcu struktury!

int main() {
    
    Samochod Auto[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Podaj markę %i pojadzu: ", i + 1);
        scanf("%s", Auto[i].marka);
        printf("Podaj rok wyprodukowania pojadzu: ");
        scanf("%i", &Auto[i].rok);
        printf("Podaj przebieg pojadzu: ");
        scanf("%i", &Auto[i].przebieg);
        printf("Podaj cenę pojadzu: ");
        scanf("%i", &Auto[i].cena);
        printf("\n");
    }
    
    printf(" ====== Twoje Samochody ====== \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Marka: %s", Auto[i].marka);printf("\n");
        printf("Rok produkcji: %i", Auto[i].rok);printf("\n");
        printf("Przebieg: %i", Auto[i].przebieg);printf("\n");
        printf("Cena: %i", Auto[i].cena);printf("\n"); // Tutaj bez &
        printf("\n");
    }
    
    
    return 0;
}