#include <stdio.h>

int main() {
    int numerPrzycisku = 1;
    printf("Stoisz przed automatem z napojami. \nCzego chcesz się napić? \n1.Kawy 2.Herbaty 3. Wody \nWpisz odpowiednią liczbę:");
    scanf("%i", &numerPrzycisku);
    
    switch (numerPrzycisku)
    {
        case 1:
            printf("Wybrałeś Kawę.\n");
            break;

        case 2:
            printf("Wybrałeś Herbatę.\n");
            break;

        case 3:
            printf("Wybrałeś Wodę.\n");
            break;

        default: // Opcja domyślna (odpowiednik ostatniego "else")
            printf("Nie ma takiego napoju!\n");
            // Tu break nie jest konieczny, bo to i tak koniec.
    }

    return 0;
}