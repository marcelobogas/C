/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_exercicio2(){
    
    int l, c, n[3][3], cont;
    
    printf("*** Aula 06 - exercicio 2 *** \n\n");
    
    cont = 0;
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("Informe os números para armazenar na matriz: ");
            scanf("%d", &n[l][c]);
            
            if (n[l][c] % 2 == 0){
                cont++;
            }
        }
    }
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("\nPosição[%d][%d] = %d", l, c, n[l][c]);
        }
    }
    
    printf("\n\nAo todo foram digitados %d números pares \n\n", cont);
    
}