// IP-01 Ex. 22
#include <iostream>

int ehPrimo(int n);

int main() {
    int n;

    printf("-- Programa Primo --\n");
    printf("Informe um numero: ");
    scanf("%d", &n);

    if ( !ehPrimo(n) ){
        printf("NAO eh primo!");
    } else {
        printf("EH Primo!!!");
    }

    return 0;
}

int ehPrimo(int n) {
    int i, ehPrimo = 1;
    for (i = 2 ; i < n ; i++) {
        if ((n % i) == 0) {
            ehPrimo = 0;
            break;
        }
    }
    return ehPrimo;
}
