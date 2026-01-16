#include <stdio.h>
#include <math.h>

int main()

{

int wysokosc = 10;

for (int i = 1; i <= wysokosc; i++) 
{
        for (int k = 1; k <= (wysokosc - i) ; k++)
      {
        printf(" ");
    }
    
    for (int j = 1;  j <= i ; j++) 
      {
        printf("*");
    }
    for (int x = 2;  x <= i ; x++) 
      {
        printf("*");
    }
    
    printf("\n");
}
    return 0;

}
