#include <stdio.h>

int main() {

    int tablica[5];
    int liczbyParzyste = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Podaj %i liczbę: ", i + 1);
        scanf("%i", &tablica[i]);
        
            if (tablica[i] % 2 == 0)
            liczbyParzyste = liczbyParzyste + 1;
            else if (tablica[i] % 2 == 1)
            liczbyParzyste = liczbyParzyste;

    }
    
    printf("\n");
    
    if (liczbyParzyste == 0)
    printf("W liczbach które wymieniłeś, nie ma liczb parzystych.");
    else if (liczbyParzyste == 1)
    printf("W liczbach które wymieniłeś, jest 1 liczba parzysta.");
    else if (liczbyParzyste > 1)
    printf("W liczbach które wymieniłeś, są %i liczby parzyste.", liczbyParzyste);
    
   
    return 0;
}