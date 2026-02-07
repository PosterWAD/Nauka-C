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
    Towar tw = {"Chlebek", 500, 5.50};
    
    printf("\nNazwa: %s", tw.nazwa);
    printf("\nWaga: %ig", tw.waga);
    printf("\nCena: %.2f", tw.cena);
    
    
    return 0;
}