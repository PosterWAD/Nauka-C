#include <stdio.h>

int main() {

    int ocena = 1;
    printf("Podaj ocenę do wpisania do dziennika elektronicznego (zostanie ona zamieniona z wartości liczbowej na słowną):");
    scanf("%i", &ocena);printf("\n");
    
    switch (ocena)

    {
        
        case 1: 
            printf("Niedostateczny"); 
            break;
        
        case 2:
            printf("Dopuszczający");
            break;
            
        case 3:
            printf("Dostateczny");
            break;
            
        case 4:
            printf("Dobry");
            break;
                
        case 5:
            printf("Bardzo Dobry");
            break;
                
        case 6:
            printf("Celujący");
            break;
            
        default:    //tutaj jest : a nie ; !!!
            printf("Nie ma takiej oceny");
            //nie trzeba break
    }
    
    return 0;
}