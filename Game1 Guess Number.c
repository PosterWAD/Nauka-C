#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Potrzebne do czasu

int main() {
    
    srand(time(NULL)); // 1. "Mieszamy w maszynie losującej" (tylko raz na początku!)
    
    int tajna = rand() % 100 + 1; // 2. Losuje liczbę od 1 do 100
    int liczba;
    
    printf("===== Automat losujący liczby =====\n");
    
    do {
            
        printf("Podaj liczbę: ");
        scanf("%i", &liczba);
            
            if(liczba < tajna) printf("Za mało! Celuj wyżej.\n");
            if(liczba > tajna) printf("Za dużo! Celuj niżej.\n");
            if(liczba == tajna) { printf("Brawo! Trafiłeś!"); break;}
            
    } while (liczba != tajna);

}