#include <stdio.h> 
#include <stdlib.h> 

int main() {

   float cenaBiletu = 25.50;
   float mojePiniondze;

        printf("Cena biletu to %.2f zł\n", cenaBiletu);
        printf("Ile masz pieniędzy?\n");

        scanf("%f", &mojePiniondze);

   if (mojePiniondze < 25.50) {

        printf("Niestety, brakuje Ci pieniędzy.\n"); }

   else {

        printf("Zapraszamy.\n");

   float resztaPiniendzy = mojePiniondze - cenaBiletu;

        printf("Zostało ci %.2f zł", resztaPiniendzy);}

    return 0;

} 