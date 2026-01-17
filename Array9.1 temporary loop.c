#include <stdio.h>

int main() {

    int tablica[6];
    int temp;
    
    for (int i = 0; i < 6; i++)
    {
        printf("Podaj %i element tablicy: ", i + 1);
        scanf("%i", &tablica[i]);
    }
    
    printf("\nOto elementy twojej tablicy:");
    
    for (int i = 0; i < 6; i++)
    {
        printf(" %i", tablica[i]);
    }
    
    for (int i = 0; i < 3; i++) 
    {
        // Tu jest ten "wzór": indeks po drugiej stronie to (5 - i)
        // Gdy i=0 -> druga strona to 5-0 = 5. Zamieniamy tablica[0] z tablica[5]
        // Gdy i=1 -> druga strona to 5-1 = 4. Zamieniamy tablica[1] z tablica[4]
        // Gdy i=2 -> druga strona to 5-2 = 3. Zamieniamy tablica[2] z tablica[3]
        
        temp = tablica[i];           // Kopiujemy LEWĄ stronę do kubka
        tablica[i] = tablica[5 - i]; // Przenosimy PRAWĄ stronę na lewą
        tablica[5 - i] = temp;       // Wylewamy kubek na PRAWĄ stronę
    }
    //Dzieki temu kazda tablica nie wazne jak wielka bedzie dzialac z tym kodem

    // 4. Wypisanie po zmianie
    printf("Oto elementy twojej tablicy w kolejnosci odwrotnej:");
    for (int i = 0; i < 6; i++)
    {
        printf(" %i", tablica[i]);
    }
    return 0;
}