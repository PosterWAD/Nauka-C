#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    
    printf("Podaj ilość elementów pierwszej tablicy: ");
    scanf("%i", &n1);
    printf("Podaj ilość elementów drugiej tablicy: ");
    scanf("%i", &n2);
    
    int n3 = n1 + n2;
    
    printf("*==== Tablica nr. 1 ====*\n");
    int *tab1 = malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; i++){
    printf("Podaj #%i liczbę: ", i + 1);
    scanf("%i", &tab1[i]);
    }
    
    printf("*==== Tablica nr. 2 ====*\n");
    int *tab2 = malloc(n2 * sizeof(int));
    for (int i = 0; i < n2; i++){
    printf("Podaj #%i liczbę: ", i + 1);
    scanf("%i", &tab2[i]);
    }
    
    int *tab3 = malloc(n3 * sizeof(int));
    for (int i = 0; i < n1; i++){
        tab3[i] = tab1[i];
    }
    for (int i = 0; i < n2; i++){
        tab3[n1 + i] = tab2[i]; 
    }
    printf("*==== Tablica nr. 3 ====*\n");
    for (int i = 0; i < n3; i++) {
        printf("%i ", tab3[i]);
    }
    
    free(tab1);
    free(tab2);
    free(tab3);
    tab1= NULL;
    tab2= NULL;
    tab3= NULL;
    
    return 0;
}