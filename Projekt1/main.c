#include <stdio.h>
#include <stdlib.h>
#include "silnik.h" 

int main() {
    struct Silnik auto;

    wlacz_zaplon(&auto);

    printf("Silnik odpalony!\n");
    printf("Predkosc: %d km/h\n", auto.predkosc);
    printf("Obroty: %d RPM\n", auto.obroty_rpm);
    printf("Bieg: %d\n", auto.bieg);

    while(1) {
        char wybor;
        printf("\nWybierz akcję:\n");
        printf("1. Wcisnij gaz\n");
        printf("2. Wcisnij hamulec\n");
        printf("3. Wyjdz\n");
        printf("Twoj wybor: ");
        scanf(" %c", &wybor);

        switch(wybor) {
            case '1':
                wcisnij_gaz(&auto);
                break;
            case '2':
                wcisnij_hamulec(&auto);
                break;
            case '3':
                printf("Wychodznie...\n");
                return 0;
            default:
                printf("Nieprawidlowy wybor. Sprobuj ponownie.\n");
                continue;
        }

        aktualizuj_silnik(&auto);

        printf("\nAktualny stan silnika:\n");
        printf("Predkosc: %d km/h\n", auto.predkosc);
        printf("Obroty: %d RPM\n", auto.obroty_rpm);
        printf("Bieg: %d\n", auto.bieg);
    }
    
    return 0;
}