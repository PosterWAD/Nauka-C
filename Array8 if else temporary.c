#include <stdio.h>

int main() {

    int tablica[5];
    int a = 0, b = 0;
    int temp = 0 ;

    for (int i=0; i < 5; i++)
    {
        printf("Podaj %i liczbę do tablicy: ", i + 1);
        scanf("%i", &tablica[i]);
        

        
    }
    
        a = tablica[0];
        b = tablica[4];
        
    printf("Oto wybrane przez ciebie liczby:");
    for (int i = 0; i < 5; i++) 
    {
        if (i < 4)
        printf(" %i,", tablica[i]);
        else if (i == 4)
        printf(" %i", tablica[i]);
        
    
    }
    
    printf("\nTablica z zamienionym miejscem pierwszym z ostatnim:");
        
        temp = b;
        b = a;
        a = temp;
        
        
        for (int i = 0; i < 5; i++) 
    {
        if (i == 0)
        printf(" %i", a);
        else if (i == 4)
        printf(" %i", b);
        else if (i > 0 && i < 4)
        printf(" %i", tablica[i]);
        
    }
    
    printf("\nTablica z sprzed zamiany:");
        
    
        temp = a;
        a = b;
        b = temp;
        
        for (int i = 0; i < 5; i++) 
    {
        if (i == 0)
        printf(" %i", a);
        else if (i == 4)
        printf(" %i", b);
        else if (i > 0 && i < 4)
        printf(" %i", tablica[i]);
        
    }
  
    return 0;
}