#include <stdio.h>

void zamien(int *x, int *y) {
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Przed zamiana: a = %d, b = %d\n", a, b);

    zamien(&a, &b);

    printf("Po zamianie:   a = %d, b = %d\n", a, b);

    return 0;
} 
