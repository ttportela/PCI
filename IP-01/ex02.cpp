#include <iostream>

/* Façaa um programa que leia 3 notas
de um aluno e calcule a média aritmética */

int main() {
    float n1, n2, n3;

    printf("-- Programa de Media --\n");
    printf("Informe a nota 1: ");
    scanf("%f", &n1);

    printf("Informe a nota 2: ");
    scanf("%f", &n2);

    printf("Informe a nota 3: ");
    scanf("%f", &n3);

    float media = (n1 + n2 + n3) / 3;

    printf("A media eh: %.2f", media);

    return 0;
}
