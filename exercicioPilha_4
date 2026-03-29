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

void empilhar (Pilha *pilha, int valor)
{
    if (isFull(pilha))
    {
        printf("Erro! A pilha está cheia!\n");
        return;
    }
    pilha -> topo++;
    pilha -> numeros[pilha -> topo] = valor;
    pilha -> tamanho++;
}

int desempilhar (Pilha *pilha)
{
    if (isEmpty(pilha))
    {
        return -1; // retorna erro
    }

    int valor = pilha -> numeros [pilha -> topo];
    pilha -> topo--;
    pilha -> tamanho--;

    return valor;
}

int main() 
{
    setlocale(LC_ALL, "Portuguese");

    /*[EXTRA] Faça um programa em C que verifique se uma expressão aritmética tem parênteses balanceados.
    Exemplo saídas:

    Digite uma expressao: (a+b) -(i+u)
    Expressao com parenteses BALANCEADOS.

    Digite uma expressao: (a+b) - (d - y
    Expressao com parenteses DESBALANCEADOS.*/

    char expressao[100];
    int valido = 1;

    Pilha p;

    printf("Digite uma expressão: ");
    fgets(expressao, 100, stdin); // fgets(onde_guardar, tamanho_maximo, de_onde_ler);

    inicializarPilha(&p, strlen(expressao));

    for (int i = 0; expressao[i] != '\0'; i++)
    {
        if (expressao[i] == '(')
        {
            empilhar(&p, '(');
        }
        // Se encontrar fechamento ')', tenta tirar da pilha
        else if (expressao[i] == ')') 
        {
            if (isEmpty(&p)) 
            {
                // Tentou fechar mas a pilha estava vazia (ex: "a + b )")
                valido = 0;
                break;
            } 
            else 
            {
                desempilhar(&p);
            }
        }
    }

    if (valido && isEmpty(&p))
    {
        printf("Expressão com parenteses Balanceados!!");
    }
    else
    {
        printf("Expressão com parenteses Desbalanceados!!");
    }

    free(p.numeros);

    return 0;
}