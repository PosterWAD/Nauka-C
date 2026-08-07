#include <stdio.h>
#include <stdlib.h>
#include "silnik.h"

void aktualizuj_silnik(struct Silnik *wskaznik_na_silnik) {
    
}

void wlacz_zaplon(struct Silnik *wskaznik_na_silnik) {
    wskaznik_na_silnik->predkosc = 0;               // Auto stoi
    wskaznik_na_silnik->obroty_rpm = 800;           // Bieg jałowy
    wskaznik_na_silnik->temperatura_silnika = 20;   // Zimny silnik
    wskaznik_na_silnik->tryb_awaryjny = 0;          // Brak awarii
}

void wcisnij_gaz(struct Silnik *wskaznik_na_silnik) {
    wskaznik_na_silnik->predkosc += 5;
    wskaznik_na_silnik->obroty_rpm += 400;
    if ((wskaznik_na_silnik->obroty_rpm) > 2000) {
        wskaznik_na_silnik->bieg += 1;
        wskaznik_na_silnik->obroty_rpm = 800;     
    }
}

void wcisnij_hamulec(struct Silnik *wskaznik_na_silnik) {

}
