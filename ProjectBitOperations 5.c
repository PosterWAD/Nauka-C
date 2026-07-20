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

int main() {
    unsigned char PORT_A = 0b00000000;
    unsigned char Wentylator = 0b00000010;
    PORT_A = on_off_wentylator1(PORT_A, Wentylator);
    PORT_A = on_off_wentylator2(PORT_A);
    PORT_A = on_off_wentylator3(PORT_A);
    PORT_A = on_off_wentylator4(PORT_A);

    return 0;
}