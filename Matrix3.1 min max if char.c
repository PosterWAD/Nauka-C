#include <stdio.h>

int main()
{
   int A, B;
   char Z;
   
    printf("Podaj wymiary swojej macierzy\n");
    printf("Podaj liczbę wierszy swojej macierzy: ");
    scanf("%i", &A);
    printf("Podaj liczbę kolumn swojej macierzy: ");
    scanf("%i", &B);
    printf("Podaj znak jakim chcesz zastąpić liczby ujemne w swojej macierzy: ");
    scanf(" %c", &Z);
    
           
            printf("\n");
            
            
   int macierz[A][B];
   
   
    for (int i = 0; i < A; i++)
    {
        
        for (int j = 0; j < B; j++)
        {   
            printf("Podaj [%i][%i] element swojej macierzy: ", i + 1, j + 1);
            scanf("%i", &macierz[i][j]);
        }
    }
    
    
        printf("Oto twoja macierz:\n");
    
    for (int i = 0; i < A; i++)
    {
        
        for (int j = 0; j < B; j++)
        {   
            if (macierz[i][j] < 0) 
            printf("%c", Z);
            else printf("%i", macierz[i][j]);
            
            printf("\t");
        }
        printf("\n");
    }
    
    
    
    return 0;
}