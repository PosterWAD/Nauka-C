#include "kontroler.h"
#include "hal.h" // Importujemy komendy warstwy sprzętowej

void Kontroler_Inicjalizacja(struct KontrolerProcesu *k) {
    k->aktualny_stan = STAN_INICJALIZACJA;
    k->limit_cisnienia_max = 2000;
    k->limit_cisnienia_min = 500;
}

void Kontroler_Aktualizuj(struct KontrolerProcesu *k) {
    unsigned int obecne_cisnienie = HAL_CzytajCisnienie();

    switch (k->aktualny_stan) {
        
        case STAN_INICJALIZACJA:
            HAL_WylaczPompe();
            HAL_WylaczAlarm();
            k->aktualny_stan = STAN_PRACA_NORMALNA;
            break;

        case STAN_PRACA_NORMALNA:
            if (obecne_cisnienie > k->limit_cisnienia_max) {
                HAL_WylaczPompe();
                HAL_WlaczAlarm();
                k->aktualny_stan = STAN_AWARIA_CISNIENIA;
            } 
            else if (obecne_cisnienie < k->limit_cisnienia_min) {
                HAL_WlaczPompe(); 
            }
            else {
                HAL_WylaczPompe(); 
            }
            break;

        case STAN_AWARIA_CISNIENIA:
            HAL_WylaczPompe();
            HAL_WlaczAlarm();
            
            if (obecne_cisnienie < (k->limit_cisnienia_max - 200)) {
                HAL_WylaczAlarm();
                k->aktualny_stan = STAN_PRACA_NORMALNA;
            }
            break;
    }
}