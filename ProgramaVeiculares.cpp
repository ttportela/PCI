#include <iostream>

using namespace std;

typedef struct Fabricante {
    char* nome;
};

typedef struct Modelo {
    char* nome;
    int ano;
    Fabricante fabricante;
};

typedef struct Veiculo {
    Modelo modelo;
    int ano;
    char* cor;
    float valor;
};

void mostraMenu();
void menuVe();
void menuMo();
void menuFa();
Fabricante cadastraFa();

int main()
{
    mostraMenu();
    printf("Bye! :)\n");

    return 0;
}

// MENUS ---------------------------------------------------->
void mostraMenu() {
    int op = -1;
    do {
        printf("--- Veiculares ---\n");
        printf(":: Menu Principal ::\n");
        printf("[1] Veiculos\n");
        printf("[2] Modelos\n");
        printf("[3] Fabricantes\n");
        printf("[0] Sair\n");
        printf("Selecione: ");

        scanf("%d", &op);

        switch (op) {
        case 1:
            menuVe();
            break;
        case 2:
            menuMo();
            break;
        case 3:
            menuFa();
            break;
        }
    } while (op > 0);
}

void menuVe() {
    int op = -1;
    do {
        printf("--- Veiculares ---\n");
        printf(":: Principal > Veiculos ::\n");
        printf("[1] Cadastrar Veiculo\n");
        printf("[2] Listar Veiculos\n");
        printf("[0] Voltar\n");
        printf("Selecione: ");

        scanf("%d", &op);

        switch (op) {
        case 1:
            // ????;
            break;
        case 2:
            // ????;
            break;
        }
    } while (op > 0);
}

void menuMo() {
    int op = -1;
    do {
        printf("--- Veiculares ---\n");
        printf(":: Principal > Modelos ::\n");
        printf("[1] Cadastrar Modelo\n");
        printf("[2] Listar Modelos\n");
        printf("[0] Voltar\n");
        printf("Selecione: ");

        scanf("%d", &op);

        switch (op) {
        case 1:
            // ????;
            break;
        case 2:
            // ????;
            break;
        }
    } while (op > 0);
}

void menuFa() {
    int op = -1;
    do {
        printf("--- Veiculares ---\n");
        printf(":: Principal > Fabricantes ::\n");
        printf("[1] Cadastrar Fabricante\n");
        printf("[2] Listar Fabricantes\n");
        printf("[0] Voltar\n");
        printf("Selecione: ");

        scanf("%d", &op);

        switch (op) {
        case 1:
            // ????;
            break;
        case 2:
            // ????;
            break;
        }
    } while (op > 0);
}


// CADASTROS ---------------------------------------------------->
Fabricante cadastraFa() {
    printf("--- Veiculares ---\n");
    printf(":: Principal > Fabricantes > Cadastro ::\n");

    Fabricante f;
    f.nome = new char[100];

    printf("Nome: ");
    gets(f.nome);

    return f;
}
