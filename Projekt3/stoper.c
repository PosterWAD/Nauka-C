#include <stdio.h>
#include "stoper.h"

void StoperStart(struct Stoper *stoper) {
    stoper->ostatni_odczyt = 0;
    stoper->czas_pracy = 0;
}

void StoperAktualizuj(struct Stoper *stoper, uint32_t czas_teraz) {
    if ((czas_teraz - stoper->ostatni_odczyt) >= 60000) {
        stoper->czas_pracy++;
        stoper->ostatni_odczyt = czas_teraz;
    }
}
