/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_exercicio3(){
    
    int l, c, n[3][3], soma;
    
    printf("*** Aula 06 - exercicio 3 *** \n\n");
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("Informe os números para armazenar na matriz: ");
            scanf("%d", &n[l][c]);
        }
    }
    
    printf("\n");    
    soma = n[0][0] + n[1][1] + n[2][2];
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("n[%d][%d] = %d \n", l, c, n[l][c]);
        }
    }
    
    printf("\n");
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("%d \t", n[l][c]);
        }
        printf("\n");
    }
    
    printf("\nA soma da diagonal principal é = %d \n", soma);
    
}
