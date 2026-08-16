#include "kontroler.h"
#include "hal.h" // Importujemy komendy warstwy sprzętowej

void Kontroler_Inicjalizacja(struct KontrolerProcesu *k) {
    k->aktualny_stan = STAN_INICJALIZACJA;
    k->limit_cisnienia_max = 2000;
    k->limit_cisnienia_min = 500;
}

