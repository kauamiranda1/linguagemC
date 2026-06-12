#include <stdio.h>

int soma(int a, int b){ return a + b; }
int subtracao(int a, int b){ return a - b; }
int multiplicacao(int a, int b){ return a * b; }
float divisao(int a, int b){ return (float)a / b; }

void menu(){
    printf("----------MENU-----------\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("Escolha uma opcao e aperte ENTER: ");
}

int main(){
    int opcao = 0;
    int a, b;

    menu();
    
    // espaço antes do %d ajuda a evitar bugs
    if (scanf(" %d", &opcao) != 1) {
        printf("Erro ao ler a opcao. Confira se voce digitou um numero\n");
    }

    printf("Voce escolheu a opcao: %d\n\n", opcao);

    printf("Digite o primeiro numero: ");
    scanf(" %d", &a);
    
    printf("Digite o segundo numero: ");
    scanf(" %d", &b);

    printf("\n--- RESULTADO ---\n");
    if (opcao == 1) {
        printf("Resultado: %d\n", soma(a, b));
    } 
    else if (opcao == 2) {
        printf("Resultado: %d\n", subtracao(a, b));
    } 
    else if (opcao == 3) {
        printf("Resultado: %d\n", multiplicacao(a, b));
    } 
    else if (opcao == 4) {
        if (b != 0) {
            printf("Resultado: %.2f\n", divisao(a, b));
        } else {
            printf("Erro: Nao e possivel dividir por zero!\n");
        }
    } 
    else {
        printf("Opcao invalida!\n");
    }

    printf("\nPressione ENTER para sair");
    getchar(); 
    getchar();
    
    return 0;
}
