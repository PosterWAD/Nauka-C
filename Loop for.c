#include <stdio.h>

int main()
{
    int liczba;
    
    printf("Podaj liczbę:"); scanf("%i", &liczba);
    
    for ( liczba ; 0 <= liczba ; liczba--)
        {
            if (liczba > 0)
            printf("%i\n", liczba);
            else if (liczba == 0)
            printf("START");
            
        }
    return 0;
}

//Albo tak:
//#include <stdio.h>

//int main()
//{
//    int liczba;
   
//    printf("Podaj liczbę: "); 
//    scanf("%i", &liczba);

//    for ( ; liczba > 0 ; liczba--) 
//    {
//        printf("%i...\n", liczba);
//    }

    // To wykona się dopiero, gdy pętla skończy pracę (liczba dojdzie do 0)
//    printf("START!"); 
    
//    return 0;
//}