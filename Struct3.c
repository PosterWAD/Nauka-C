#include <stdio.h>

typedef struct {
    char model[50];
    int RAM;
    float cena;
} Laptop;




int main()
{
    
    int W;
    
    printf("Ile laptopów chcesz dodać do oferty: ");
    scanf("%i", &W);
    
    Laptop lap[W];

    for (int i = 0; i < W; i++)
    {
        printf("Podaj model laptopa: ");
        scanf("%s", lap[i].model);
        printf("Podaj ilość pamięci RAM: ");
        scanf("%i", &lap[i].RAM);
        printf("Podaj cenę: ");
        scanf("%f", &lap[i].cena);
        printf("\n");
    }
        
        printf("==== Laptopy ====");
        printf("\n");
        
      for (int i = 0; i < W; i++)
    {
        printf("Laptop %i:", i + 1);                            printf("\n");
        printf("Model: %s", lap[i].model);       printf("\n");
        printf("RAM: %i", lap[i].RAM);          printf("\n");
        printf("Cena: %f", lap[i].cena);        printf("\n\n");

    }
        
        printf("\n");
     
    float myMoney= 0;
        
        printf("Podaj ilość pieniędzy jaką zamierzasz przeznaczyć na kupno laptopa: ");
        scanf("%f", &myMoney);
        
        printf("\n");
        
        printf("Laptopy, które możesz kupić: \n");
        
    for (int i = 0; i < W; i++)
    {
        if (myMoney >= lap[i].cena)
        {
            printf("Model: %s", lap[i].model);       printf("\n");
            printf("RAM: %i", lap[i].RAM);          printf("\n");
            printf("Cena: %f", lap[i].cena);        printf("\n");   
        }
        
        else continue;
        
    }
    
    
    return 0;
}