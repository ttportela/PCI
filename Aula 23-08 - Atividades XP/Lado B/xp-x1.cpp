#include <iostream>
#include <cmath>

/* Solicite Coordenadas (x,y) de dois pontos e calcule a dist�ncia
euclidiana entre eles. d(A,B) = (xb - xa)^2 + (yb - ya)^2*/

int main() {
    printf("-- Programa de Distancia Euclidiana --\n");
    int Xa, Ya, Xb, Yb;

    printf("Informe o ponto A no formato (x,y): ");
    scanf("%d,%d", &Xa, &Ya);

    printf("Informe o ponto B no formato (x,y): ");
    scanf("%d,%d", &Xb, &Yb);

    int d = pow( (Xb - Xa) , 2 ) + pow(Yb - Ya, 2);

    printf("Distancia A(%d,%d) e B(%d,%d) = %d", Xa, Ya, Xb, Yb, d);

    return 0;
}
