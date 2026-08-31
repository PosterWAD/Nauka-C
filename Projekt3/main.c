#include <stdio.h>
#include "stoper.h"

int main() {

    struct Stoper stoper;
    StoperStart(&stoper);

    while (1) {
        uint32_t czas_teraz = pobierz_czas();
        StoperAktualizuj(&stoper, czas_teraz);
    }

    
    return 0;
}