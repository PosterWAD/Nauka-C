#include <stdio.h>

struct Postac {
    char imie[20];
    int hp;
    int mana;
    int obrazenia;
};

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

    (*wskaznikGracza).hp += 50;
    (*wskaznikGracza).mana -= 50;

    printf("HP po leczeniu: %d\n", (*wskaznikGracza).hp);
    printf("Mana po leczeniu: %d\n", (*wskaznikGracza).mana);

    return 0;
}
