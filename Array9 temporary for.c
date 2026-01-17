#include <stdio.h>

int main() {

    int tablica[6];
    int temp;
    
    for (int i = 0; i < 6; i++)
    {
        printf("Podaj %i element tablicy: ", i + 1);
        scanf("%i", &tablica[i]);
    }
    
    printf("\nOto elementy twojej tablicy:");
    
    for (int i = 0; i < 6; i++)
    {
        printf(" %i", tablica[i]);
    }
    
    printf("\nOto elementy twojej tablicy w kolejności odwrotnej:");
    
    temp = tablica[0];
    tablica[0] = tablica[5];
    tablica[5] = temp;
    temp = tablica[1];
    tablica[1] = tablica[4];
    tablica[4] = temp;
    temp = tablica[2];
    tablica[2] = tablica[3];
    tablica[3] = temp;
    for (int i = 0; i < 6; i++)
    {
        printf(" %i", tablica[i]);
    }
    return 0;
}