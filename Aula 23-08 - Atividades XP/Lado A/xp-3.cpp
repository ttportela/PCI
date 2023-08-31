#include <iostream>

/* Pe�a uma medida em metros e apresente o valor
em centimetros e milimetros. */

int main() {
    float metros;

    printf("-- Programa de conversao --\n");
    printf("Informe a medida em metros: ");
    scanf("%f", &metros);

    printf("%.2fm eh %.2fcm e %.2fmm",
           metros, (metros*100), (metros*1000));

    return 0;
}
