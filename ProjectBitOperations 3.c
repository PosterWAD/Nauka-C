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
        if ((sprawdz_oknaParter(okna) & sprawdz_oknaPietro(okna))) {
            uruchom_alarm();
            printf("Alarm! Okna na parterze i pietrze są otwarte!\n");
            return 1;
        }
        else {
        return 0;
    }
}



int main() {
    unsigned char okna = 0b01001000;    // 0 - okno zamkniete, 1 - okno otwarte
    unsigned char sprawdzParter = sprawdz_oknaParter(okna);    
    unsigned char sprawdzPietro = sprawdz_oknaPietro(okna); 
    unsigned char sprawdzOba = sprawdz_oknaOba(okna);
    unsigned int liczbaOtwartychOkien = 0;
    
    for (int i = 0; i < 8; i++) {
            if (okna & (1 << i)) {
                printf("Okno %d jest otwarte.\n", i + 1);
                liczbaOtwartychOkien++;
            }
        }
    printf("Liczba otwartych okien: %i", liczbaOtwartychOkien);
    
    return 0;
}