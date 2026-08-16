#ifndef KONTROLER_H
#define KONTROLER_H

// Możliwe stany maszyny
typedef enum {
    STAN_INICJALIZACJA,
    STAN_PRACA_NORMALNA,
    STAN_AWARIA_CISNIENIA
} StanSystemu;

// Struktura opisująca parametry całego układu
struct KontrolerProcesu {
    StanSystemu aktualny_stan;
    unsigned int limit_cisnienia_max;
    unsigned int limit_cisnienia_min;
};

void Kontroler_Inicjalizacja(struct KontrolerProcesu *k);
void Kontroler_Aktualizuj(struct KontrolerProcesu *k);

#endif // KONTROLER_H