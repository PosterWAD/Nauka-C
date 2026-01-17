#include <stdio.h>

int main() {
    
    int tablica[5];
    
      printf("Program wypisujący wpisane przez uzytkownika liczby w odwrotnej kolejności\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Podaj %i liczbę: ", i + 1);
        scanf("%i", &tablica[i]);
        
    }
    
    for (int i = 4; i > -1; i--)
    {
        printf("%i\n", tablica[i]);
    }
    
   
    
    
    return 0;
}