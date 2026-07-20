#include <stdio.h>
unsigned char on_off_wentylator(unsigned char PORT_A, unsigned char Wentylator) {
    if (PORT_A & 0b00000010 == 0b00000000) {
        // Wentylator jest wyłączony
        return PORT_A | Wentylator; // Włącz wentylator
    }
        
    else if (PORT_A & 0b00000010 == Wentylator) {
        // Wentylator jest włączony
        return PORT_A & ~Wentylator; // Wyłącz wentylator, bo ~Wentylator = 0b11111101
    }
}
int main() {
    unsigned char PORT_A = 0b00000000;
    unsigned char Wentylator = 0b00000010;

    return 0;
}