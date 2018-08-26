/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_exercicio4() {

    int l, c, n[2][2], vet[4], i, j, aux;

    printf("*** Aula 06 - exercicio 4 *** \n\n");

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("Informe os números para armazenar na matriz: ");
            scanf("%d", &n[l][c]);
        }
    }

    printf("\n");
    //
    //Colocar os valores da matriz dentro do vetor
    //
    i = 0;
    for (l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            vet[i] = n[l][c];
            i++;
        }
    }
    //
    //Ordenar o Vetor
    //
    aux = 0;
    for (i = 0; i < 4; i++){
        for (j = i + 1; j < 4; j++){
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    //
    //Voltar os valores ordenadas para a matriz
    //
    i = 0;
    for (l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            n[l][c] = vet[i];
            i++;
        }
    }
    //
    //Mostrar o resultado
    //
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d \t", n[l][c]);
        }
    }

    printf("\n");

}