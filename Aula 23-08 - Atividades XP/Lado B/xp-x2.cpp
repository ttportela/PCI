#include <iostream>

/* Peça para o usuário o tipo de figura geométrica,
as suas dimensões e calcule a área
(para quadrado, retângulo e círculo) */

int escolha();
void programaArea(int tipoForma);
int leia(char x[]);
float areaQuadrado(int lado);
float areaRetangulo(int a, int b);
float areaCirculo(int raio);

int main() {
    int op = -1;

    do {
        op = escolha();
        programaArea(op);
        printf("\n---------------------------------\n");
    } while (op != 0);

    return 0;
}

int escolha() {
    int op = 0;

    printf("-- Programa da Area --\n");
    printf("Escolha uma forma geometrica:\n");
    printf("\t[1] Quadrado\n");
    printf("\t[2] Retangulo\n");
    printf("\t[3] Circulo\n");
    printf("\t[0] Sair\n");
    printf("Opcao: ");
    scanf("%d", &op);

    return op;
}

int leia(char x[]) {
    int a;

    printf("Informe valor do %s: ", x);
    scanf("%d", &a);

    return a;
}

void programaArea(int tipoForma) {
    int a, b;
    float area;

    switch (tipoForma) {
    case 1:
        a = leia("lado A");
        printf("A area do quadrado e: %.2f",
               areaQuadrado(a));
        break;
    case 2:
        a = leia("lado A");
        b = leia("lado B");
        printf("A area do retangulo e: %.2f",
               areaRetangulo(a, b));
        break;
    case 3:
        a = leia("raio");
        printf("A area do circulo e: %.2f",
               areaCirculo(a));
        break;
    case 0:
        printf("Bye!");
        break;
    default:
        printf("Forma geometrica invalida!");
    }
}

float areaQuadrado(int lado) {
    return lado * lado;
}

float areaRetangulo(int a, int b) {
    return a * b;
}

float areaCirculo(int raio) {
    return 3.14 * raio * raio;
}
