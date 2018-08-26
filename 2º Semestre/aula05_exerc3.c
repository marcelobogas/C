/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_exercicio3() {

    printf("*** Aula 5 - exercicio 3 *** \n\n");
    
    int cont, vet[5], i, j, aux;

    for (cont = 0; cont < 5; cont++) {
        printf("Digite o elemento da %dª posição: ", cont);
        scanf("%d", &vet[cont]);
    }
    printf("\n");

    for (i = 0; i < 4; i++) {        
        for (j = i + 1; j < 5; j++){            
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }            
        }        
    }
    
    for (j = 0; j < 5; j++) {
        printf("%d \t", vet[j]);
    }
    printf("\n\n");

}