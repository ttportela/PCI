#include <iostream>

/* Peca ao usuario para digitar numeros
inteiros ate que ele informe -1 e
apresente a media de todos.*/

int main() {
    printf("-- Programa Media de N --\n");
    float soma = 0, num = 0, cont = 0;

    do {
        printf("Informe um numero (ou -1): ");
        scanf("%f", &num);

        if (num == -1) break;

        soma += num;
        cont++;
    } while(1);

    soma = soma / cont;
    printf("A media eh: %f", soma);

    return 0;
}





int main_v1() {
    printf("-- Programa Media de N --\n");
    float soma = 0, num = 0, cont = 0;

    while(num != -1) {
        printf("Informe um numero (ou -1): ");
        scanf("%f", &num);

        if (num != -1) {
            soma += num;
            cont++;
        }
    }

    soma = soma / cont;
    printf("A media eh: %f", soma);

    return 0;
}
