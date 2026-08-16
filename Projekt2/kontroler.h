#ifndef KONTROLER_H
#define KONTROLER_H

// Możliwe stany maszyny
typedef enum {
    STAN_INICJALIZACJA,
    STAN_PRACA_NORMALNA,
    STAN_AWARIA_CISNIENIA
} StanSystemu;
