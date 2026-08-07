#ifndef SILNIK_H
#define SILNIK_H

struct Silnik {
    unsigned int predkosc;      // Prędkość w km/h
    unsigned int obroty_rpm;
    int temperatura_silnika;    // Temperatura w stopniach C 
    int tryb_awaryjny;          //1 = awaria/przegrzanie
};
void aktualizuj_silnik(struct Silnik *wskaznik_na_silnik);

#endif // SILNIK_H