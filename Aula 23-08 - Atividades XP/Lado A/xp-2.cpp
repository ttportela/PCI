#include <iostream>

/* Fa�a um programa que leia duas notas e
calcule a m�dia ponderada delas com os pesos:
60% e 40% */

int main() {

    float n1, n2, media;

    printf("-- Programa media ponderada --\n");
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1*0.6 + n2*0.4);

    printf("A media ponderada eh: %.2f", media);

    return 0;
}
