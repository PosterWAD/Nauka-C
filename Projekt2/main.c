#include <stdio.h>
#include "hal.h"
#include "kontroler.h"

int main() {
    printf("--- PRZEMYSLOWY KONTROLER PROCESU ---\n\n");

    HAL_Inicjalizacja();

    struct KontrolerProcesu system;
    Kontroler_Inicjalizacja(&system);

    int wpisane_cisnienie = 1000;

    while (1) {
        Kontroler_Aktualizuj(&system);

        printf("----------------------------------------\n");
        printf("Stan kontrolera: %d | Odczyt ADC: %d\n", system.aktualny_stan, wpisane_cisnienie);
        HAL_WypiszStanGlownegoPortu();
        printf("----------------------------------------\n");

        printf("Podaj nowe cisnienie na czujniku (lub 9999 aby wyjsc): ");
        scanf("%d", &wpisane_cisnienie);

        if (wpisane_cisnienie == 9999) break;

        HAL_SymulujCzujnik(wpisane_cisnienie);
    }

    return 0;
}