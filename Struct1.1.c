#include <stdio.h>

struct Samochod 
{
    char marka[50];
    int rok;
    int przebieg;
    int cena;
}; // <--- WAŻNE: Średnik na końcu struktury!


int main()
{
  struct Samochod mojeAuto;
  
  printf("Podaj markę samochodu: ");
  scanf("%s", mojeAuto.marka);
  printf("Podaj rok produkcji samochodu: ");
  scanf("%i", &mojeAuto.rok);
  printf("Podaj przebieg samochodu: ");
  scanf("%i", &mojeAuto.przebieg);
  printf("Podaj cenę samochodu: ");
  scanf("%i", &mojeAuto.cena);
  
  printf("=====TWOJE AUTO=====");
  printf("\nMarka: %s", mojeAuto.marka);
  printf("\nRok: %i", mojeAuto.rok);
  printf("\nPrzebieg: %i", mojeAuto.przebieg);
  printf("\nCena: %i", mojeAuto.cena);
  
  
  
    if (mojeAuto.przebieg < 100000 && mojeAuto.cena < 10000) 
    {
        printf("\nWyjątkowa niska cena jak za samochód z takim przebiegiem!\n");
    }
    
    
    if (mojeAuto.przebieg > 200000) 
    {
        printf("\nUwaga: To auto ma spory przebieg!\n");
    }
  

    return 0;
}