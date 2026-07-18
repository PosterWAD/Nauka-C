#include <stdio.h>
unsigned char uruchom_alarm() {
    printf("Alarm uruchomiony!\n");
    return 1;   
}
unsigned char sprawdz_oknaParter(unsigned char okna) {
        if (okna & 0b00001111) {
            printf("Alarm! Okno na parterze jest otwarte!\n");
            return 1;
        }
        else return 0;
}
unsigned char sprawdz_oknaPietro(unsigned char okna) {
        if (okna & 0b11110000) {
            printf("Alarm! Okno na pietrze jest otwarte!\n");
            return 1;
        }
        else return 0;
}
unsigned char sprawdz_oknaOba(unsigned char okna) {
        if (okna & (sprawdz_oknaParter(okna) & sprawdz_oknaPietro(okna))) {
            printf("Alarm! Okna na parterze i pietrze są otwarte!\n");
            uruchom_alarm();
            return 1;
        }
        else {
        return 0;
    }
}



int main() {
    unsigned char okna = 0b01000000;    // 0 - okno zamkniete, 1 - okno otwarte
    unsigned char sprawdzParter = sprawdz_oknaParter(okna);    
    unsigned char sprawdzPietro = sprawdz_oknaPietro(okna); 
    unsigned char sprawdzOba = sprawdz_oknaOba(okna);
    
    return 0;
}