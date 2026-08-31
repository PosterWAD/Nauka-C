#ifndef stoper
#define stoper

struct Stoper {
    uint32_t ostatni_odczyt;
    uint32_t czas_pracy;
};

void StoperStart(struct Stoper *stoper);
void StoperAktualizuj(struct Stoper *stoper, uint32_t czas_teraz);


#endif