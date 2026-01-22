#include <stdio.h>

typedef struct {
    char imie[12];
    int nrAlbumu;
} Student;

int main()
{
    Student student[2];
    
    for (int i = 0; i < 2; i++)
    {
        printf("Podaj imię studenta: ");
        scanf("%s", student[i].imie);
        printf("Podaj nr. albumu studenta: ");
        scanf("%i", &student[i].nrAlbumu);
    }
    
    FILE *plik;
    plik = fopen("studenci.txt", "w");
    
    for (int i = 0; i < 2; i++)
    {
        fprintf(plik, "Student: %s, Nr albumu: [%i]\n", student[i].imie, student[i].nrAlbumu);
    }
    
    fclose(plik);
    
    return 0;
}