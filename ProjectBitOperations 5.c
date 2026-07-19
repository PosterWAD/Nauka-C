#include <stdio.h>

struct Postac {
    char imie[20];
    int hp;
    int mana;
    int obrazenia;
};

int main() {
    struct Postac gracz1 = {"Gracz1", 50, 100, 10};
    int *wskaznikHP = &gracz1.hp;
    int *wskaznikMana = &gracz1.mana;
    int *wskaznikObrazenia = &gracz1.obrazenia;
    
    struct Postac boss = {"Boss", 200, 50, 25};
    printf("HP przed leczeniem: %d\n", gracz1.hp);
    printf("Mana przed leczeniem: %d\n", gracz1.mana);
    printf("Obrazenia gracz1: %d\n", gracz1.obrazenia);
    printf("HP bossa: %d\n", boss.hp);
    printf("Obrazenia bossa: %d\n", boss.obrazenia);

    *wskaznikHP += 50;
    *wskaznikMana -= 50;

    printf("HP po leczeniu: %d\n", gracz1.hp);
    printf("Mana po leczeniu: %d\n", gracz1.mana);
    
    return 0;
}