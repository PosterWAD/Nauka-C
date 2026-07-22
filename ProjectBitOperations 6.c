#include <stdio.h>
#define POMPA (1<<0)
#define WENTYLATOR (1<<1)
#define SWIATLA (1<<2)
#define SYRENA (1<<7)

#define CZUJNIK_DYMU (1<<0)
#define PRZYCISK_EWA (1<<1)

#define STAN_NORMALNY 0
#define STAN_AWARIA 1
#define STAN_EWAKUACJA 2


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

    unsigned char stan_fabryki = 0; //lub = 0b00000000 lub = STAN_NORMALNY;

while(1) {
    switch(stan_fabryki) {
        case STAN_NORMALNY:
            PORT_A = (PORT_A | (WENTYLATOR | SWIATLA)) & ~(POMPA | SYRENA);
            
            if (czy_wlaczone(PORT_B, CZUJNIK_DYMU)) {
                stan_fabryki = STAN_AWARIA;
            }
            else if (czy_wlaczone(PORT_B, PRZYCISK_EWA)) {
                stan_fabryki = STAN_EWAKUACJA;
            }
           else {
                stan_fabryki = STAN_NORMALNY; //jesli nie ma awarii ani ewakuacji, pozostajemy w stanie normalnym
            } //w zasadzie nie ma potrzeby tego else, bo stan_fabryki juz jest ustawiony na STAN_NORMALNY, ale dla przejrzystosci kodu zostawiamy
            
            break; 
            
        case STAN_AWARIA:
            PORT_A = (PORT_A | (POMPA | SYRENA)) & ~(WENTYLATOR | SWIATLA);

            if (!czy_wlaczone(PORT_B, CZUJNIK_DYMU)) {
                stan_fabryki = STAN_NORMALNY;
            }
            else if (czy_wlaczone(PORT_B, PRZYCISK_EWA)) {
                stan_fabryki = STAN_EWAKUACJA;
            }
            else {
                stan_fabryki = STAN_AWARIA; //jesli nie ma ewakuacji ani powrotu do normalnego stanu, pozostajemy w stanie awarii
            } //w zasadzie nie ma potrzeby tego else, bo stan_fabryki juz jest ustawiony na STAN_AWARIA, ale dla przejrzystosci kodu zostawiamy
            break;
            
        case STAN_EWAKUACJA:
            PORT_A = (PORT_A | (SYRENA | SWIATLA)) & ~(POMPA | WENTYLATOR);
            
            if (!czy_wlaczone(PORT_B, PRZYCISK_EWA)) {
                stan_fabryki = STAN_NORMALNY;
            }
            else if (czy_wlaczone(PORT_B, CZUJNIK_DYMU)) {
                stan_fabryki = STAN_AWARIA;
            }
            else {
                stan_fabryki = STAN_EWAKUACJA; //jesli nie ma powrotu do normalnego stanu ani awarii, pozostajemy w stanie ewakuacji
            } //w zasadzie nie ma potrzeby tego else, bo stan_fabryki juz jest ustawiony na STAN_EWAKUACJA, ale dla przejrzystosci kodu zostawiamy
            break;
    }
}


    return 0;
}