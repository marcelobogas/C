/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_matriz_tripreencher(){
    
    int t, l, c, n[2][3][2];
    
    printf("*** Aula 6 - preencher matriz tridimensional *** \n\n");
    
    for (t = 0; t < 2; t++){
        printf("\n*** Tabela %d *** \n", t);
        for (l = 0; l < 3; l++){
            for (c = 0; c < 2; c++){
                printf("Posição [%d][%d][%d] = ", t, l, c);
                scanf("%d", &n[t][l][c]);
            }
        }
    }
    
    printf("\n*** Apresentando os dados da matriz tridimensional *** \n\n");
    
    for(t = 0; t < 2; t++){
        printf("\n*** Tabela %d *** \n", t);
        for (l = 0; l < 3; l++){
            for (c = 0; c < 2; c++){
                printf("Número[%d][%d][%d] = %d \n", t, l, c, n[t][l][c]);
            }
        }
    }
    
}