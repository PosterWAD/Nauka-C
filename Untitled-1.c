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

    // Wskaźniki na statystyki gracza
    int *wskaznikHP = &gracz1.hp;
    int *wskaznikMana = &gracz1.mana;
    int *wskaznikObrazenia = &gracz1.obrazenia;

    // Stan początkowy
    printf("HP przed leczeniem: %d\n", gracz1.hp);
    printf("Mana przed leczeniem: %d\n", gracz1.mana);
    printf("Obrazenia gracz1: %d\n", gracz1.obrazenia);
    printf("HP bossa: %d\n", boss.hp);
    printf("Obrazenia bossa: %d\n", boss.obrazenia);

    // Modyfikacja statystyk przez wskaźniki
    *wskaznikHP += 50;
    *wskaznikMana -= 50;

    // Stan po leczeniu
    printf("HP po leczeniu: %d\n", gracz1.hp);
    printf("Mana po leczeniu: %d\n", gracz1.mana);

    return 0;
}
