#include <stdio.h>
#define POMPA (1<<0)
#define WENTYLATOR (1<<1)
#define SWIATLA (1<<2)
#define SYRENA (1<<7)
#define CZUJNIK_DYMU (1<<0)


unsigned char wlacz(unsigned char port, unsigned char urzadzenie) {
    return port | urzadzenie;
}

unsigned char wylacz(unsigned char port, unsigned char urzadzenie) {
    return port & ~urzadzenie; // lub return port ^ urzadzenie;
}

int czy_wlaczone(unsigned char port, unsigned char urzadzenie) {
    return (port & urzadzenie)? 1 : 0;
}

int main() {
    unsigned char PORT_A = 0b00000000;
    unsigned char PORT_B = 0b00000001;

    PORT_A = wlacz(PORT_A, POMPA | SYRENA);
    PORT_A = wylacz(PORT_A, WENTYLATOR | SWIATLA);
    PORT_A = (PORT_A | (POMPA | SYRENA)) & ~(WENTYLATOR | SWIATLA);
    printf("%d\n", czy_wlaczone(PORT_B, CZUJNIK_DYMU));


    while(1) {
        if (czy_wlaczone(PORT_B, CZUJNIK_DYMU)) {
        PORT_A = (PORT_A | (POMPA | SYRENA)) & ~(WENTYLATOR | SWIATLA);
        }
        else {
            PORT_A = (PORT_A | (WENTYLATOR | SWIATLA)) & ~(POMPA | SYRENA);
        }
    }




    return 0;
}