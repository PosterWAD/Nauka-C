#include <stdio.h>

void zamianaXnaY(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
  
}


int main()
{
   int x = 100, y = 0;
   
        printf("Wartość x = %i, a wartość y = %i\n", x, y);
   
    zamianaXnaY(&x, &y); 

        printf("Wartość x = %i, a wartość y = %i\n", x, y);
    
    zamianaXnaY(&x, &y); 

        printf("Wartość x = %i, a wartość y = %i\n", x, y);

    return 0;
}