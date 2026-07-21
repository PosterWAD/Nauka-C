#include <stdio.h>
unsigned char on_off_wentylator1(unsigned char PORT_A, unsigned char Wentylator) {
    if ((PORT_A & 0b00000010) == 0b00000000 ) {
        // Wentylator jest wyłączony
        PORT_A |= Wentylator; // Włącz wentylator
        return PORT_A; // Włącz wentylator
    }
        
    else if ((PORT_A & 0b00000010) == Wentylator) {
        // Wentylator jest włączony
        PORT_A &= ~Wentylator; // Wyłącz wentylator, bo ~Wentylator = 0b11111101
        return PORT_A;
    }
}
unsigned char on_off_wentylator2(unsigned char PORT_A) {
    if ((PORT_A & 0b00000010) == 0b00000000 ) {
        return (PORT_A | 2);
    }
    return (PORT_A & ~2);
}
unsigned char on_off_wentylator3(unsigned char PORT_A) {
    return ((PORT_A & 0b00000010) == 0b00000000 )? (PORT_A | 2) : (PORT_A & ~2);
}
unsigned char on_off_wentylator4(unsigned char PORT_A) {
    return (PORT_A ^ 0b00000010);
} //PODOBNO NAJSZYBSZE 
unsigned char on_off_pompa(unsigned char PORT_A) {
    return PORT_A ^ 0b00000001;
}
unsigned char on_off_swiatla(unsigned char PORT_A) {
    return PORT_A ^ 0b00000100;
}
unsigned char syrena_alarmowa(unsigned char PORT_A) {
    return 0b10000001;
}
unsigned char on_off_syrena(unsigned char PORT_A) {
    return PORT_A ^ 0b10000000;
}
unsigned char wlacz_syrene(unsigned char PORT_A) {
    return PORT_A |= 0b1000000;
}
unsigned char wylacz_syrene(unsigned char PORT_A) {
    return PORT_A & ~(1<<7);
}

int czy_pompa_dziala(unsigned char PORT_A) {
    if (PORT_A & 0b00000001) {
        return 1;
    }
    return 0;
}

int main() {
    unsigned char PORT_A = 0b00000000;
    unsigned char Pompa = 0b00000001;
    unsigned char Wentylator = 0b00000010;
    unsigned char Swiatla = 0b00000100;
    unsigned char syrena = 0b10000000;

    PORT_A = on_off_wentylator1(PORT_A, Wentylator);
    PORT_A = on_off_wentylator2(PORT_A);
    PORT_A = on_off_wentylator3(PORT_A);
    PORT_A = on_off_wentylator4(PORT_A);

    PORT_A = on_off_pompa(PORT_A);

    PORT_A = on_off_swiatla(PORT_A);

    PORT_A = syrena_alarmowa(PORT_A);
    PORT_A = on_off_syrena(PORT_A);
    PORT_A = wlacz_syrene(PORT_A);
    PORT_A = wylacz_syrene(PORT_A);

    return 0;
}