#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Towar{
    char nazwa[20];
    int waga;
    float cena;
}Towar;

int main()
{
    Towar sklep[3] = {
        {"Chleb", 500, 5.50}, 
        {"Woda", 1500, 2.50}, 
        {"Ser", 100, 4.50}
    };
    
    float suma = 0;
    
    for (int i = 0; i < 3; i++){
        printf("Towar: %s\n", sklep[i].nazwa);
        printf("Cena: %.2f\n", sklep[i].cena);
        suma += sklep[i].cena;
    }
    
    printf("\nCena za wszystkie produkty to: %.2f", suma);
    
    
    return 0;
}