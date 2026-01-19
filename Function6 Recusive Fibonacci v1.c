#include <stdio.h>


int fibRekurencyjny(int n)
{
    
    if (n < 0)
    return -1;
    
    if (n == 0)
    return 0;
    
    if (n == 1)
    return 1;
    
    if (n > 1)
    return fibRekurencyjny(n - 1) + fibRekurencyjny(n - 2);
   
    
}



int main() 
{
    int n = 20;
    printf("Fibonacci(%i) = %i\n", n, fibRekurencyjny(n));
    return 0;
}