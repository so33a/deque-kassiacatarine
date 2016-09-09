#ifndef FILA_EXERCICIO_H_INCLUDED
#define FILA_EXERCICIO_H_INCLUDED

typedef struct node * link;
struct node {
    int item;
    link next;
    link prev;
};

typedef struct {
    link inicio;
    link fim;
} * FILA;

link novoNo(int item, link next, link prev);
FILA novaFila();
void inserirFinal(FILA f, int e);
int remover(FILA f);
void imprimirFila(FILA f);
void destroiFila(FILA f);
int filaVazia(FILA f);
void inserirInicio(FILA f, int e);
int removerInicio(FILA f);
int removerFinal(FILA f);

#endif // FILA_EXERCICIO_H_INCLUDED
