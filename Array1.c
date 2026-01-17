#include <stdio.h>

int main() {
    
    int tablica[5];

    printf("Program będzie mnożył każdą wpisaną przez uczytkownika liczbę przez 2\n");
    
    for (int i=1; i < 6; ++i)
    
    { 
        printf("Wpisz %i liczbę do tablicy: ", i);
        scanf("%i", &tablica[i]);
    }
    
        printf("\n");
    
    for (int i=1; i < 6; i++)
    {
            int liczba = 2*tablica[i] ;
        printf("%i liczba pomnożona przez dwa to: %i\n", tablica[i], liczba);
    }
    
    
    
    return 0;
}