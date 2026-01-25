#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int gracz;
    int komputer = rand() % 3 + 1; 

    printf("===== PAPIER, KAMIEŃ, NOŻYCE =====\n");
    printf("1. Kamień\n");
    printf("2. Papier\n");
    printf("3. Nożyce\n");
    printf("Twój wybór (wpisz liczbę): ");
    scanf("%d", &gracz);
    
    if (gracz < 1 || gracz > 3) {
        printf("Błąd! Musisz wybrać liczbę od 1 do 3.\n");
        scanf("%d", &gracz);
    }
    printf("\n=== WYNIKI ===\n");
    printf("Ty: %d  vs  Komputer: %d\n", gracz, komputer);
    
    if (gracz == komputer) {
        printf("REMIS! Obaj wybraliście to samo.\n");
    } 
    else if ((gracz == 1 && komputer == 3) || // Kamień (1) bije Nożyce (3)
             (gracz == 2 && komputer == 1) || // Papier (2) bije Kamień (1)
             (gracz == 3 && komputer == 2))   // Nożyce (3) biją Papier (2)
    {
        printf("WYGRAŁEŚ! Gratulacje!\n");
    } 
    else {
        printf("PRZEGRAŁEŚ! Komputer był lepszy.\n");
    }

    return 0;
}