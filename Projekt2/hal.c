#include "hal.h"
#include <stdio.h>

#define PIN_POMPA (1 << 0)  
#define PIN_ALARM (1 << 1)  

static unsigned char REJESTR_WYJSCIA = 0x00;
static unsigned int  REJESTR_ADC_CISNIENIE = 0;

void HAL_Inicjalizacja(void) {
    REJESTR_WYJSCIA = 0x00;
    REJESTR_ADC_CISNIENIE = 1000;
}

void HAL_WlaczPompe(void) {
    REJESTR_WYJSCIA |= PIN_POMPA;
}

void HAL_WylaczPompe(void) {
    REJESTR_WYJSCIA &= ~PIN_POMPA;
}

void HAL_WlaczAlarm(void) {
    REJESTR_WYJSCIA |= PIN_ALARM;
}

void HAL_WylaczAlarm(void) {
    REJESTR_WYJSCIA &= ~PIN_ALARM;
}

unsigned int HAL_CzytajCisnienie(void) {
    return REJESTR_ADC_CISNIENIE;
}

void HAL_SymulujCzujnik(unsigned int nowe_cisnienie) {
    REJESTR_ADC_CISNIENIE = nowe_cisnienie;
}

