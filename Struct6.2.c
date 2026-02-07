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
    Towar tw;
    
    printf("Podaj nazwę produktu: ");
    scanf("%s", tw.nazwa);
    printf("Podaj wagę produktu (w gramach): ");
    scanf("%i", &tw.waga);
    printf("Podaj cenę produktu: ");
    scanf("%f", &tw.cena);
    
    printf("\nNazwa: %s", tw.nazwa);
    printf("\nWaga: %ig", tw.waga);
    printf("\nCena: %.2fzł", tw.cena);
    
    
    return 0;
}