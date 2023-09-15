// IP-01: Exercicio 11.
#include <iostream>

float pesoIdeal(float altura, char sexo);

int main() {

    float altura;
    char sexo;

    // ENTRADA DE DADOS:
    printf("-- Programa do Peso Ideal --\n");
    printf("Informe o seu sexo:\n");
    printf("\t[h] homem\n");
    printf("\t[m] mulher\n\tSelecao: ");
    scanf("%c", &sexo);
    printf("Informe sua altura (m): ");
    scanf("%f", &altura);

    // SAÍDA:
    printf("Seu Peso Ideal eh %.2f",
           pesoIdeal(altura, sexo));

    return 0;
}

float pesoIdeal(float altura, char sexo) {
    float pi = 0.0;

    switch (sexo) {
    case 'h':
    case 'H':
    default:
        pi = (72.7 * altura) - 58;
        break;
    case 'm':
    case 'M':
        pi = (62.1 * altura) - 44.7;
    }

    return pi;
}