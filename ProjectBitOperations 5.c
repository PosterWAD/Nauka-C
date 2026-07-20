#include <stdio.h>

struct Postac {
    char imie[20];
    int hp;
    int mana;
    int obrazenia;
};

void walka(struct Postac *atakujacy, struct Postac *broniacy) {
    atakujacy->hp -= broniacy->obrazenia;
    broniacy->hp -= atakujacy->obrazenia;
}

int main() {
    // Inicjalizacja postaci
    struct Postac gracz1 = {"Gracz1", 50, 100, 10};
    struct Postac boss = {"Boss", 200, 50, 25};

    struct Postac *wskaznikGracza = &gracz1;
    struct Postac *wskaznikBossa = &boss;
    
    printf("HP przed leczeniem: %d\n", (*wskaznikGracza).hp);
    printf("Mana przed leczeniem: %d\n", (*wskaznikGracza).mana);
    printf("Obrazenia gracz1: %d\n", (*wskaznikGracza).obrazenia);
    printf("HP bossa: %d\n", (*wskaznikBossa).hp);
    printf("Obrazenia bossa: %d\n", (*wskaznikBossa).obrazenia);

    wskaznikGracza->hp += 50;   // zamiast (*wskaznikGracza).hp += 50;
    wskaznikGracza->mana -= 50; // zamiast (*wskaznikGracza).mana -= 50;
    
    printf("HP gracza1 po leczeniu: %d\n", (*wskaznikGracza).hp);
    printf("Mana gracz1 po leczeniu: %d\n", (*wskaznikGracza).mana);

    walka(&gracz1, &boss);
    printf("HP gracza1 po walce: %i\n", wskaznikGracza->hp);
    printf("HP bossa po walce: %i\n", wskaznikBossa->hp);

    return 0;
}
