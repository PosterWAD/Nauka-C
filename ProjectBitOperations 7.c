#include <stdio.h>
// Wejścia port_wejsciowy (PORT_A)
#define POMPA      (1<<0)
#define WENTYLATOR (1<<1)
#define SWIATLA    (1<<2)
#define SYRENA     (1<<7)

// Wyjścia port_wyjsciowy (PORT_B)
#define CZUJNIK_DYMU (1<<0)
#define PRZYCISK_EWA (1<<1)

// Stany systemu
#define STAN_NORMALNY  0
#define STAN_AWARIA    1
#define STAN_EWAKUACJA 2
struct SystemBezpieczenstwa {
    unsigned char port_wejsciowy;
    unsigned char port_wyjsciowy;
    unsigned char stan_fabryki;
};

int czy_wlaczone(unsigned char port, unsigned char urzadzenie) {
    return (port & urzadzenie) ? 1 : 0;
}

void aktualizuj_system(struct SystemBezpieczenstwa *system){
    switch(system->stan_fabryki) {
        case STAN_NORMALNY:
            system->port_wejsciowy = (STAN_NORMALNY | POMPA | WENTYLATOR | SWIATLA) & ~SYRENA;
            break;
        case STAN_AWARIA:
            system->... = STAN_EWAKUACJA;
            break;
        case STAN_EWAKUACJA:
            system->... = STAN_NORMALNY;
            break;
        default:
            break;
    }
}

int main() {
    struct SystemBezpieczenstwa system = {0, 0, 0}; //zamiast wpisać system.port_wejsciowy = 0, system.port_wyjsciowy = 0, system.stan_fabryki = 0 można od razu zainicjalizować strukturę w momencie jej deklaracji
    unsigned char port_wejsciowy = system.port_wejsciowy;
    unsigned char port_wyjsciowy = system.port_wyjsciowy;

    while(1) {
        aktualizuj_system(&system);
    }
    
    return 0;
    return 0;
}