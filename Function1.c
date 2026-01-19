#include <stdio.h>

void dodaj(int a, int b)
{
 int suma = a + b;
 printf("Suma %i oraz %i to: %i", a, b, suma);
}
int main (void) 
{
 int x=2, y =2;
 dodaj(x, y);
}

    return 0;
}