#include <stdio.h>
#include <math.h>

int main()

{

    float a, b;
    double c; 
    int typDzialania;
    do {
    printf("Jakie działanie chcesz wykonać?\n\n1. Mnożenie 2. Dzielenie 3. Potęgowanie 4. Pierwiastkowanie 5. Wyjście\n\nAby wybrać napisz liczbę:");
    scanf("%i", &typDzialania);
    
    switch (typDzialania)
    
    {
        case 1:
            printf("\nKalkulator będzie wykonywał mnożenie. Podaj pierwszą liczbę:"); 
                scanf("%f", &a);
            printf("\nPodaj drugą liczbę:"); 
                scanf("%f", &b);
            c=a*b;
            printf("\nWynik mnożenie %.2f przez %.2f wynosi %.2f", a, b, c);
                break;
        case 2:
            printf("\nKalkulator będzie wykonywał dzielenie. Podaj pierwszą liczbę (licznik):"); 
                scanf("%f", &a);
            printf("\nPodaj drugą liczbę (mianownik):"); 
                scanf("%f", &b);
            c=a/b;
            printf("\nWynik dzielnia %.2f przez %.2f wynosi %.2f", a, b, c);
                break;
        case 3:
            printf("\nKalkulator będzie wykonywał potęgowanie. Podaj podstawę potęgi:");
                scanf("%f", &a);
            printf("\nPodaj wykładnik:"); 
                scanf("%f", &b);
            c=pow(a, b);
            printf("\nWynik potęgowania %.2f przez %.2f wynosi %.4lf", a, b, c);
                break;
        case 4:
            printf("\nKalkulator będzie wykonywał pierwiastkowanie. Podaj liczbę, z której chcesz otrzymać pierwiastek:"); 
                scanf("%f", &a);
            printf("\nPodaj licznik wykładnika:"); 
                scanf("%f", &b);
            printf("\nPodaj mianownik wykładnika:"); 
                scanf("%lf", &c);
                double d;
                d=pow(a, b/c);
                float e=b/c;
            printf("\nPierwiastek z %.2f do potęgi %.2f wynosi %.4lf", a, e, d);
                break;
        case 5: 
            printf("\nDo zobaczenia!");
                break;
        default:
            printf("\nError");
        
    }
} while (typDzialania != 5);

    return 0;

}
