// IP-01 Ex. 23 5 - 1700
#include <iostream>

int ehPrimo(int n);

int main() {
    int n;

    printf("-- Programa Primo 5-1700 --\n");
    
    int i;
    for (i = 5; i <= 1700; i++) {
        if ( !ehPrimo(i) ){
            printf("%d - NAO eh primo!", i);
        } else {
            printf("%d - EH Primo!!!", i);
        }
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
