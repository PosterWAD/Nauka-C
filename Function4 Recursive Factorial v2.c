#include <stdio.h>


int silniaRekurencyjna(int n)
{   
    
        if (n < 0)
        return -1;
    
    // Warunek stopu 
        else if (n == 0 || n == 1)
        return 1;
    
    // n * silnia(n-1)
        else if (n > 1) 
        return n * silniaRekurencyjna(n - 1);

}

int main()
{
    
    int x = 0;
    
        printf("Podaj liczbę, z której chcesz obliczyć silnię: ");
        scanf("%i", &x);
        
    int wynik = silniaRekurencyjna(x);
        
    if (wynik == -1)
        printf("\nBłąd! Wprowadzona liczba jest mniejsza od 0.");
        
    else    
        printf("\nSilnia z %i to %i", x, wynik);
        
        
    return 0;
}