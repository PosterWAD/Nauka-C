#include <stdio.h>

int main()
{
    int temperatura;
        printf("Podaj temperature:");
        scanf("%i", &temperatura);printf("\n");
        
        if (temperatura >= 25) printf("Jest gorąco, ubierz krótkie spodenki.\n");
        
            else if ((temperatura >= 10) && (temperatura < 25)) printf("Jest przyjemnie, wystarczy bluza.\n");
            
            else if ((temperatura > 0) && (temperatura < 10)) printf("Jest chłodno, załóż kurtkę.\n");
            
            else if (temperatura <= 0) printf("Jest mróz, ubierz czapkę i szalik!\n");
            
    return 0;
}
