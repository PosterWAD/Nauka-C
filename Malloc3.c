#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char znak = 'a';
    printf("Jak długi ma być napis?\nPodaj długość napisu: ");
    scanf("%i", &n);
    printf("Jaki znak powielić?\nWpisz znak do powielenia: ");
    scanf(" %c", &znak);
    
    char *haslo = malloc((n+1) * sizeof(char));
    
    printf("Oto twój znak '%c' powielony %i razy: ", znak, n);
    
    for (int i = 0; i < n; i++){
        haslo[i]=znak;
        printf("%c", haslo[i]);
    }

    
    return 0;
}