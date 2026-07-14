#include <stdio.h>

void odwroc_tekst(char *tekst) {
    int licznik = 0;
    
    while (tekst[licznik] != '\0') {
        licznik++;
    }
    
    for (int i = 0; i < licznik / 2; i++) {
        char temp = tekst[i];
        tekst[i] = tekst[licznik - 1 - i];
        tekst[licznik - 1 - i] = temp;
    }
}

int main() {
    char tekst[] = "C-Ninja";
    printf("Przed: %s\n", tekst);
    
    odwroc_tekst(tekst);
    
    printf("Po: %s\n", tekst);
    return 0;
}