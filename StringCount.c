#include <stdio.h>

int szukajZnak(char *tekst, char szukany_znak) {
    int licznik = 0;
    int ilosc_szukanego_znaku = 0;
    
    while (tekst[licznik] != '\0') {
        licznik++;
    }

    for (int i = 0; i < licznik; i++) {
        if (tekst[i] == szukany_znak) {
            ilosc_szukanego_znaku++;
        }
    }
    
    return ilosc_szukanego_znaku;
}

int main() {
    char tekst[] = "ananas";
    char szukany_znak = 'a';

    int wynik = szukajZnak(tekst, szukany_znak);
    printf("W slowie '%s' znaleziono %d liter '%c'.\n", tekst, wynik, szukany_znak);

    return 0;
}
