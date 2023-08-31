#include <iostream>

/* V.2: Fa�a um programa que leia 3 notas
de um aluno e calcule a m�dia aritm�tica */

int main() {
    int n = 3;
    float notas[n];

    printf("-- Programa de M�dia --\n");

    int i;
    for (i = 0; i < n; i++) {
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    float media = 0.0;
    for (i = 0; i < n; i++) {
        media = media + notas[i];
    }
    media = media / n;

    printf("A media eh: %.2f", media);

    return 0;
}
