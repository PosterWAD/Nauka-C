#include <stdio.h>

struct SystemBezpieczenstwa {
    unsigned char port_wejsciowy;
    unsigned char port_wyjsciowy;
    unsigned char stan_fabryki;
};

int main() {
    struct SystemBezpieczenstwa system = {0, 0, 0}; //zamiast wpisać system.port_wejsciowy = 0, system.port_wyjsciowy = 0, system.stan_fabryki = 0 można od razu zainicjalizować strukturę w momencie jej deklaracji
    unsigned char port_wejsciowy = system.port_wejsciowy;
    unsigned char port_wyjsciowy = system.port_wyjsciowy;
    
    return 0;
}