#include <stdio.h>
#include "stoper.h"

void StoperStart(struct Stoper *stoper) {
    stoper->ostatni_odczyt = 0;
    stoper->czas_pracy = 0;
}

void StoperAktualizuj(struct Stoper *stoper, uint32_t czas_teraz) {
    if (stoper->ostatni_odczyt != 0) {
        stoper->czas_pracy += czas_teraz - stoper->ostatni_odczyt;

    }
    stoper->ostatni_odczyt = czas_teraz;
}
