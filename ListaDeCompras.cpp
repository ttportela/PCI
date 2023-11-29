#include <iostream>

FILE* abreArquivo() {
    FILE *arquivo = fopen("listaDeCompras.txt", "a");

    if (arquivo == NULL) {
        printf("Ocorreu um erro ao abrir a lista de compras!");
        exit(1);
    }

    return arquivo;
}

char* leitura() {
    char *item = new char[100];

    printf("Digite um item [espaco e enter p/ sair]: ");
    //scanf("%s", item);
    gets(item);

    return item;
}

void escreverItens(FILE *arquivo) {
    while (1) {
        char *item = leitura();

        if (item[0] == ' ')
            break;

        fprintf(arquivo, "%s\n", item);
    }
}

int main()
{
    FILE *arquivo = abreArquivo();

    printf("--- Programa da Lista de Compras ---\n");

    // TODO: criar um menu para o usuário escolher
    // listar os itens ou inserir mais itens
    escreverItens(arquivo);

    fclose(arquivo);

    return 0;
}
