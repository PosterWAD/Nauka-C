#include <stdio.h>

int main()
{
 int macierz[3][5];
 int a;
 
        for (int i = 0; i < 3; i++)
        
        {
            
            for (int j = 0; j < 5; j++)
            {
            printf("Wpisz [%i][%i] element tablicy: ", i + 1, j + 1);
            scanf("%i", &macierz[i][j]);
            }
        }


        for (int i = 0; i < 3; i++)
        
        {
            
            for (int j = 0; j < 5; j++)
            {
            printf("%i", macierz[i][j]);
            printf("\t");
            }
            
            if (i < 3)
            printf("\n");
        }

 return 0;
}