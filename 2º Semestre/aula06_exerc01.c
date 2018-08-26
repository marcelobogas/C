/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_exercicio1(){
    
    int l, c, n[2][2], soma;
    
    printf("*** Aula 06 - exercicio 1 *** \n\n");
    
    soma = 0;
    for (l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            printf("Informe números para armazenar na matriz: ");
            scanf("%d", &n[l][c]);            
            soma = soma + n[l][c];
        }
    }
    
    for(l = 0; l < 2; l++){
        for (c = 0; c < 2; c++){
            printf("\nPosição[%d][%d] = %d", l, c, n[l][c]);
        }
    }
    
    printf("\n\nA soma dos números da matriz = %d \n", soma);
    
}
