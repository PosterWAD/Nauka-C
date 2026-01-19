#include <stdio.h>


int silniaRekurencyjna(int n)
{   
    
        if (n < 0)
        return -1;
    
    // Warunek stopu 
        else if (n == 0 || n == 1)
        return 1;
    
    // n * silnia(n-1)
        else if (n > 1) 
        return n * silniaRekurencyjna(n - 1);

}

int main()
{
    int x = -10;
    printf("%i", silniaRekurencyjna(x));

    return 0;
}