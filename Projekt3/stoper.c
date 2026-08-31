#include <stdio.h>
#include "stoper.h"

void StoperStart(struct Stoper *stoper) {
    stoper->ostatni_odczyt = 0;
    stoper->czas_pracy = 0;
}

