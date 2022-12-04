#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

void lerOrdem(int *ordem) {
    getchar();
    scanf("%d", ordem);
}

//manter como especificado
double **alocaMatriz(int ordem) {
    double **matriz;
    matriz = malloc (ordem * sizeof(double*));
    for(int i = 0; i < ordem; i++){
        matriz[i] = malloc(ordem * sizeof(double));
    }

    return matriz;
}

//manter como especificado
void desalocaMatriz(double ***M, int ordem) {
    for(int i = 0; i < ordem; i++){
        free((*M)[i]);
    }
    free(*M);
}

//manter como especificado
void lerOperacao(char *operacao) {
    getchar();
    printf("S ou M: ");
    scanf("%c", operacao);
}

void lerMatriz(double **M, int ordem) {
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%lf", &M[i][j]);
        }
    }
}

double somaMatriz(double **M, int ordem) {
    double soma = 0;
    int metade = ordem/2;

    for(int i = 0; i< metade; i++){
        for(int j = 0; j < ordem; j++){
            if( ((i =! j) && j < metade) && ((i + j) < (ordem - 1))){
                soma = M[i][j];
            }
        }
    }

    return soma;
}

double media(double resultado, int ordem) {
    
    double media = resultado/ordem;
    return media;
}

void printResultado(double resultado) {
    printf("%.1f", resultado);
}
