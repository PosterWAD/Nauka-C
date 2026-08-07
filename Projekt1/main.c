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

    
    return 0;
}