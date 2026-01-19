#include <stdio.h>

int main()
{
	int W, K;

	printf("Podaj ilość wierszy macierzy: ");
	scanf("%i", &W);
	printf("Podaj ilość kolumn macierzy: ");
	scanf("%i", &K);

	int macierz[W][K];

	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < K; j++)
		{
			printf("Podaj [%i][%i] : ", i + 1, j + 1);
			scanf("%i", &macierz[i][j]);

		}

	}

	printf("Oto twoja macierz:\n");

    for (int i = 0; i < W; i++)
    {
        
        for (int j = 0; j < K; j++)
        {
            printf("%i\t", macierz[i][j]);
        }
        printf("\n");
    }
        
        
    printf("Przekątna macierzy:\n");
    
            int suma = 0;
            
    for (int i = 0; i < W; i++)
    {

        for (int j = 0; j < K; j++)
        {
            if (i == j) 
            {
            printf("%i\t", macierz[i][j]);
            suma = suma + macierz[i][j];
            }
            
            else printf("\t");
            
            
        }
        
        
    }
        
    printf("\nSuma przekątnej macierzy: %i", suma);
        
	return 0;
}