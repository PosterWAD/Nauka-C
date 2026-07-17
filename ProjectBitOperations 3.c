#include <stdio.h>

unsigned char sprawdz_oknaParter(unsigned char okna) {
        if (okna ^ 0b00001111) {
            uruchom_alarm();
        }
        return 0;
}
unsigned char sprawdz_oknaPietro(unsigned char okna) {
        if (okna ^ 0b11110000) {
            uruchom_alarm();
        }
        return 0;
}
unsigned char uruchom_alarm() {
    printf("Alarm uruchomiony!\n");
    return 1;
}


int main() {
    unsigned char okna = 0b00000000;    // 0 - okno zamkniete, 1 - okno otwarte
    unsigned char sprawdzParter = sprawdz_oknaParter(okna);    
    unsigned char sprawdzPietro = sprawdz_oknaPietro(okna); 
    return 0;
}