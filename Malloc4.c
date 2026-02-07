#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    char imie[20];
    int punkty;
}Student;

int main()
{
    int n = 0;
    printf("Podaj ilość studentów: ");
    scanf("%i", &n);
    
    Student *tablica = malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++){
        printf("Podaj imie studenta #%i: ", i + 1);
        scanf("%s", tablica[i].imie);
        printf("Podaj punkty studenta #%i: ", i + 1);
        scanf("%i", &tablica[i].punkty);
    }
    
    printf("\nStudenci, którzy zdali (uzyskali więcej niż 50pkt): ");
    
    for (int i = 0; i < n; i++){
        if (tablica[i].punkty > 50) {
            printf("%s ", tablica[i].imie);
        }
    }
     
    free(tablica);
    tablica = NULL;
    
    return 0;
}