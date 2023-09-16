// Desafio 1: Faça um programa que leia
// o nome do usuário e imprima em
// Letras maiúsculas
#include <iostream>

int main() {
    char nome[50];

    printf("Seu nome: ");
    gets(nome);

    int i;
    for (i = 0; i < sizeof(nome); i++) {
        if (nome[i] == '\0') break;
        printf("%c", nome[i]-32);
    }

    //printf("\n%s", nome);

    return 0;
}
