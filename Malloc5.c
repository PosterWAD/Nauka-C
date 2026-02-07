#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Podaj ilość liczb: ");
    scanf("%i", &n);
    
    int *tablica = malloc(n * sizeof(int));
    int suma = 0;
    for (int i = 0; i < n; i++){
        printf("Podaj #%i liczbę: ", i + 1);
        scanf("%i", &tablica[i]);
        suma += tablica[i];
    }
    
    float srednia = suma/(float)n;
    printf("Suma %i podanych przez ciebie liczb to: %i", n, suma);
    printf("\nŚrednia arytmetyczna podanych przez ciebie liczb to: %.2f", srednia);
    
    printf("\nOto liczby mniejsze od średniej: ");
    for (int i = 0; i < n; i++){
        if (tablica[i] < srednia) 
        printf("%i ", tablica[i]);
    }
    
    free(tablica);
    tablica = NULL;
    
    return 0;
}