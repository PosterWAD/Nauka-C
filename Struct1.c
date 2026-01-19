#include <stdio.h>

struct Samochod 
{
    char marka[50];
    int rok;
    int przebieg;
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
  
  printf("=====TWOJE AUTO=====");
  printf("\nMarka: %s", mojeAuto.marka);
  printf("\nRok: %i", mojeAuto.rok);
  printf("\nPrzebieg: %i", mojeAuto.przebieg);
  

    return 0;
}