#include <stdio.h>
#include "Fila_exercicio.h"
#include "Fila_exercicio.c"

int main () {
    FILA alunos = novaFila();
    inserirFinal(alunos, 9);
    inserirFinal(alunos, 8);
    inserirInicio(alunos, 2);
    inserirFinal(alunos, 3);
    inserirFinal(alunos, 10);
    imprimirFila(alunos);
    printf ("removido Inicio: %d \n", removerInicio(alunos));
    printf ("removido Final: %d \n", removerFinal(alunos));

    imprimirFila(alunos);

    while(!filaVazia(alunos))
        printf ("removido: %d \n", remover(alunos));


    inserirFinal(alunos, 12);
    inserirFinal(alunos, 32);
    inserirInicio(alunos, 22);
    printf("Nova Fila\n");
    imprimirFila(alunos);

    destroiFila(alunos);
    return 0;
}
