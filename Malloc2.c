#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 0;
    printf("Podaj ilość liczb: ");
    scanf("%i", &n);
    
    int *wszystkie = malloc(n * sizeof(int));
    int *parzyste = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        printf("Podaj #%i liczbę: ", i +1);
        scanf("%i", &wszystkie[i]);
        if (wszystkie[i] % 2 == 0)
        parzyste[i] = wszystkie[i];
    }
    printf("\nTablica ze wszystkimi liczbami: ");
    for (int i = 0; i < n; i++){
        printf("%i ", wszystkie[i]);
    }
    
    printf("\nTablica z samymi parzystymi: ");
    
    for (int i = 0; i < n; i++){
        if (parzyste[i] == 0) {printf("");}
        else printf("%i ", parzyste[i]);
    }
    
    

    return 0;
}