#include <stdio.h>

int main()

{

    int poprawnyPin = 1234, kod;

    do 

        {

        printf("Podaj cztero cyfrowy kod pin do bankomatu:"); scanf("%i", &kod);

        if (kod != poprawnyPin) printf("Zły kod pin, spróbuj jeszcze raz:\n");

    } while (kod != poprawnyPin); 
    
    printf("\nPoprawny pin!");

    return 0;

}

#include <stdio.h>

int main()

{

    int poprawnyPin = 1234, kod;

    do 

        {

        printf("Podaj cztero cyfrowy kod pin do bankomatu:"); scanf("%i", &kod);

        if (kod != poprawnyPin) printf("Zły kod pin, spróbuj jeszcze raz:\n");
        else if (kod == poprawnyPin) printf("\nPoprawny Pin!");

    } while (kod != poprawnyPin); 


    return 0;

}