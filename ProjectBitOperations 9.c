#include <stdio.h>

// Wejścia (Port A)
#define PRZELACZNIK_1    (1<<0) // Wartość: 1
#define PRZELACZNIK_2    (1<<1) // Wartość: 2
#define PRZELACZNIK_3    (1<<2) // Wartość: 4
#define UKRYTY_PRZYCISK  (1<<3) // Wartość: 8
#define CZUJNIK_OTWARCIA (1<<4) // Wartość: 16

// Wyjścia (Port B)
#define DIODA_ZLE    (1<<0)
#define DIODA_DOBRZE (1<<1)
#define ZAMEK_MAG    (1<<7) // 1 = zamek trzyma, 0 = zamek puszcza

// Stany gry
#define STAN_INICJALIZACJA   0
#define STAN_CZEKANIE_NA_KOD 1
#define STAN_OTWARTE         2
#define STAN_ZABLOKOWANE     3

struct PuzzleBox {
    unsigned char wejscia;
    unsigned char wyjscia;
    unsigned char stan_gry;
    int licznik_bledow;
};

int czy_wlaczone(unsigned char port, unsigned char urzadzenie) {
    return (port & urzadzenie) ? 1 : 0;
}

void aktualizuj_box(struct PuzzleBox *box) {
    switch(box->stan_gry) {
        
        case STAN_INICJALIZACJA:
            box->wyjscia = ZAMEK_MAG; 
            box->stan_gry = STAN_CZEKANIE_NA_KOD;
            break;

        case STAN_CZEKANIE_NA_KOD:
            if (czy_wlaczone(box->wejscia, UKRYTY_PRZYCISK)) {
                
                if (czy_wlaczone(box->wejscia, PRZELACZNIK_1) &&
                    !czy_wlaczone(box->wejscia, PRZELACZNIK_2) && //(!)
                    czy_wlaczone(box->wejscia, PRZELACZNIK_3)) {
                    
                    box->stan_gry = STAN_OTWARTE;
                } 
                else {
                    box->licznik_bledow++;
                    if (box->licznik_bledow >= 3) {
                        box->stan_gry = STAN_ZABLOKOWANE;
                    }
                }
            }
            break;

        case STAN_OTWARTE:
            box->wyjscia = DIODA_DOBRZE; 
            break;
            
        case STAN_ZABLOKOWANE:
            box->wyjscia = DIODA_ZLE | ZAMEK_MAG;
            break;
    }
}

int main() {
    struct PuzzleBox walizka = {0, 0, STAN_INICJALIZACJA, 0};
    int symulacja_wejsc = 0;

    printf("--- KONTROLER ESCAPE ROOM ---\n");

    while(1) {
        printf("\nStan walizki: %d | Wyjscia: %d | Bledy: %d\n", 
               walizka.stan_gry, walizka.wyjscia, walizka.licznik_bledow);
        printf("Podaj stan wejsc (99 aby wyjsc): ");
        scanf("%d", &symulacja_wejsc);

        if (symulacja_wejsc == 99) break;

        walizka.wejscia = symulacja_wejsc;
        aktualizuj_box(&walizka);
    }
    
    return 0;
}