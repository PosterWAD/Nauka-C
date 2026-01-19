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
    
    
	for (int j = 0; j < K; j++)
	{
		int suma = 0;
		for (int i = 0; i < W; i++)
		{
			suma = suma + macierz[i][j]; // tutaj żeby kod policzył sumę kolumn to musi być na odwrót i oraz j
		}


		printf("Suma kolumny %i wynosi %i \n", j + 1, suma);


	}



















	return 0;
}