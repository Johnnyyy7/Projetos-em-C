#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


#define MAX_SIZE 100


typedef struct
{
    char nome[50];
    int codigo;
} Produto;


typedef struct
{
    Produto dados[MAX_SIZE];
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
} Fila;


void inicializarFila (Fila *fila, int capacidade)
{
    fila -> capacidade = capacidade;
    fila -> inicio = 0;
    fila -> fim = -1;
    fila -> tamanho = 0;
}






typedef struct
{
    Produto dados[MAX_SIZE];
    int topo;
    int tamanho;
    int capacidade;
} Pilha;


void inicializarPilha (Pilha *pilha, int capacidade)
{
    pilha -> capacidade = capacidade;
    pilha -> topo = -1;
    pilha -> tamanho = 0;
}




int isFull(Pilha *pilha)
{ //cheia
    return pilha->topo == pilha->capacidade - 1;
}


int isEmpty(Pilha *pilha)
{ //vazia
    return pilha->topo == -1;
}












int main()
{


    setlocale(LC_ALL, "Portuguese");


    /*3. Elabore um programa em C que atenda as chamadas e menu abaixo:


Escolha o tipo de estrutura (1-Fila, 2-Pilha): 1
Digite a capacidade desejada para a estrutura: 3


Menu:
1. Adicionar produto
2. Remover produto
3. Mostrar estrutura
4. Buscar produto
5. Sair
Escolha uma opção:
*/


    Pilha pilha;
    int escolha, capacidade, tipoEstrutura;
    printf("Digite a capacidade desejada para a estrutura: ");
    scanf("%i", &capacidade);


    printf("escolha o tipo de estrutura (1-Fila, 2-Pilha): ");
    scanf("%i", &tipoEstrutura);


    if (tipoEstrutura == 1)
    {
        Fila fila;
        inicializarFila(&fila, capacidade);
        printf("Fila inicializada com capacidade %i\n", capacidade);
    }
    else if (tipoEstrutura == 2)
    {
        inicializarPilha(&pilha, capacidade);
        printf("Pilha inicializada com capacidade %i\n", capacidade);
    }




    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Remover produto\n");
        printf("3. Mostrar estrutura\n");
        printf("4. Buscar produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);


        switch (escolha)
        {
            case 1:
               
                break;
            case 2:
               
                break;
            case 3:
               
                break;
            case 4:


                break;
            case 5:
               
                printf("Encerrando o programa.\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }


    return 0;
}