#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Podaj liczbę:\n");
    scanf("%i", &a);
    
        
    do 
        {
        
        if (a <= 0)
        {
            printf("Zła liczba, wybierz inną:");
        printf("Podaj liczbę:\n");
        scanf("%i", &a);
            
        }
        
        else if (a > 0)
        {   if (a % 2 == 0)
            {
                a=a/2;
            }

            else if (a % 2 == 1)
            {
                a=3*a + 1;
            }
        }
            } while (a != 1);
        
        printf("\n%i", a);
        
        printf("\nKoniec!");
    
    
    
    return 0;
}