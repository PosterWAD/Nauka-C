#ifndef HAL_H
#define HAL_H

// Inicjalizacja
void HAL_Inicjalizacja(void);

void HAL_WlaczPompe(void);
void HAL_WylaczPompe(void);
void HAL_WlaczAlarm(void);
void HAL_WylaczAlarm(void);

// Odczyt wejść
unsigned int HAL_CzytajCisnienie(void);


void HAL_SymulujCzujnik(unsigned int nowe_cisnienie);
void HAL_WypiszStanGlownegoPortu(void);


#endif // HAL_H