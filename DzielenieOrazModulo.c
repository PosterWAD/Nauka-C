
#include <stdio.h>

int main()
{
    int liczba = 1, dzielnik = 1, // dałem 1 żeby nie wywaliło programu gdyby wylosowało się 0 i później by się przez nie podzieliło. Nie chciało mi się usuwać wiersza 7 i 8
    wynikDzielenia = liczba / dzielnik , 
    resztaDzielenia = liczba % dzielnik;
        printf("Program stosujacy / oraz %%\n\n");
        printf("Podaj liczbe: ");
        scanf("%i", &liczba);
        printf("\nTeraz podaj dzielnik: ");
        scanf("%i", &dzielnik);
        wynikDzielenia = liczba / dzielnik;
        printf("\nWynik dzielenia:%i\n", wynikDzielenia);
        resztaDzielenia = liczba % dzielnik;
        printf("Reszta z Dzielenia:%i\n", resztaDzielenia);
    return 0;
}


//Albo druga opcja:
//{
//    int liczba, dzielnik;
//        printf("Program stosujacy / oraz %%\n\n");
//        printf("Podaj liczbe: ");
//        scanf("%i", &liczba);
//        printf("\nTeraz podaj dzielnik: ");
//        scanf("%i", &dzielnik);
//        wynikDzielenia = liczba / dzielnik;
//        printf("\nWynik dzielenia:%i\n", wynikDzielenia);
//        resztaDzielenia = liczba % dzielnik;
//        printf("Reszta z Dzielenia:%i\n", resztaDzielenia);
//    return 0;
//}