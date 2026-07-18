#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    unsigned char wiadomosc[] = "Dom";
    unsigned char klucz = 'X';
    
    unsigned char *szyfr = malloc(sizeof(char) * (strlen((char*)wiadomosc) + 1)); 
    
    for (int i = 0; i < strlen((char*)wiadomosc); i++) {
        szyfr[i] = wiadomosc[i] ^ klucz;
    }
    
    szyfr[strlen((char*)wiadomosc)] = '\0';
    
    printf("Oryginal: %s\n", wiadomosc);
    printf("Zaszyfrowane: %s\n", szyfr);
    

    free(szyfr);
    
    return 0;
}