#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>




typedef struct
{
    int *numeros;
    int topo;
    int tamanho;
    int capacidade;
} Pilha;


void inicializarPilha(Pilha *pilha, int capacidade)
{
    pilha->topo = -1; //SIMILAR AO FIM DA FILA
    pilha->tamanho = 0;
    pilha->capacidade = capacidade;
    pilha->numeros = (int *)malloc(capacidade * sizeof(int));


}


int isFull(Pilha *pilha)
{ //cheia
    return pilha->topo == pilha->capacidade - 1;
}


int isEmpty(Pilha *pilha)
{ //vazia
    return pilha->topo == -1;
}


void adicionarNaPilha(Pilha *pilha, int valor)
{
    if (isFull(pilha))
    {
        printf("A pilha esta cheia. Nao eh possivel adicionar mais elementos.\n");
        return;
    }


    pilha->topo++;
    pilha->numeros[pilha->topo] = valor;
    pilha->tamanho++;
    printf("Elemento %d adicionado na pilha.\n", valor);
}


void removerDaPilha(Pilha *pilha)
{
    if (isEmpty(pilha))
    {
        printf("A pilha estah vazia. Nao ha elementos para remover.\n");
        return;
    }


    int valor = pilha->numeros[pilha->topo];
    pilha->topo--;
    pilha->tamanho--;
    printf("Elemento %d removido da pilha.\n", valor);
}


void mostrarPilha(Pilha pilha)
{
    printf("Conteudo da pilha:\n");
    for (int i = pilha.topo; i >= 0; i--)
    {
        printf("%d\n", pilha.numeros[i]);
    }
}


void inverterPilha (Pilha *pilha)
{
    if (isEmpty(pilha))
    {
        printf("A pilha está vazia! Não é possível inverter.\n");
        return;
    }


    int inicio = 0;
    int fim = pilha -> topo;


    while (inicio < fim)
    {
        int temp = pilha -> numeros[inicio];
        pilha -> numeros[inicio] = pilha -> numeros[fim];
        pilha -> numeros[fim] = temp;
        inicio++;
        fim--;
    }
        printf("Pilha invertida com sucesso!\n");
}


void trocarNumeros (Pilha *pilha)
{
    if (pilha -> tamanho < 2)
    {
        printf("É necessário no mínimo dois números.\n");
        return;
    }


    int temp = pilha -> numeros[0];
    pilha -> numeros[0] = pilha -> numeros[pilha -> topo];
    pilha -> numeros[pilha -> topo] = temp;


    printf("Números invertidos com sucesso!\n");
}


void somarNumeros (Pilha *pilha)
{
    if (isEmpty(pilha))
    {
        printf("A pilha está vazia! Soma = 0\n");
        return;
    }


    int soma = 0;
    for (int i = 0; i <= pilha -> topo; i++)
    {
        soma += pilha -> numeros[i];
    }
        printf("A soma de todos os números é %i.", soma);
}


int main()
{
    setlocale(LC_ALL, "Portuguese");


    int capacidade;


    printf("Digite a capacidade desejada da pilha: ");
    scanf("%d", &capacidade);


    Pilha pilha;
    int escolha, valor;


    inicializarPilha(&pilha, capacidade);


    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar elemento a pilha\n");
        printf("2. Remover elemento da pilha\n");
        printf("3. Mostrar pilha\n");
        printf("4. Sair\n");
        printf("5. Inverter a sequência da pilha\n");
        printf("6. Trocar o ultimo número pelo primeiro da pilha\n");
        printf("7. Somar todos os elementos da pilha\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);


        switch (escolha) {
            case 1:
                printf("Digite o valor a ser adicionado: ");
                scanf("%d", &valor);
                adicionarNaPilha(&pilha, valor);
                break;
            case 2:
                removerDaPilha(&pilha);
                break;
            case 3:
                mostrarPilha(pilha);
                break;
            case 4:
                free(pilha.numeros);
                printf("Encerrando o programa.\n");
                exit(0);
                break;
            case 5:
                inverterPilha(&pilha);
                break;
            case 6:
                trocarNumeros(&pilha);
                break;
            case 7:
                somarNumeros(&pilha);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }


    return 0;
}