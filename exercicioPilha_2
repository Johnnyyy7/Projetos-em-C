#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TamanhoMax 100

typedef struct
{
    char *palavras [TamanhoMax];
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

void adicionarPalavra (Pilha *pilha, char palavra[])
{
    if (isFull(pilha))
    {
        printf("Pilha cheia! Não é possível adicionar mais palavras.\n");
        return;
    }
    pilha -> topo++;
    pilha -> palavras[pilha -> topo] = (char*) malloc (strlen (palavra) + 1);
    strcpy (pilha -> palavras [pilha -> topo], palavra);
    pilha -> tamanho++;

    printf("Palavra [%s] adicionada.\n", palavra);
}

void desfazerPalavra (Pilha *pilha)
{
    if (isEmpty(pilha))
    {
        printf("Pilha vazia! Não há palavras para desfazer.\n");
        return;
    }
    printf("desfazendo: [%s]\n", pilha -> palavras [pilha -> topo]);
    char *palavrasRemovida = pilha -> palavras [pilha -> topo];
    free (palavrasRemovida);
    pilha -> topo--;
    pilha -> tamanho--;
}

void mostrarTexto (Pilha *pilha)
{
    if (isEmpty (pilha))
    {
        printf("Texto atual: (vazio)\n");
        return;
    }
    printf("Texto atual: ");
    for (int i = 0; i < pilha -> tamanho; i++)
    {
        printf("%s ", pilha -> palavras [i]);
    }
    printf("\n");
}

void liberarPilha (Pilha *pilha)
{
    while (!isEmpty(pilha))
    {
        free(pilha -> palavras[pilha -> topo]);
        pilha -> topo--;
        pilha -> tamanho--;
    }
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    /*2. Faça um programa em C que simula um editor de texto simples com a funcionalidade de Desfazer (Undo) utilizando uma pilha.

Exemplo

Menu:
1. Adicionar palavra
2. Desfazer ultima palavra
3. Mostrar texto atual
4. Sair
Escolha uma opcao: 3
Texto atual: oi meus queridos

Menu:
1. Adicionar palavra
2. Desfazer ultima palavra
3. Mostrar texto atual
4. Sair
Escolha uma opcao: 2
Desfazendo: "queridos"

Menu:
1. Adicionar palavra
2. Desfazer ultima palavra
3. Mostrar texto atual
4. Sair
Escolha uma opcao: 3
Texto atual: oi meus
*/

    Pilha pilha;
    int escolha;
    char palavra[TamanhoMax];

    inicializarPilha(&pilha, TamanhoMax);

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Adicionar palavra\n");
        printf("2. Desfazer ultima palavra\n");
        printf("3. Mostrar texto atual\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                printf("Digite a palavra para adicionar: ");
                scanf(" %[^\n]", palavra);
                adicionarPalavra(&pilha, palavra);
                break;
            case 2:
                desfazerPalavra(&pilha);
                break;
            case 3:
                mostrarTexto(&pilha);
                break;
            case 4:
                liberarPilha(&pilha);
                printf("Encerrando o programa.\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
