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
        
    int max = macierz[0][0];
    int max_wiersz = 0; 
    int max_kolumna = 0;

    for (int i = 0; i < W; i++)
    {
        
        for (int j = 0; j < K; j++)
        {
            if (macierz[i][j] > max)
            {
            max = macierz[i][j];
            max_wiersz = i;
            max_kolumna = j;
            }
        }
        
    }
    printf("Największy wyraz macierzy [%i][%i] to %i i znajduje się w %i wierszu i %i kolumnie.", W, K, max, max_wiersz + 1, max_kolumna + 1);
    
    
    
    
	return 0;
}