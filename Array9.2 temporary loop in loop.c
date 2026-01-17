#include <stdio.h>

int main() {

    int tablica[5];
    int temp = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Podaj %i liczbe do tablicy:", i + 1);
        scanf("%i", &tablica[i]);
    }
    
       for (int j = 0; j < 4; j++) 
    {
    for (int i = 0; i < 4; i++)
    {
        if (tablica[i] > tablica[i + 1])
        {
        temp = tablica[i];
        tablica[i] = tablica[i + 1];
        tablica[i + 1] = temp;
        }

    }    
        
    }
        printf("\nTablica w kolejności odwrotnej:");
        
    for (int i = 0; i <= 4; i++)         
        printf(" %i", tablica[i]);

    
    
    return 0;
}