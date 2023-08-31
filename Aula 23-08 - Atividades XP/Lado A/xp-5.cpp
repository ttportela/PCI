#include <iostream>

/* Pe�a ao usuario duas notas para cada bimestre,
apresente as m�dias de dois bimestres e a m�dias dos bimestres.
Informe se o aluno foi aprovado ou n�o (m�dia final: 6). */

int main() {
    int b = 2, n = 2;
    float notas[b][n];

    printf("-- Programa m�dia final --\n");
    int i, j;
    for (i = 0; i < b; i++) {
        printf("Notas BIMESTRE %d:\n", i+1);
        for (j = 0; j < n; j++) {
            printf("Informe a nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    float mb1 = 0;
    for (j = 0; j < n; j++) {
        mb1 += notas[0][j];
    }
    mb1 = mb1 / n;

    return 0;
}
