#include <stdio.h>

int main()
{
    int a, b, c, d;
        printf("Podaj liczby:\n\n");
        printf("a:");scanf("%i", &a);printf("\n");
        printf("b:");scanf("%i", &b);printf("\n");
        c=a/b, d=a%b;
        printf("Dzielenie a/b:%i\n", c);
        printf("Modulo a%%b:%i\n", d);
    return 0;
}
