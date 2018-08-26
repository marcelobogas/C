/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio_4_1(){
    
    int m[2][2], l, c, i, j, aux;
    
    printf("*** Aula 06 - exercicio 4 *** \n\n");
    
    for (l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            printf("Informe os números para armazenar na matriz: ");
            scanf("%d", &m[l][c]);
        }
    }
    //
    for (l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    if (m[l][c] < m[i][j]){
                        aux = m[l][c];
                        m[l][c] = m[i][j];
                        m[i][j] = aux;
                    }
                }
            }
        }
    }
    //
    printf("\nMatriz Ordenada \n");
    for (l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            printf("%d \t", m[l][c]);
        }
    }
    printf("\n");
}