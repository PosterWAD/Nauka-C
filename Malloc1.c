#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilosc = 0;
    printf("Podaj ilość ocen: ");
    scanf("%i", &ilosc);
    
    float *tab = malloc(ilosc * sizeof(float));
    float suma = 0;
    for (int i = 0; i < ilosc ; i++) {
        printf("Podaj #%i ocenę: ", i + 1);
        scanf("%f", &tab[i]);
        suma += tab[i];
    }
    
    printf("Średnia ocen wynosi: %.2f ", suma/ilosc);
    
    
    free(tab);
    tab = NULL;
    
    return 0;
}