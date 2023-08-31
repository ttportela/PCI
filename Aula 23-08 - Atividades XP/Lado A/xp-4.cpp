#include <iostream>

/* Pe�a um n�mero inteiro e calcule o seu
fatorial at� o 2!. Ex.: 4! = 4.3.2! = 12.2! */

int main() {
    long num, fat = 1;

    printf("-- Programa fatorial incompleto --\n");
    printf("Informe um numero: ");
    scanf("%d", &num);

    int i;
    for (i = num; i > 2; i--) {
        fat = fat * i;
    }

    printf("Fatorial de %d eh: %d . 2!", num,  fat);

    return 0;
}
