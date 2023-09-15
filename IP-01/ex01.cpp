// Programa para ler 2 valores do teclado
// e resolver as 4 operações matemáticas
#include <stdio.h>

int main() {
    float num1, num2;

    // Entrada de Dados:
    printf("--- Prog. Calculadora ---\n");
    printf("Informe um numero: ");
    scanf("%f", &num1);
    printf("Informe outro numero: ");
    scanf("%f", &num2);

    // Processamento e Sa�da
    printf("Soma: %.2f\n", (num1 + num2) );
    printf("Subtracao: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);
    printf("Divisao: %.2f\n", num1/num2);

    return 0;
}
