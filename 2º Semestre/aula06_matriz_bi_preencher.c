/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_matriz_bipreencher(){
    
    int l, c, n[3][2];
    
    printf("*** Aula 6 - preencher matriz bidimensional *** \n\n");
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 2; c++){
            printf("posição [%d][%d] = ", l, c);
            scanf("%d", &n[l][c]);
        }
    }
    
    printf("\n*** Apresentando os dados da matriz bidimensional *** \n\n");
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 2; c++){
            printf("número [%d][%d] = %d \n", l, c, n[l][c]);
        }
    }
    
}