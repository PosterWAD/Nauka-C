#include <stdio.h>


int fibIteracyjny(int n)
{
    // Tak samo jak w rekurencji
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int przedprzed = 0; // To jest F(n-2), na starcie F(0)
    int przed = 1;      // To jest F(n-1), na starcie F(1)
    int wynik = 0;

    // Pętla startuje od 2, bo 0 i 1 już jest
    for (int i = 2; i <= n; i++)
    {
        // Obliczamy nową liczbę
        wynik = przed + przedprzed;
        
        // PRZESUNIĘCIE 
        // Stara liczba "przed" staje się teraz tą "przed-przed"
        przedprzed = przed;
        // Nowy wynik staje się liczbą "przed" dla następnego obrotu
        przed = wynik;
        // wynik który był równy 0 będzie równy 1 + 0 = 1, 
        // przedprzed któro było równe 0 będzie równe 1,
        // przed będzie równe dalej 1 ale w kolejnym obrocie to się zmieni!!!

    }

    return wynik;
}



int main() 
{
    int n = 10;
    printf("Fibonacci(%i) = %i\n", n, fibIteracyjny(n));
    return 0;
}