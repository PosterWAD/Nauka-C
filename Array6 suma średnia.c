#include <stdio.h>

int main() {

    int tablica[5];

    printf("Program liczący sumę wszystkich liczb oraz  średnią arytmetyczną\n");
    
    for (int i=0; i < 5; i++)
    {
       printf("Podaj %i liczbę:", i + 1);
       scanf("%i", &tablica[i]);
    }
    
    int suma = 0;
    
    for (int i=0; i < 5; i++)
    {
        suma = suma + tablica[i];
    }
    
    printf("Suma podanych liczb wynosi: %.2f\n", (float)suma);
   
    float sredniaArytmetyczna = suma/5.0; // ważne żeby tutaj było 5.0 w mianowniku bo inaczej dzielimy przez int i nie bedzie wartosci po przecinku!
    printf("Średnia arytmetyczna podanych liczb wynosi: %.2f", sredniaArytmetyczna);
   
    return 0;
}