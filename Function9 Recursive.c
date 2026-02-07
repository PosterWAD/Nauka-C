#include <stdio.h>

int maxSkrzyn(int n, int m)
{
    if (n <= 2) return 3*m + 2;
    else if (n % 4 == 0) return 10;
    else return maxSkrzyn(n - 1, m) + 2;
}


int main()
{
    
    unsigned int n = 4, m = 6;
    
    printf("%i", maxSkrzyn(n, m));

    return 0;
}