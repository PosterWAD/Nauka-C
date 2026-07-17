#include <stdio.h>

unsigned char spakuj_dane(unsigned char temperatura, unsigned char wilgotnosc) {
    unsigned char paczka = 0b00000000;
    paczka |= temperatura << 4 | wilgotnosc;
    return paczka;
}
unsigned char odzyskaj_temperature(unsigned char paczka) { 
    return temperatura = (paczka & 0b11110000) >> 4;
}
unsigned char odzyskaj_wilgotnosc(unsigned char paczka) { 
    return wilgotnosc = (paczka & 0b00001111);
}
int main() {
    unsigned char temperatura = 10;
    unsigned char wilgotnosc = 5;
    unsigned char paczka = spakuj_dane(temperatura, wilgotnosc);
    unsigned char odzyskana_temperatura = odzyskaj_temperature(paczka);
    unsigned char odzyskana_wilgotnosc = odzyskaj_wilgotnosc(paczka);
    printf("Oryginalna temperatura: %d\n", temperatura);
    printf("Oryginalna wilgotnosc: %d\n", wilgotnosc);
    printf("Odzyskana temperatura: %d\n", odzyskana_temperatura);
    printf("Odzyskana wilgotnosc: %d\n", odzyskana_wilgotnosc);
    
    return 0;
}