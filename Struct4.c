#include <stdio.h>

typedef struct {
    char imie[50];
    int wiek;
    float pensja;
} Pracownik;


int main()
{
    Pracownik kadra[3];
    
    int max_wiek = kadra[0].wiek;
    int indeks_najstarszego = 0;
    
    for (int i = 0; i < 3; i++)
    {
        printf("Podaj imię pracownika: ");
        scanf("%s", kadra[i].imie);
        printf("Podaj wiek pracownika: ");
        scanf("%i", &kadra[i].wiek);
        printf("Podaj pensję pracownika: ");
        scanf("%f", &kadra[i].pensja);
        printf("\n");
        
        if (max_wiek > kadra[0].wiek)
        {
        max_wiek = kadra[i].wiek;
        indeks_najstarszego = i;
        }
    }
        
        printf("\n");
        
        printf("Imię i pensja najstarszego pracownika: \n");
        
for (int i = 0; i < 3; i++)
    {
        if (indeks_najstarszego == i)
        {
        printf("Imię: %s\n", kadra[i].imie);
        printf("Pensja: %.2f", kadra[i].pensja);
        }
        
    }
    

    return 0;
}