#include <stdio.h>
#define POMPA (1<<0)
#define WENTYLATOR (1<<1)
#define SWIATLA (1<<2)
#define SYRENA (1<<7)

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
    
    PORT_A = wlacz(PORT_A, POMPA | SYRENA);
    PORT_A = wylacz(PORT_A, WENTYLATOR | SWIATLA);
    PORT_A =| (POMPA | SYRENA) & ~(WENTYLATOR | SWIATLA);

    return 0;
}