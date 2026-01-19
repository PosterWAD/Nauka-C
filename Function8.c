#include <stdio.h>


int zagadka(int k)
{
    if (k <= 0)
    return -1;
    
    if (k % 4 == 1)
    return 1;
    
    if (k % 4 == 3)
    return 0;
    
    if (k % 2 == 0)
    return zagadka(k / 2);
    
    
    
}



int main() 
{
    int n = 0;
    
    printf("%i",zagadka(n));

    return 0;
}