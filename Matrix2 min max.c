#include <stdio.h>

int main()
{
    int W, K;
        
        
        printf("Podaj wymiary swojej macierzy.\n");
        printf("Podaj ilość wierszy:");
        scanf("%i", &W);
        printf("Podaj ilość kolumn:");
        scanf("%i", &K);
        
        
    int macierz[W][K];
        
        
    for (int i = 0; i < W; i++)
        
    {
        for (int j = 0; j < K; j++)
        {
        printf("Podaj [%i][%i] element macierzy: ", i + 1, j + 1);
        scanf("%i", &macierz[i][j]);
        }
    }
    printf("\n");
        printf("Oto twoja macierz:\n");
        
    for (int x = 0; x < W; x++)
        
    {
        for (int y = 0; y < K; y++)
        {
       
        printf("%i\t", macierz[x][y]);
        
        }
        
        if (x < W) 
        printf("\n");
        
    }
        
    int min = macierz[0][0], max = macierz[0][0], suma = 0; // nie mozna zdeklarowac min i max na poczatku zanim podam wartosci poniewaz wtedy zostana pzypisane randomowe dane ktore moga byc wieksze od tych podanych przez uzytkownika
        
        printf("\n");
        
    for (int z = 0; z < W; z++)
        
    {
        for (int c = 0; c < K; c++)
       
        suma = suma + macierz[z][c];
        
    }
        printf("Suma wyrazów macierzy: %i", suma);
        
        
    for (int i = 0; i < W; i++)
        
    {
        for (int j = 0; j < K; j++)
        {
            if (macierz[i][j] > max)
            max = macierz[i][j];
        }
        
    }
    for (int i = 0; i < W; i++)
        
    {
        for (int j = 0; j < K; j++)
        {
            if (macierz[i][j] < min)
            min = macierz[i][j];
        }
        
    }
        printf("\n");
        printf("Największy wyraz macierzy: %i", max);
        printf("\n");
        printf("Najmniejszy wyraz macierzy: %i", min);
        
        
    return 0;
}