#include <stdio.h>

typedef struct {
    char tytul[50];
    float ocena;
} GraKomputerowa;




int main()
{
    
    GraKomputerowa gra;
    
    printf("Podaj tytuł gry: ");
    scanf("%s", gra.tytul);
    printf("Podaj ocenę gry: ");
    scanf("%f", &gra.ocena);
    printf("\nGra %s ma ocenę %.2f", gra.tytul, gra.ocena);

    return 0;
}