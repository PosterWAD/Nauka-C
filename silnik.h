#ifndef SILNIK_H
#define SILNIK_H

struct Silnik {
    unsigned int predkosc;      // Prędkość w km/h
    unsigned int obroty_rpm;    // Obroty silnika na minutę
    int temperatura_silnika;    // Temperatura w stopniach Celsjusza 
    int tryb_awaryjny;          //1 = awaria/przegrzanie
};

#endif // SILNIK_H