#include <iostream>

void interfacePrograma(char* adivinhacao, int tamanho);
void imprimeTentativas(int tentativas, int ctErros,
                       char* erros);
char lerTentativa();
int verifica(char* palavraSecreta, char* adivinhacao, int tamanho,
             int* ctErros, char* erros, char c);
int acertou(char* adivinhacao, int tamanho);

int main()
{
    int tamanho = 8;
    char* palavraSecreta = "epifania";
    char* adivinhacao    = new char[tamanho] {'_', '_', '_', '_', '_', '_', '_', '_'};

    int tentativas = tamanho * 2, ctErros = 0;
    char erros[tentativas];

    while (tentativas > 0) {
        interfacePrograma(adivinhacao, tamanho);
        imprimeTentativas(tentativas, ctErros, erros);
        char c = lerTentativa();
        verifica(palavraSecreta, adivinhacao, tamanho,
                 &ctErros, erros, c);
        printf("\n------------------------------------------\n");
        tentativas--;
        if (acertou(adivinhacao, tamanho)) {
            printf("PARABENS! Voce acertou!!!");
            break;
        }
    }

    return 0;
}

void interfacePrograma(char* adivinhacao, int tamanho) {
    printf("-- FORCA --\n");
    printf("Palavra: ");
    int i;
    for (i = 0; i < tamanho; i++){
        printf("%c ", adivinhacao[i]);
    }
}

void imprimeTentativas(int tentativas, int ctErros,
                       char* erros) {
    printf("\nVoce tem %d tentativas.", tentativas);
    printf("\nErros (%d): ", ctErros);
    int i;
    for (i = 0; i < ctErros; i++){
        printf("%c ", erros[i]);
    }
}

char lerTentativa() {
    printf("\nDigite uma letra (min.): ");
    char c;
    fflush(stdin);
    scanf("%c", &c);
    return c;
}

int verifica(char* palavraSecreta, char* adivinhacao, int tamanho,
             int* ctErros, char* erros, char c) {
    int i, acertou = 0;
    for (i = 0; i < tamanho; i++) {
        if (palavraSecreta[i] == c) { // Acerto
            adivinhacao[i] = palavraSecreta[i];
            acertou = 1;
        }
    }

    if (!acertou) {
        erros[*ctErros] = c;
        *ctErros = *ctErros + 1;
    }

    return acertou;
}

int acertou(char* adivinhacao, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (adivinhacao[i] == '_') {
            return 0;
        }
    }
    return 1;
}
