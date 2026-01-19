#include <stdio.h>


int silniaIteracyjna(int n)
{
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;

    int wynik = 1;
    // Pętla mnoży kolejne liczby: 1 * 2 * 3 * ... * n
    for (int i = 2; i <= n; i++)
    {
        wynik = wynik * i; // lub krócej: wynik *= i;
    }

    return wynik;
}

int main()
{
    
    int x = 0;
    
        printf("Podaj liczbę, z której chcesz obliczyć silnię: ");
        scanf("%i", &x);
        
    int wynik = silniaIteracyjna(x);
        
    if (wynik == -1)
        printf("\nBłąd! Wprowadzona liczba jest mniejsza od 0.");
        
    else    
        printf("\nSilnia z %i to %i", x, wynik);
        
        
    return 0;
}