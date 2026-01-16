#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Podaj liczbę:");
    scanf("%i", &a); printf("\n");
    
        
    do 
        {
        
        if (a <= 0)
        {
            printf("L:iczba musi być dodatnia! Podaj liczbę jeszcze raz:");
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
        
        printf("%i", a);
        
        printf("\n\nKoniec!");
    
    
    
    return 0;
}