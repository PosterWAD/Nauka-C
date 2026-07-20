#include <stdio.h>

// BIT 7: Błąd
void error(unsigned char *rejestr) {
    if ((*rejestr & 0b10000000) == 0b10000000) {
        *rejestr &= 0b11110010; //Prędkość(23) na 00 i Wyłączenie(0) na 0
    }
}

// BIT 0: Włączanie / Wyłączanie
void on_off(unsigned char *rejestr) {
    if ((*rejestr & 0b00000001) == 0b00000000) {
        *rejestr |= 0b00000001; // Włącz
    }
    else if ((*rejestr & 0b00000001) == 0b00000001) {
        *rejestr &= 0b11111110; // Wyłącz
    }
}

// BIT 1: Przełączanie świateł
void lights(unsigned char *rejestr) {
    if (*rejestr & (1 << 1)) {      
        *rejestr &= ~(1 << 1);       
    } 
    else {                        
        *rejestr |= (1 << 1);        
    }
}

// BIT 23: Stany prędkości: 00 -> 01 -> 10 -> 11 -> 00
void speed_change1(unsigned char *rejestr) {
    if ((*rejestr & 0b00001100) == 0b00000000) {
        *rejestr |= 0b00000100;
    }
    else if ((*rejestr & 0b00001100) == 0b00000100) {
        *rejestr &= 0b11110011;
        *rejestr |= 0b00001000;
    }
    else if ((*rejestr & 0b00001100) == 0b00001000) {
        *rejestr |= 0b00001100;
    }
    else if ((*rejestr & 0b00001100) == 0b00001100) {
        *rejestr &= 0b11110011;
    }
}   
void speed_change2(unsigned char *rejestr) {
    switch (*rejestr & 0b00001100) {
        case 0b00000000:
            *rejestr |= 0b00000100;
            break;
        case 0b00000100:
            *rejestr &= 0b11110011;
            *rejestr |= 0b00001000;
            break;
        case 0b00001000:
            *rejestr |= 0b00001100;
            break;
        case 0b00001100:
            *rejestr &= 0b11110011;
            break;
        default:
            error(rejestr);
            break;
    }
} 

// BIT 4: Skaner
void scaner(unsigned char *rejestr) {
    *rejestr |= 0b00010000;
}



int main() {
    unsigned char rejestr = 0b00000000; 

    on_off(&rejestr);  // Włączenie
    scaner(&rejestr);  // Włączenie skanera
    lights(&rejestr);  // Włączaenie świateł

    speed_change1(&rejestr); // 00 -> 01 
    speed_change1(&rejestr); // 01 -> 10 
    speed_change2(&rejestr); // 10 -> 11
    speed_change2(&rejestr); // 11 -> 00

    rejestr |= 0b10000000;  //Wywołanie błędu w rejestrze
    error(&rejestr);   // Sprawdzenie błędu

    return 0; 
}